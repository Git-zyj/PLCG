/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50372
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((min((2147483641), (((/* implicit */int) (_Bool)1)))) | (max((((/* implicit */int) var_13)), (var_2)))));
                            var_16 = ((/* implicit */unsigned int) min((min((((/* implicit */short) (_Bool)1)), (var_6))), (min((arr_10 [i_1 + 1] [8] [(signed char)14] [i_3]), (arr_10 [i_1 + 1] [i_1 + 1] [i_2] [2U])))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((((((/* implicit */_Bool) 1104985107)) ? (arr_4 [i_3] [i_2 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) != (((unsigned long long int) arr_9 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 1]))))));
                            var_18 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_0 + 2] [i_0 + 3])) : (var_1))), (((/* implicit */int) max((arr_5 [i_1 + 1] [i_0 + 3] [i_0 + 3]), (arr_5 [i_1 + 1] [i_0 - 2] [i_0 + 3]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_0 - 2]))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned long long int) 1266790375)) : (var_14)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (var_8))));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
}
