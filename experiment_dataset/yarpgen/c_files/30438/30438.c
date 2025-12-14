/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = var_8;
        arr_5 [i_0] [16] &= var_12;

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] [i_1] = var_11;

            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                var_13 = var_2;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_14 = var_3;
                            arr_18 [i_0] [i_0] [i_1 + 2] [i_0] [i_0] [i_4 - 1] [i_4 + 1] = var_11;
                            arr_19 [i_0] [i_2] [i_0] [i_4 + 1] = var_0;
                            arr_20 [i_0 + 4] [14] [i_0] [14] [i_0] &= var_6;
                        }
                    }
                }
                var_15 *= var_0;
                var_16 = var_10;
            }
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_17 *= var_0;
            arr_23 [i_0] = (~var_10);
        }
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_18 = ((~(max(var_3, -var_11))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_19 = (!var_6);
                            arr_38 [i_6] [i_7] [3] [i_7] [i_7] [i_7] = (+-var_8);
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_20 *= (max(var_6, (max(var_5, ((max(var_2, var_11)))))));
                            var_21 = var_1;
                        }
                    }
                }
                var_22 = var_6;
                arr_46 [i_6] [i_6] = var_7;

                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_50 [15] [i_6] [5] [i_14] = (max(((~((max(var_6, var_3))))), (~var_6)));
                    arr_51 [i_7] [i_6] [i_6] [i_6 + 2] = (max(var_9, -var_11));
                    var_23 -= var_9;

                    for (int i_15 = 2; i_15 < 21;i_15 += 1)
                    {
                        arr_55 [i_15 + 1] [i_6] [i_14] [17] [i_6 + 2] [i_6] [i_6 + 2] = (max(var_7, ((min(var_11, var_2)))));
                        var_24 &= (min((max(((max(37086, 96))), -var_8)), var_6));
                    }
                }
            }
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                arr_59 [i_6] [i_7] [i_7] = -var_6;
                arr_60 [20] [i_7] [i_16 + 1] |= (min((!var_12), (((!((min(var_8, var_4))))))));
            }
            for (int i_17 = 3; i_17 < 21;i_17 += 1)
            {
                var_25 *= -var_3;
                arr_64 [i_6 + 1] [i_7] [i_6] = (max(var_3, var_9));
            }
        }

        for (int i_18 = 1; i_18 < 19;i_18 += 1)
        {
            arr_67 [20] [i_6 + 2] [i_6] = (min(((min(var_6, var_10))), -var_12));
            var_26 = (min(var_26, (!var_3)));
            var_27 = var_8;
        }
        var_28 = (max(-var_12, (((!((max(var_2, var_6))))))));
    }
    var_29 = ((~(max(-var_5, var_10))));

    for (int i_19 = 2; i_19 < 16;i_19 += 1) /* same iter space */
    {
        arr_70 [i_19 - 1] [i_19] = var_6;
        var_30 -= -var_1;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 16;i_21 += 1)
            {
                {
                    var_31 = (~var_8);
                    arr_76 [1] [i_20] [i_20] [i_19 - 2] = ((min((max(var_0, var_4), var_6))));
                    var_32 -= var_8;
                }
            }
        }
        arr_77 [i_19] [11] = ((!((!((min(var_0, var_7)))))));
        var_33 = var_5;
    }
    /* vectorizable */
    for (int i_22 = 2; i_22 < 16;i_22 += 1) /* same iter space */
    {

        for (int i_23 = 4; i_23 < 17;i_23 += 1)
        {
            var_34 = (min(var_34, -var_8));
            var_35 &= (!-44);
        }
        var_36 -= var_6;
        arr_82 [i_22] = -37086;
    }
    #pragma endscop
}
