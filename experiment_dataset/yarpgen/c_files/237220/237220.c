/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (((~(arr_0 [i_0] [i_1]))) | ((-4294967295 ? (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((1 || (arr_3 [i_1 - 1] [i_1])))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_14 ^= ((((var_1 ^ (arr_5 [10] [6] [i_0] [i_0]))) >= ((var_1 ? var_9 : 482445272))));
                    var_15 &= var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] [i_2] [i_2] [1] = (((arr_10 [i_0] [i_3] [i_2 - 1] [i_2 - 1] [i_4]) ? (arr_10 [i_0] [i_3] [i_2] [i_2 - 1] [i_2]) : var_7));
                                var_16 = (max(var_16, var_0));
                                var_17 ^= (((arr_4 [i_1] [1] [i_3] [i_4]) > ((var_9 ? var_5 : (-9223372036854775807 - 1)))));
                                var_18 = (min(var_18, var_2));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((arr_2 [2] [i_1] [6]) ? (arr_1 [i_0]) : ((2147483647 ? var_9 : (((var_10 + (arr_1 [2])))))));
            }
        }
    }
    var_19 = (((var_3 - (482445274 + 24576))));
    #pragma endscop
}
