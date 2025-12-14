/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26649
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                arr_5 [i_0] [i_0] [(unsigned char)7] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_0]);
                arr_6 [6U] &= ((/* implicit */unsigned short) 4294967295U);
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_2] [i_4]);
                                var_16 = ((/* implicit */unsigned char) (~(((arr_4 [i_2 - 3] [i_2 + 2] [i_2 + 3]) ? (4294967295U) : (((unsigned int) var_2))))));
                            }
                        } 
                    } 
                    var_17 ^= ((((/* implicit */_Bool) (~(arr_12 [i_2] [i_2 - 3] [i_2] [i_2 - 2])))) && (((/* implicit */_Bool) arr_13 [(unsigned short)5] [i_1] [i_2 + 2])));
                }
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) max((var_11), (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_7))))));
}
