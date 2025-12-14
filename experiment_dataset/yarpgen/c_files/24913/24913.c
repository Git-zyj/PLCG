/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_3 & -var_5) ? var_1 : var_6));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = (~var_8);
        arr_3 [i_0 + 1] = (((-var_9 ? 117955723 : 115)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_3] = ((((((var_6 ? var_1 : var_9)) ? var_3 : ((var_2 ? var_8 : var_2))))));
                        arr_13 [17] [i_2] [9] [i_2] = var_7;
                        var_12 = var_6;
                        arr_14 [i_0 - 1] [i_1] [i_2] [i_2] [18] = (((((-((-7383257 ? 3717552376 : 0))))) ? var_3 : (var_0 == var_5)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_13 = var_3;
        var_14 = var_4;

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_28 [i_4] [14] [i_6 - 1] [i_7] [i_8] = (var_5 ? ((var_1 ? var_6 : var_5)) : var_2);
                            arr_29 [i_4] [2] [i_6] [i_7] [i_8] = var_9;
                            arr_30 [i_7] [i_5] [i_7] [i_7] [i_8 + 1] = var_9;
                        }
                    }
                }
            }
            arr_31 [i_5] [i_4] [i_4] = (!1);
            arr_32 [0] = (((((var_1 ? -var_7 : var_8))) ? (((((var_6 ? var_9 : var_8)) > -var_5))) : var_0));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_35 [i_4] [i_4] [i_4] = var_4;
            arr_36 [i_9] = (!var_0);
            arr_37 [i_9] = (((0 ? 4294967295 : 1)));
            arr_38 [i_4] [i_9] [i_9] = var_3;
        }
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_42 [i_10] [i_10] = (!var_4);
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    arr_49 [i_10] [i_10] [i_11] [i_10] = (((((var_0 ? 255 : -var_6))) ? (((var_9 & var_3) & (!var_4))) : var_5));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_15 = (var_0 != -var_3);
                                arr_56 [i_10] [i_10] [i_10] [i_11] = var_3;
                                var_16 = (((((~((1 ? var_5 : var_4))))) ? (var_9 | var_6) : (((var_9 ? var_5 : var_7)))));
                                var_17 = 1;
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_15 = 1; i_15 < 23;i_15 += 1)
    {
        arr_59 [i_15] = var_8;
        var_18 = (var_5 & var_4);
        var_19 = 31;
    }
    for (int i_16 = 1; i_16 < 15;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 12;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                {
                    arr_68 [i_17] [12] = (!var_5);
                    arr_69 [i_17] [i_17 + 4] [i_17] = ((~(((!(!var_0))))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 16;i_20 += 1)
                        {
                            {
                                arr_75 [i_16 + 1] [i_17] [i_18] [i_17] [i_20] = -var_9;
                                arr_76 [i_17] [i_17] [i_20] = (((!var_5) & (((var_4 ? var_4 : var_0)))));
                                arr_77 [i_17] [i_17 + 2] [i_18] [i_19] = var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_78 [i_16] = (!var_8);
        /* LoopNest 2 */
        for (int i_21 = 2; i_21 < 15;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                {
                    arr_83 [i_22] [i_22] [i_22] = ((var_6 ? (((((var_6 >> (var_5 - 49246)))) ? var_4 : var_5)) : (((((var_4 << (var_5 - 49254)))) ? (!var_6) : var_2))));
                    var_20 = ((~(((var_3 | var_8) ? (~var_0) : ((var_7 ? var_8 : var_2))))));
                }
            }
        }
    }
    #pragma endscop
}
