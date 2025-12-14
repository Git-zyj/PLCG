/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 = (max(16, 1));
                    var_21 = -68;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_22 = ((~(arr_4 [i_2 + 1] [i_2 + 1] [i_3])));
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] = (9 != 252);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 = (min(var_23, ((min((arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]), ((+(((arr_5 [i_0] [i_4]) ? (arr_11 [8] [8]) : 1)))))))));
                        arr_14 [i_4] [i_1] [i_1] [i_1] [i_1] = (~var_7);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_24 = var_5;
                        var_25 = (1 - 1551554073);
                    }
                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_2 + 1] [i_2] [i_6 - 2] [i_6] = ((var_8 ? var_8 : 261651582));
                        var_26 = 0;
                        var_27 *= (((((-(arr_12 [i_2] [i_6] [i_2] [i_0])))) ? (1253340821405438167 || -1) : (arr_9 [i_6 + 2] [i_2 + 1] [i_0])));
                        arr_21 [i_6] [i_2 + 1] [i_1] [i_0] = (9223372036854775807 == -261651583);
                    }
                }
            }
        }
        var_28 *= (~0);
    }
    var_29 = ((((min(var_13, 242))) ? ((0 & ((var_3 ? 1527456611 : 4294967286)))) : var_19));
    var_30 = (!(6620213546728226892 / -var_2));
    var_31 += ((var_4 - (((0 ? var_14 : ((1 ? var_15 : var_6)))))));
    #pragma endscop
}
