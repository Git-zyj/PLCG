/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (max((min((arr_5 [i_1 - 3]), (arr_3 [i_0 - 1] [i_0 - 2] [i_1 - 2]))), ((max((min(var_6, var_4)), var_5)))));
                    arr_9 [i_1] = (arr_4 [i_2]);

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_12 = (arr_6 [i_3 - 1] [i_2] [i_1 - 2] [i_0]);
                        var_13 ^= ((+(((((arr_7 [5] [i_1] [i_1]) * var_8))))));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        arr_15 [1] [i_1] [5] [i_4 - 2] = ((~((((min((arr_14 [i_4 - 1] [i_4] [i_1] [i_1] [i_1] [i_0]), var_5))) + (arr_4 [10])))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] [2] = (arr_3 [i_2] [5] [11]);
                            arr_21 [i_0] [i_0] [i_1] [i_0] [1] [i_4 + 1] [i_4 + 1] = var_9;
                        }
                        arr_22 [i_4 + 2] [i_1] [i_1] [i_1] [i_1] [i_0] = (!-1138893931);
                        arr_23 [i_0 + 1] [i_1] [i_1] = var_2;
                        var_14 = (min(var_14, (((min((arr_17 [i_0] [i_0] [i_0] [i_1 - 3] [i_1] [i_0] [i_1 - 3]), (arr_7 [i_0 + 2] [i_0 + 2] [i_1 + 1])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_15 = (~var_10);
                        var_16 = (arr_18 [i_6 - 1] [i_6] [i_2] [i_1 - 3] [9]);
                        var_17 = (max(var_17, var_3));
                    }
                }
            }
        }
    }
    var_18 = var_8;
    var_19 |= var_9;
    var_20 = (max(var_20, var_1));
    #pragma endscop
}
