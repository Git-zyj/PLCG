/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_9));
    var_14 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-((min(var_1, (arr_3 [i_1 - 1]))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = (min(var_12, (arr_0 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] = ((((((arr_4 [i_3]) & ((var_7 & (arr_10 [7] [i_1] [i_2] [i_2] [i_3] [i_4])))))) ? (((arr_9 [i_0 - 2] [i_1 - 2] [i_1 + 2]) & (max(-2147483637, var_7)))) : 0));
                                var_16 *= (var_5 / 3339181853);
                                var_17 = var_5;
                            }
                        }
                    }
                    arr_15 [i_2] = 3339181854;
                }
                var_18 ^= (((arr_11 [i_1 - 1] [1] [15] [i_0] [i_0 + 2]) < 127));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_19 = (min(var_19, var_10));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_25 [i_7 + 1] [i_6] [i_1] [i_5] [i_1] [i_1] [i_0] = var_10;
                                var_20 = (max(var_20, ((1 ? (var_6 % var_12) : (((~(arr_2 [i_0 + 1]))))))));
                                var_21 |= (((((3170406973426141878 ? 955785437 : 1665251242))) | (var_12 % 46320)));
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_29 [i_0] [i_0 - 1] = ((((var_7 & (arr_10 [i_0] [i_0 - 2] [i_0] [i_0 + 2] [i_1] [i_1 - 2]))) + var_7));
                    var_22 |= (min(var_1, (((arr_7 [i_0 + 1] [i_8] [5] [i_8]) * var_2))));
                    var_23 = (max(var_23, (~2629716053)));
                    arr_30 [i_0 + 1] [i_1] [i_8] [i_8] = 0;
                    var_24 = (max(-667093824, (arr_24 [i_0 + 1] [i_1] [i_0] [i_1])));
                }
            }
        }
    }
    var_25 = var_8;
    #pragma endscop
}
