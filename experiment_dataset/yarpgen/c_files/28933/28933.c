/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [13] [i_1] [i_1] = (min(var_4, var_3));
                                var_17 |= ((var_15 - (min(var_11, (min(var_9, var_12))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = max(var_15, (max(((max(var_7, var_2))), (var_6 - var_8))));
                var_18 = (min(var_8, ((((min(var_15, var_16))) ? (((min(var_4, var_7)))) : var_14))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_19 = var_9;
                                var_20 = var_4;
                                var_21 ^= ((((max((var_8 | var_14), var_6))) ? ((((max(var_16, var_1))) ? (((max(var_3, var_2)))) : (max(var_7, 1502292274)))) : (((((max(6, 26))) ? var_2 : var_10)))));
                                var_22 = ((var_1 + ((((min(var_16, var_0))) ? (8 + 7599365144343147852) : (((var_13 ? var_0 : var_8)))))));
                                var_23 ^= ((((max((min(var_3, var_2)), var_5))) / (max(((var_12 ? var_6 : var_15)), ((var_12 ? var_6 : var_10))))));
                            }
                            arr_23 [i_6 + 1] = (min((max((((var_7 ? var_1 : var_9))), ((var_4 ? var_16 : var_14)))), (((((max(var_0, var_10))) ? var_10 : var_15)))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_33 [i_0] [i_1] [i_8] [i_9] [i_10] = var_9;
                                arr_34 [i_0] [i_0] [i_10 - 1] = (((((((min(var_14, var_3))) ? (max(var_14, var_3)) : (12 / var_13)))) ? (min(var_2, ((var_15 ? var_8 : var_10)))) : ((((max(var_2, var_3))) / ((max(5, 26)))))));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_24 = ((((30644 ? 34335 : ((5787 ? -1062521964511500942 : var_6))))) ? 6 : 198);
                        var_25 = ((((var_4 / ((min(var_3, var_2)))))) ? var_10 : ((((min(var_6, var_12))) ? (max(var_0, var_16)) : ((var_3 ? var_15 : var_16)))));
                        arr_38 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = var_3;
                    }
                    arr_39 [i_0] [10] [i_8] = ((((max(var_12, (((var_2 ? var_13 : var_5)))))) ? (min((max(var_11, var_9)), var_12)) : (((min(var_7, (min(var_5, var_4))))))));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_42 [10] [i_1] [i_8] [i_8] [i_12] = var_3;
                        var_26 = (max(var_26, (((var_4 ? ((((((1062521964511500936 ? -1062521964511500942 : 1789272254))) ? (var_1 - var_13) : (var_3 % var_5)))) : ((var_11 ? ((7672668949090658417 ? 7672668949090658417 : 62016)) : ((var_11 << (var_15 - 53990))))))))));
                    }
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_27 = max(((((var_15 | var_2) ? (max(var_13, var_4)) : var_4))), (max(var_15, ((var_4 ? var_11 : var_1)))));
                    arr_46 [13] [i_1] [i_1] = ((var_10 / ((max(248, 8)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_28 = (min((((var_6 > (var_8 && var_2)))), ((var_11 ? var_5 : (var_4 || var_12)))));
                                var_29 = (((((0 ? 1062521964511500957 : -5074033073888643852))) || (min((var_15 != var_10), (var_0 <= var_5)))));
                                var_30 = (max(var_30, ((min(var_6, (var_6 | -929636907299395987))))));
                                var_31 = (((min(((var_16 ? var_14 : var_6)), (((var_13 ? var_10 : var_12)))))) ? (max((min(var_0, var_11)), ((var_15 ? var_12 : var_4)))) : ((((min(var_10, var_8))) ? (((var_2 ? var_6 : var_1))) : (max(var_11, var_10)))));
                                var_32 += (8199512659878487008 ? 2 : 929636907299395987);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    var_33 ^= var_13;
                    arr_54 [6] [i_1] [6] [i_16] = (((((var_13 ? var_14 : var_7))) ? (((3 ? 1 : 5074033073888643852))) : ((var_2 ? var_1 : var_14))));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_34 += ((1755695692 >> (250 - 239)));
                        arr_62 [i_0] [i_0] [i_0 - 1] [i_0] &= ((var_15 ? var_1 : var_10));
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_35 = var_5;
                                var_36 = (((((var_9 ? var_16 : var_5))) ? var_8 : ((var_3 ? var_12 : var_8))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 13;i_22 += 1)
                        {
                            {
                                var_37 = var_6;
                                var_38 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 &= (((min(((84 ? 63 : var_4)), ((var_1 ? var_9 : var_6))))) ? var_13 : ((((max(var_13, var_1))) - var_16)));
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 20;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                {

                    for (int i_26 = 0; i_26 < 20;i_26 += 1)
                    {
                        arr_88 [i_23] [i_24] [i_25] [i_23] [i_23] [i_25] = max((max((((var_14 ? var_2 : var_5))), (var_0 + var_11))), var_10);

                        for (int i_27 = 2; i_27 < 17;i_27 += 1)
                        {
                            var_40 |= ((var_6 ? ((-6749443839701386958 ? -10 : 1152358554653425664)) : var_10));
                            var_41 |= ((((((((var_13 ? var_8 : var_9))) ? (min(var_5, var_14)) : ((max(var_10, var_6)))))) || var_5));
                            arr_93 [i_23] = (min((max((((-1535494662 ? 12 : var_11))), ((var_9 ? var_14 : var_14)))), ((((14 >= 2868747320945866648) ? (var_4 && var_16) : ((min(63, 0))))))));
                        }
                    }
                    for (int i_28 = 0; i_28 < 20;i_28 += 1)
                    {
                        var_42 = ((((var_13 ? ((-25801 ? 251 : 26)) : ((var_9 ? var_10 : var_2)))) != var_8));

                        for (int i_29 = 0; i_29 < 20;i_29 += 1)
                        {
                            var_43 = var_0;
                            arr_101 [i_23] [i_23] [i_25] [i_28] [i_29] = (min(var_8, (((((0 << (2005249228397140704 - 2005249228397140704)))) ? ((min(var_3, var_9))) : (max(var_14, var_13))))));
                            arr_102 [i_23] [i_24] [i_25] = (var_4 ? (((((-626885787 ? 193 : var_12))) / (min(var_10, 11692965556483834909)))) : ((max(((var_10 ? 34272 : 1987035138)), ((max(var_8, var_5)))))));
                            var_44 ^= (max((min((min(1755695698, 18446744073709551615)), ((min(var_13, var_15))))), ((((min(var_9, var_1)) + ((var_0 ? var_10 : var_7)))))));
                            arr_103 [i_23] [i_23] [i_23] [1] [i_29] = ((((((((var_10 ? var_11 : var_8))) ? var_13 : (min(562949953421311, 65519))))) ? var_8 : var_15));
                        }
                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 20;i_30 += 1)
                        {
                            var_45 += ((var_6 && (((var_14 ? var_3 : var_4)))));
                            arr_106 [i_24] [i_24] = var_13;
                        }
                        arr_107 [i_23] [i_24] [i_25] [14] = var_9;
                    }
                    arr_108 [i_23] [6] [i_24] [i_24] = ((((min(((var_6 ? var_6 : var_0)), ((var_11 ? var_4 : var_3))))) && var_9));
                }
            }
        }
    }
    var_46 = (max((((var_12 > (max(var_16, var_11))))), var_3));
    #pragma endscop
}
