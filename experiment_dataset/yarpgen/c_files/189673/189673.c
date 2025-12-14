/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_14 ? ((((max(2953218363449852682, var_15))) ? ((var_12 ? 1736623662 : -8)) : (8 * -26570))) : var_16));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (((1 & (arr_2 [i_2]))));
                    arr_8 [i_2] = (max((242 | var_1), 2252378054));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_12 [i_3] = ((~(arr_10 [i_3])));
        arr_13 [i_3] = var_4;
        var_20 = var_6;

        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            arr_16 [i_3] [i_3] = ((!(((~(arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
            var_21 -= min(((-(arr_1 [6] [i_4 + 1]))), (((arr_1 [i_4] [i_4 + 1]) ? var_1 : (arr_1 [i_4 - 1] [i_4 + 1]))));
            arr_17 [i_3] = 4294967293;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_25 [i_3] [i_4 - 1] [i_4 - 1] = (max(6471124691472440620, 16344097736940227648));
                            arr_26 [i_6] [i_6] [i_6] = (arr_10 [i_5]);
                            arr_27 [i_3] [i_4] [i_5] [i_6] [i_7] = (arr_24 [i_5] [i_6]);
                            var_22 = (max(var_22, ((((((((min(var_17, (arr_4 [i_3] [i_3] [i_5])))) ? (((arr_24 [9] [i_3]) << (var_7 - 6824941092968500519))) : (var_15 != var_9)))) ^ var_7)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 8;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_39 [i_3] [i_9] = arr_36 [i_10] [i_3] [i_3] [i_3];
                            var_23 = ((((((arr_9 [1]) % var_3))) ? ((max(((var_11 | (arr_9 [i_8]))), (max((arr_31 [i_3]), (arr_38 [i_3] [i_8] [i_8] [i_8] [i_8])))))) : (min((arr_5 [i_3] [i_8] [i_3] [i_10]), (arr_23 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 2] [i_9])))));
                        }
                    }
                }
            }
            var_24 = 1;
            arr_40 [i_3] [i_3] [i_3] = min((arr_18 [9]), (((6272746754365626250 != (min(2042589242, 185))))));
            arr_41 [i_3] [i_8] = (min((arr_2 [i_8 + 1]), (arr_35 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 3])));
            var_25 = (((min((((arr_20 [i_3] [2] [2]) ? -1217998591 : 1217998579)), (arr_20 [i_3] [i_3] [i_3]))) - 0));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_45 [i_12] = ((~(arr_5 [i_3] [i_3] [i_3] [i_12])));
            arr_46 [i_3] [i_12] [i_3] = (((arr_15 [i_3]) * (arr_36 [i_3] [i_3] [i_3] [i_12])));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
        {
            var_26 *= ((max((arr_48 [i_3] [i_3]), (min((arr_20 [i_3] [i_3] [i_13]), var_7)))));
            var_27 = (((min((arr_9 [i_3]), (arr_9 [i_3])))) ? ((min(var_18, (arr_9 [i_3])))) : (arr_9 [i_3]));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    {
                        arr_56 [i_15] [i_14] [i_3] = (!22);
                        var_28 = (min((min((arr_53 [i_15] [i_13] [i_3]), (((arr_36 [i_3] [i_3] [i_3] [i_3]) % var_10)))), (~0)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        var_29 = (((arr_23 [i_16] [i_13] [i_16] [i_17] [4] [i_3]) * (arr_57 [i_3] [i_3] [i_3])));
                        arr_61 [i_3] [i_16] = (min((min((arr_18 [i_13]), ((~(arr_21 [i_13] [i_13] [i_16] [i_17] [i_3]))))), (arr_5 [i_3] [i_3] [i_17] [i_3])));
                    }
                }
            }
        }
        var_30 = (max(var_30, ((((((var_15 << (((arr_52 [i_3] [i_3] [i_3] [i_3]) - 6234162981648457652))))) ? ((((((arr_54 [i_3]) ? var_14 : (arr_43 [i_3] [i_3])))) ? var_18 : (arr_42 [i_3] [i_3]))) : (arr_23 [i_3] [0] [4] [i_3] [i_3] [i_3]))))));
    }
    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        arr_64 [i_18] [i_18] = (arr_0 [i_18] [i_18]);
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                {
                    var_31 = (min(1, 2422592180));
                    var_32 = ((((max(1084411258, -6771061273427083846))) ? (max(13134242120042578775, (arr_70 [i_18] [i_18] [i_19]))) : (~var_13)));
                    var_33 = arr_66 [i_18] [i_19];
                    arr_71 [i_19] [i_19] [i_19] = var_5;
                }
            }
        }
        var_34 = (arr_1 [i_18] [i_18]);
        var_35 = (min((arr_70 [i_18] [i_18] [i_18]), ((~(arr_63 [i_18])))));
    }
    #pragma endscop
}
