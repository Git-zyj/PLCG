/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231237
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
    var_10 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((_Bool) var_3))), (max((1483072127U), (((/* implicit */unsigned int) var_2)))))), (((/* implicit */unsigned int) ((((long long int) var_3)) == (var_7))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((long long int) (~(arr_4 [i_0] [i_1] [i_1]))));
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) arr_2 [(short)3]);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) (-(arr_11 [i_3] [i_2 - 1] [i_0] [i_1] [i_1])));
                                arr_15 [i_4] [i_1] [i_2 + 2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                                arr_16 [i_4] [i_1] [1ULL] [i_1] [i_1] [i_0] = ((/* implicit */short) ((long long int) arr_3 [i_2 - 1] [i_2 - 1]));
                            }
                            arr_17 [i_1] [i_2 + 2] [i_1] [i_1] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_2 + 1]);
                            var_12 = (((+((-(arr_4 [6ULL] [i_1] [(short)6]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_13 [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
