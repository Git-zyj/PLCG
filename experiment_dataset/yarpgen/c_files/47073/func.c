/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47073
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
    var_16 = ((/* implicit */short) var_4);
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31543))) | (((((/* implicit */_Bool) var_14)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106)))))));
                var_19 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0])))));
                var_20 += ((/* implicit */unsigned short) ((max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (short)0))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(unsigned char)4])))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */long long int) min((arr_2 [i_1] [i_0]), (((/* implicit */unsigned int) var_5))))))));
            }
        } 
    } 
}
