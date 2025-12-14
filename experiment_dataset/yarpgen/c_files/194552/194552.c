/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] = var_3;
                            arr_12 [i_0] [7] [6] [i_1] [i_0] = (((var_13 ? var_10 : var_4)) - ((var_7 ? var_14 : var_18)));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_1] = (max(var_12, var_17));
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_17 [i_4] = var_16;
        var_19 = (((~var_16) ? (((var_7 ? var_12 : var_9))) : (max(((max(var_4, var_4))), (min(14286, 8))))));
        arr_18 [i_4] = -var_16;
    }
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        var_20 += (((var_18 && -var_4) && ((((((var_13 ? var_17 : var_8))) ? var_16 : (max(var_14, var_5)))))));
        var_21 = var_10;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_22 = (((max(var_16, var_10))) ? var_5 : var_7);
        var_23 = var_16;
        arr_25 [i_6] = var_8;
    }
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 19;i_9 += 1)
            {
                {
                    var_24 = ((~(~var_8)));
                    var_25 = (min((min(var_1, ((var_6 ? var_11 : var_17)))), ((-(!var_5)))));
                    arr_36 [1] [i_9] = ((((min(var_9, (var_14 % var_12)))) ? var_3 : (min(var_5, (~var_4)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    {

                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            var_26 = var_6;
                            var_27 = var_0;
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            arr_52 [i_7] [i_10 + 2] [i_11 - 3] [i_12 - 1] [i_12] [i_10] = (((((((min(var_4, var_18))) ? var_17 : var_13))) ? ((var_4 ? var_3 : var_9)) : (~var_11)));
                            var_28 += var_6;
                            var_29 = var_6;
                            arr_53 [8] [8] [i_10] [i_14] = var_10;
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_57 [i_10] [i_10 + 1] [5] [i_10] = var_6;
                            arr_58 [i_10] [i_10] = var_11;
                        }
                        var_30 = (max(var_30, (((-(min(((var_8 ? var_6 : var_4)), -var_6)))))));
                        var_31 = (min(((((((var_5 ? var_14 : var_10))) ? var_8 : (~var_6)))), var_13));
                    }
                }
            }
        }
        var_32 ^= (((min((var_5 / var_1), var_9)) >> (((~var_15) - 4053182306))));
        var_33 = (var_16 < var_18);
        arr_59 [i_7] = -var_11;
    }
    #pragma endscop
}
