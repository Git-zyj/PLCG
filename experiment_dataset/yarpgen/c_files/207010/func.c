/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207010
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
    var_19 = ((/* implicit */long long int) max((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])), (((((/* implicit */int) var_3)) / (((/* implicit */int) var_4))))))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (859497520U)))), (((long long int) (_Bool)1)))) ^ (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) var_9)))))));
                    var_21 -= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (((long long int) arr_1 [i_0]))));
                    var_23 = ((/* implicit */unsigned short) min((min((((/* implicit */int) min((var_7), (((/* implicit */short) var_9))))), ((-(((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_6);
}
