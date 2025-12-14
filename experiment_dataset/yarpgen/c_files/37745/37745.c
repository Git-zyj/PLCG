/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 40494;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_18 *= (max(var_2, (arr_1 [i_0 - 2])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_12 [i_2] = var_0;

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {

                    for (int i_4 = 4; i_4 < 13;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] = ((var_14 ? var_4 : ((4293918720 ? -32766 : (arr_14 [i_4] [i_3] [0] [1] [3] [i_0])))));
                        var_19 = (min(var_19, var_1));
                        arr_18 [i_2] = ((~(!10287717659641490657)));
                    }
                    var_20 += (arr_11 [i_2] [i_2]);
                    arr_19 [i_3] [i_2] [i_2] [i_0] = -var_11;
                }
                var_21 = (var_16 - var_10);
                arr_20 [i_0] [7] [i_2] [i_2] = 1;
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_22 = (max(var_22, -var_10));
                var_23 += -63;
            }

            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = -1;
                            var_25 = (max(var_25, ((((arr_4 [i_0 - 2]) ? var_7 : 1)))));
                        }
                    }
                }

                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    var_26 += ((1 ? var_2 : (arr_25 [i_0 + 2] [i_6] [i_0 + 1] [i_9 + 1] [i_9 - 2])));
                    var_27 = var_2;
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_39 [i_12] [i_11] [i_10] [i_1] [i_0 + 2] = -var_4;
                            arr_40 [i_11 - 1] [i_0] = var_6;
                        }
                    }
                }
                var_28 = var_13;
                arr_41 [i_0] [11] [i_10] [i_0 + 1] = (arr_28 [i_0 + 2] [i_0] [i_0 - 3] [i_0 + 2] [i_0]);
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                arr_44 [i_0] [i_0] [i_13] [i_0] = ((8801 ? ((0 ? 20 : var_8)) : (arr_33 [i_0 + 1])));
                arr_45 [i_0] [i_13] = 25042;
                arr_46 [i_0] [i_0] [i_0] [i_1] = (var_12 * (arr_11 [i_0 + 1] [i_0 - 2]));
                var_29 = 651175378;
            }
        }
        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        var_30 = (max((((0 ? 1 : var_2))), (min((~var_12), (arr_23 [i_0 + 2] [13] [i_0 + 2])))));
                        arr_53 [i_16] [i_15] [i_14 + 4] [i_0] = var_8;
                    }
                }
            }
            var_31 = (((arr_27 [i_0] [i_14] [i_0 - 1] [i_0 - 1] [2] [i_14 + 2]) > (!var_14)));
        }
        arr_54 [i_0 - 2] [i_0] &= (max(var_10, (arr_38 [i_0 - 3] [i_0 + 2] [i_0 - 3] [i_0 - 1] [i_0] [i_0] [i_0 - 3])));
    }
    var_32 &= var_7;
    var_33 = var_13;

    for (int i_17 = 0; i_17 < 10;i_17 += 1)
    {
        var_34 ^= ((~((var_1 ? 7 : var_5))));
        arr_58 [i_17] [i_17] = (max(1294262959569572525, ((var_14 ? (min(7769458565085674673, -4194)) : 5345942121462721633))));
        arr_59 [8] = (max((((-6229 < 38) ? ((var_0 ? var_8 : var_16)) : var_4)), ((((arr_28 [i_17] [i_17] [i_17] [11] [i_17]) * 0)))));
    }
    #pragma endscop
}
