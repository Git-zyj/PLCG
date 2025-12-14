/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_4, var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = (arr_1 [i_0 + 1] [i_0 + 1]);
        var_13 = (max(var_13, (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 = var_2;
            var_15 = (((arr_6 [i_0 + 2] [i_1] [i_1]) != var_5));
            var_16 = var_7;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 = arr_16 [i_4] [i_3] [i_2] [i_0 + 1];
                        arr_17 [i_0] [i_3] [i_3] = var_9;
                        var_18 = (~var_5);
                    }
                }
            }

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_19 = (arr_23 [i_0 + 2] [i_2] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]);
                            var_20 = (arr_9 [i_0] [i_0]);
                        }
                    }
                }
                var_21 = (min(var_21, var_6));
            }
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_22 ^= var_1;
                            var_23 = var_10;
                            var_24 -= (~var_10);
                        }
                    }
                }
            }
            var_25 = var_7;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_38 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] = arr_2 [i_12];
                        var_26 = ((-(arr_21 [i_2])));
                    }
                }
            }
        }
        var_27 = ((var_1 << (var_6 - 1034)));
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 7;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 8;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 9;i_16 += 1)
                {
                    {
                        arr_48 [i_15] [i_14] [i_14] [i_15] = var_9;
                        arr_49 [i_14] &= var_9;
                        var_28 = (arr_18 [i_13] [i_13] [i_15] [i_13]);
                    }
                }
            }
        }
        var_29 = (arr_46 [i_13] [i_13] [6] [i_13 + 2]);
    }
    for (int i_17 = 3; i_17 < 7;i_17 += 1) /* same iter space */
    {
        var_30 = (!var_7);
        var_31 = var_10;

        for (int i_18 = 3; i_18 < 8;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        {
                            var_32 ^= (~var_3);
                            var_33 = (min(var_10, (arr_4 [i_17 - 2] [i_17 - 1])));
                            arr_65 [i_17 - 3] [i_18] [i_17] [i_20] [i_21] = var_9;
                        }
                    }
                }
            }
            var_34 = ((((max((arr_23 [i_17 + 2] [i_17] [i_18 - 1] [i_18] [i_18] [i_17 + 2]), ((var_2 ? (arr_12 [i_18 - 3] [i_17] [i_17] [i_17]) : var_4))))) ? var_1 : (arr_62 [i_17] [i_18] [i_17 + 2] [i_18 - 2] [i_18])));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 7;i_23 += 1)
                {
                    {
                        var_35 = (arr_46 [i_18 - 3] [i_18 - 3] [i_17] [i_23 - 1]);

                        for (int i_24 = 0; i_24 < 10;i_24 += 1)
                        {
                            var_36 = (min((min(var_6, (arr_55 [i_18 + 2] [i_23 - 1]))), var_5));
                            var_37 = (min((((arr_35 [i_18 - 1] [i_17 - 3] [i_22]) ? var_0 : (arr_35 [i_18 - 1] [i_17 - 3] [i_18]))), ((var_8 ? var_4 : var_0))));
                            var_38 = var_1;
                            var_39 = (max((!var_5), (arr_21 [i_23 - 1])));
                        }
                        var_40 = ((-(((arr_36 [i_23] [i_18 - 2] [i_18] [i_17 - 3]) ? (arr_36 [i_22] [i_18] [i_18] [i_18]) : (arr_31 [i_23] [i_23 + 3] [i_17] [i_17] [i_22] [i_22])))));
                        var_41 &= arr_42 [i_22];
                        var_42 = (arr_15 [i_17 + 3]);
                    }
                }
            }
        }
        arr_73 [i_17] = (min((max(-var_0, var_1)), -18314));
    }
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 22;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 22;i_26 += 1)
        {
            {
                arr_78 [i_25] = ((((min(var_6, (min(var_4, (arr_75 [i_25])))))) ? (arr_75 [i_25]) : (arr_75 [i_25])));
                var_43 = (max((arr_76 [i_25] [i_25]), 18313));
            }
        }
    }
    var_44 = (max(((((var_6 ? var_7 : var_5)))), var_3));
    #pragma endscop
}
