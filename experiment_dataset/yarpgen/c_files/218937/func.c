/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218937
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)20339)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)32280)), (var_1)))) : (max((((/* implicit */long long int) (signed char)-102)), (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (((+(var_0))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)120)) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))));
                arr_6 [i_0] = min((((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_0] [i_1]))))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0])))))))), (arr_4 [i_0] [i_1] [i_0]));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) var_4))));
}
