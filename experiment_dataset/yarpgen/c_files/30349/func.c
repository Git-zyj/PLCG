/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30349
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10276072223068936049ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0])))))))) > (((max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_1] [i_1]))) << (((((/* implicit */int) (signed char)66)) - (59)))))));
                arr_4 [i_1] = ((/* implicit */_Bool) (+(var_0)));
                arr_5 [i_1] [i_1 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)-56))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_10))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) 7ULL)))) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)56)))))));
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (unsigned short)1753))))) | (((((/* implicit */_Bool) 0)) ? (7ULL) : (((/* implicit */unsigned long long int) 4069290289U)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30809)))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(var_10))))));
}
