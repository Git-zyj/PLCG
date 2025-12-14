/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (max(var_21, (((~(arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = (((4797632753027794703 && (arr_4 [i_0] [i_0] [i_2 - 1]))) ? -var_13 : 4797632753027794696);
                        var_23 = (((((var_0 % (arr_1 [i_0])))) + -1));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_3] = (arr_1 [i_2]);
                            var_24 = (87 || 2147483647);
                            arr_13 [i_0] [8] [i_1 + 2] [i_2] [i_3] [i_4] = (~(~var_0));
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_25 = ((~(~var_16)));
                            var_26 -= -var_7;
                        }
                    }
                }
            }
        }
        var_27 = (!var_17);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_28 ^= ((!((min(4294967295, (1 << 1))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    {
                        var_29 -= (max((((min(1, 0)) || -var_12)), 0));
                        var_30 = (max(var_30, (((~(min(var_18, ((0 ? var_8 : 4294967284)))))))));
                    }
                }
            }
        }
        arr_30 [i_6] [i_6] = ((((~(max((arr_4 [i_6] [i_6] [i_6]), var_3)))) == (((!1) & (2208141444517481968 % var_13)))));
        arr_31 [i_6] = (~1);
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 16;i_13 += 1)
                {
                    {
                        arr_44 [i_11] = ((-0 ? (((1 ? (arr_41 [i_10]) : 1))) : (max(9, var_6))));
                        arr_45 [i_10] [i_11] [i_11] [1] [i_13 - 3] = ((var_15 >> (((((((-(arr_42 [i_10] [i_10] [i_10] [i_12])))) + (max(1, var_16)))) + 1626760578))));
                        arr_46 [i_10] [i_11] [i_12 + 1] [i_11] = (arr_40 [i_13] [i_11] [6]);
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                arr_52 [i_14] = (1 ? (((var_0 >= (arr_33 [i_10])))) : (arr_35 [i_10] [i_15]));
                arr_53 [i_14] = (var_12 - var_14);
            }

            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        {
                            arr_63 [0] [i_14] = (((((max((arr_61 [i_10]), 2518562132212142553))) ? (((~(arr_59 [i_10] [i_10] [i_10] [i_17])))) : (min(1, var_6)))));
                            var_31 = max((((~(arr_40 [i_17 + 1] [i_17] [i_16 - 2])))), ((((max((arr_49 [i_14] [i_14]), (arr_59 [i_16] [i_16] [i_16] [0])))) ? (min(var_18, var_4)) : (2147483647 && 249))));
                        }
                    }
                }
                var_32 = 0;
                arr_64 [i_10] [i_14] [i_14] [i_10] = ((~((4797632753027794703 ? (-1 <= var_12) : 947871124))));
                var_33 = ((max((arr_43 [i_16 - 2] [i_16] [i_16] [i_16] [i_16] [i_16]), (arr_43 [i_16 + 1] [i_16] [i_16 + 1] [i_16] [i_16] [i_16]))));
            }
        }
    }
    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        arr_68 [i_19] = (arr_51 [i_19] [2] [i_19] [i_19]);
        arr_69 [i_19] = ((((max(var_17, 61))) ? -var_10 : (((!var_3) ? (max((arr_32 [i_19] [i_19]), 217843174260322352)) : var_19))));
    }
    #pragma endscop
}
