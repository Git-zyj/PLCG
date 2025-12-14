/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_10 = ((((((((var_8 ? var_0 : var_8))) ? (((min(var_1, var_3)))) : var_3))) ? var_4 : var_1));
        var_11 = var_1;

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [9] [i_1] = var_3;
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_12 = 40349;
                        var_13 = (((2249166305826241915 ? 17460972029772118559 : 17460972029772118583)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    {
                        var_14 = (max(var_14, ((min(((min(var_6, var_9))), (((((var_4 ? var_2 : var_3))) ? -28437 : var_0)))))));
                        arr_18 [i_0] [i_1] [i_4 - 1] [i_5] = var_1;
                        arr_19 [i_1] [i_1] = ((var_6 ? 985772043937433057 : var_0));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [6] = ((((((((var_5 ? var_9 : var_2))) ? var_5 : (max(var_5, var_4))))) ? var_2 : var_3));
            arr_25 [i_0] [i_6] [i_6] = (min((((((var_7 ? var_8 : var_6))) ? (min(522075473, var_4)) : (((var_5 ? var_8 : var_6))))), (((min(var_8, var_9))))));
            arr_26 [i_6] [i_6] = (max(var_8, ((var_4 ? var_4 : ((var_4 ? var_5 : var_3))))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_29 [i_0] [i_0] [1] = (var_5 ? (((((37825 ? 46715 : 2260098222))) ? ((var_3 ? var_5 : var_8)) : var_8)) : var_4);
            arr_30 [i_0 + 2] = var_7;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        var_15 = var_1;
                        arr_37 [i_0] [i_7] [i_7] [i_8] [i_8] [i_9] = (((var_9 ? ((max(var_8, var_8))) : ((min(var_8, var_3))))));
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_16 = (((((256 ? var_7 : var_8))) ? var_5 : ((var_5 ? (((985772043937433044 ? 54744 : 14133))) : var_5))));
        arr_41 [i_10 + 1] = (min(((var_2 ? var_4 : var_2)), var_7));
        var_17 = ((var_7 ? (min(var_0, ((min(var_8, var_6))))) : var_8));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_48 [i_10] [i_11] [i_13] [i_13] &= ((985772043937433057 ? var_5 : (((var_3 ? var_4 : var_8)))));
                        var_18 = (min(((((min(var_4, var_6))) ? ((var_0 ? var_5 : var_6)) : var_9)), (min(var_2, var_3))));

                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_19 = (max(((var_4 ? ((var_6 ? var_7 : var_1)) : var_9)), (((var_6 ? var_5 : var_0)))));
                            arr_52 [i_11] [i_11] [i_14] |= 33;
                            var_20 = (min((((42439 ? 0 : 17460972029772118583))), (((((var_3 ? var_4 : var_9))) ? (((max(var_6, var_4)))) : (min(var_3, var_5))))));
                        }
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        arr_55 [i_11] [i_10] [i_12] [i_15] [i_10] = var_5;
                        var_21 = (max(var_21, (((min(((31 ? -28437 : 30435)), 242))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_22 = (((var_0 ? var_4 : var_9)));
                        arr_58 [i_11] = ((var_6 ? var_6 : var_7));

                        for (int i_17 = 3; i_17 < 20;i_17 += 1)
                        {
                            var_23 = var_0;
                            arr_62 [i_11] [i_16] [i_12] [4] [20] [i_11] = var_0;
                            var_24 = ((41536 ? 3001147144 : 9233227774140080990));
                            var_25 += var_7;
                        }
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_26 = (min(var_26, var_8));
                        arr_65 [i_11] [11] [i_18] = var_3;
                    }
                    arr_66 [i_10] [i_11] [i_12] = (((var_2 ? (((207 ? 240 : var_1))) : (max(var_0, var_5)))));
                    var_27 ^= (((((var_2 ? var_5 : ((var_3 ? var_7 : var_8))))) ? var_5 : var_4));
                }
            }
        }
    }
    for (int i_19 = 1; i_19 < 19;i_19 += 1) /* same iter space */
    {
        var_28 = (((((var_0 ? ((min(var_3, var_9))) : var_3))) ? var_7 : ((max(((min(var_9, var_4))), ((var_3 ? var_4 : var_3)))))));
        arr_69 [i_19 + 2] = var_5;
    }
    var_29 |= var_4;
    var_30 = (min((((var_6 ? ((var_8 ? var_4 : var_4)) : ((min(60143, 35175)))))), (max((max(var_7, var_8)), var_5))));
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 25;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            {
                var_31 = (min(var_31, (max(((var_6 ? -1 : (min(var_9, var_5)))), (((var_0 ? var_3 : var_4)))))));
                var_32 = (max(var_9, (((var_0 ? var_6 : var_3)))));

                for (int i_22 = 1; i_22 < 23;i_22 += 1) /* same iter space */
                {
                    arr_76 [i_20] [i_20] [i_21] [i_22 + 1] = ((max(221, 60143)));
                    arr_77 [i_20] [i_20] [i_20] = ((((min((max(var_0, 207)), (max(42440, var_4))))) ? 172 : 244));
                    arr_78 [i_22] [i_21] [i_20] = (((((var_1 ? var_9 : ((max(var_4, var_3)))))) ? var_7 : var_5));
                    arr_79 [i_20] [17] [i_22] &= var_6;
                }
                for (int i_23 = 1; i_23 < 23;i_23 += 1) /* same iter space */
                {
                    var_33 = var_9;
                    /* LoopNest 2 */
                    for (int i_24 = 3; i_24 < 22;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 25;i_25 += 1)
                        {
                            {
                                arr_87 [i_24] = 1398259062473830410;
                                arr_88 [i_20] [i_20] [i_23] [i_25] [i_25] [i_25] [i_23] = ((((max(((var_5 ? 128 : 31946)), var_8))) ? var_5 : var_6));
                                var_34 = (((var_6 ? var_7 : var_2)));
                                arr_89 [i_20] [i_21] [i_23] [i_25] = ((var_2 ? var_6 : var_4));
                                var_35 ^= ((var_5 ? ((18196726801209507082 ? 254 : -6848)) : ((min(var_9, var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
