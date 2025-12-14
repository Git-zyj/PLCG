/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_10 = ((((max(4294967295, -1))) ? (((~4250946) / ((var_2 << (var_0 - 1528054020))))) : ((min(var_0, (max(-509596170, -509596187)))))));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_11 = (min(var_11, ((((((arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3 - 1]) ? var_9 : (arr_8 [i_3] [i_3] [i_3 + 1] [10] [i_3 + 1]))) > 4250946)))));
                        arr_10 [i_1] [i_0] [i_3] = (max(((max((0 >= 7463024954390486418), (arr_7 [2] [i_3 - 1])))), ((10983719119319065202 ? (~var_6) : (255 & 268435455)))));
                    }
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_12 = (max(0, 268435455));
                    var_13 = ((268435467 ? (max((arr_0 [i_0] [i_1]), (arr_7 [i_1] [i_1]))) : (arr_0 [i_0] [i_4])));
                    var_14 = var_9;
                    var_15 = ((((((23 ? 29880 : 22))) ? var_4 : (((arr_13 [i_0]) ? (arr_0 [i_0] [5]) : 509596164)))) * (4503599627370495 - 7387755052697440245));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_16 = ((min(((18442240474082181123 ? (arr_0 [i_0] [i_1]) : (arr_3 [5]))), (arr_13 [i_0]))) - (((((-1 <= (arr_12 [i_0] [7]))) ? (arr_4 [i_0]) : ((255 ? 3 : var_9))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_17 *= ((var_9 ? (((((~-1) <= ((-3746942727200915052 ? -1007332677562318667 : var_5)))))) : -4294967273));
                                arr_23 [i_0] [i_6] [i_5 + 2] [i_1] [i_1] [i_0] = -1;
                                var_18 = (max(var_18, -1753367180));
                                arr_24 [i_0] [i_1] [i_0] [i_5] [i_6] [i_5] = max(var_7, (max(1007332677562318662, (arr_17 [i_0] [i_6] [i_0] [i_0] [9] [i_0]))));
                                var_19 = (min(var_19, (36 >= 18442240474082181115)));
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] = ((((((arr_15 [i_0] [i_1] [i_0]) << 0))) ? (max(var_2, (arr_15 [i_0] [i_0] [i_5 - 1]))) : (max(var_1, -1))));
                    var_20 -= ((453809238 >= (max(-1381502058, -1381502056))));

                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_21 = ((((max((var_4 % var_3), (21537770 <= var_7)))) && (!-1872955934)));
                        var_22 = var_8;
                        arr_29 [11] [i_0] = ((max((min(0, 1)), var_8)));
                        var_23 += (min(-13, 1));
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_34 [i_0] [i_1] [i_1] = (((arr_32 [i_0] [i_0]) ? 25705587 : var_5));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_24 -= (((arr_16 [i_11] [i_1] [i_9] [i_9] [i_1] [i_0]) || ((4139530075 >= (arr_35 [6] [i_9] [i_10] [11])))));
                                var_25 = (arr_37 [i_0] [8] [11]);
                                arr_40 [i_0] [i_1] [i_1] [9] [i_1] = -1;
                            }
                        }
                    }
                }
                arr_41 [i_0] [i_0] [i_0] = 5885954620457365800;
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
