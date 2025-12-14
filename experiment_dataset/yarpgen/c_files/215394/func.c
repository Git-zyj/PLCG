/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215394
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) 8157829704064528880ULL)))))), (((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_0])))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_20 *= 3803283250U;
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(var_0))))));
                }
                var_22 = ((/* implicit */unsigned short) min((var_22), (var_2)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_12))));
}
