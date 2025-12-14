/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [1] [i_0] = (((248 * 68) == (((arr_6 [i_1 - 1] [9] [i_0]) / 262140))));
                var_10 = (max(var_10, var_5));

                for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_11 = (((min(4294967295, ((((arr_10 [11] [i_1] [10] [i_1]) > 0))))) >> (var_5 - 107)));
                        arr_13 [i_0] [i_0] [i_2] [2] [i_0] = (((!var_2) ? ((((var_7 && var_1) < (min(127, var_6))))) : ((min(1, 1)))));
                        var_12 ^= (arr_8 [i_1] [i_1]);
                    }
                    var_13 = (max(var_13, ((min((min(27, 65)), (-171 & var_7))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                var_14 -= (min((arr_0 [i_1]), (min(4247909906, 0))));
                                var_15 = (max(var_15, (1 && 1)));
                                arr_20 [i_0] [i_1] [9] [4] [i_0] = (max((max((arr_6 [i_1] [i_4] [i_0]), (arr_3 [i_0]))), ((((var_1 / var_6) ? (var_0 || var_0) : 1)))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_1] [i_2] = (max((arr_3 [i_0]), (min((arr_3 [i_0]), var_8))));
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_24 [1] [i_1] [i_1] |= ((((((arr_15 [i_0] [10] [i_6 + 1] [i_6]) ? ((var_2 ? (arr_10 [i_0] [2] [i_1] [i_6]) : 24576)) : (((min(var_0, var_0))))))) || (((var_5 << (!1))))));
                    var_16 = ((-(max(47057390, 14820477802463102276))));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        var_17 = ((16 - ((85 ? var_6 : var_4))));
                        arr_27 [i_0] [1] [1] [i_1] [i_0] [i_7] = 1;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_18 = (min(((max(46004, var_3))), (min((arr_25 [i_0 + 3] [i_6] [i_6] [i_6] [i_8]), (arr_1 [i_0 + 2] [i_1])))));
                        arr_30 [i_0] = -var_5;
                        arr_31 [i_0] [i_0] [i_0] [i_8] [i_8] = var_6;
                        var_19 = ((((((max(44126, var_9))) ? (arr_11 [i_6 + 1] [i_8] [8] [i_8] [i_8] [i_0]) : ((var_0 ? 251 : var_1)))) << (((max((((-13 ? var_5 : 1))), (((arr_19 [i_8]) * 2)))) - 101))));
                    }
                    var_20 += ((((var_0 < ((var_4 ? 153023776 : 1)))) ? (((arr_28 [i_6 + 2] [i_6] [i_6 + 3] [i_6]) / var_4)) : (var_1 * 1)));
                    arr_32 [i_0] [i_0] = ((((min(21405, 23797))) ? (((((2 ? -43 : 4294967276))) ? 12 : 18446744073709527040)) : var_7));
                }
                for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_21 = (((((1 << (((arr_2 [i_0 + 3] [i_0 + 2]) - 50192))))) ? (((min(var_7, (arr_2 [i_0 - 1] [i_0 + 2]))))) : (var_6 / var_6)));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_37 [i_0] [i_1] [7] [i_0] = (min((((1 != (21423 << 0)))), (min(((-20 ? 1774147851 : 24576)), 12))));
                        var_22 = (max(var_22, ((min((36 - var_2), (((((1 ? (arr_17 [i_0] [i_1] [12] [i_10]) : -51))) ? (5 + var_2) : -var_7)))))));
                        var_23 = (arr_25 [i_0] [i_1] [9] [i_1] [1]);
                    }
                }
                var_24 = 127;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            {

                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        arr_48 [i_11] [i_12] [i_13] [i_14] = var_0;
                        var_25 = (min(var_25, (((4239329972 ? 4194288 : 36)))));
                        arr_49 [i_12] = (min(56, ((~(-127 - 1)))));
                        arr_50 [i_11] [i_12] [i_13] = (min((min(1, 1081041961)), (((47023 ? 36 : ((max(var_1, -36))))))));
                    }
                    arr_51 [i_11] [i_12] [1] [i_12] = (max(4294967276, 2355208477));
                    arr_52 [i_12] = min((((-127 & (((-43 + 2147483647) << (var_6 - 16999011213544437109)))))), (arr_39 [i_13] [i_11]));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_26 = (min((((((28672 ? 1 : 8)) & ((var_1 ? 511 : 82))))), (((((-36 ? var_8 : (arr_45 [i_11] [8])))) ? (min(var_6, var_0)) : (((arr_38 [10]) ? var_4 : var_6))))));
                                arr_57 [13] [i_15] [i_12] [i_12] [i_12] [i_11] = (max(var_2, ((((5939716987350688809 < -123) && (((var_1 ? var_9 : 4095))))))));
                                var_27 += (!((max(((((arr_39 [3] [i_15]) && -63))), 127))));
                                var_28 += (min((max(var_5, var_6)), var_2));
                                var_29 += (((((-(arr_42 [i_11])))) && (arr_41 [0] [i_12])));
                            }
                        }
                    }
                    var_30 = var_5;
                }
                var_31 = (max(var_31, var_1));
            }
        }
    }
    #pragma endscop
}
