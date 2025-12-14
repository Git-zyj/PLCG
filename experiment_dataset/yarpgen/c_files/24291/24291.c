/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_10 ? (~var_2) : var_8)) > var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min((((arr_3 [i_0] [i_0] [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))), (!var_8)));

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_1] = 2097151;
                    var_14 = (((((((var_6 ? 127 : var_6))) ? -2203511439 : ((max(var_11, 2097151))))) & ((((!(~5322)))))));
                    var_15 = (i_1 % 2 == 0) ? ((((((((arr_4 [i_0] [i_1]) - (-2147483647 - 1)))) % (min((arr_1 [i_1]), (arr_5 [i_0] [i_1]))))))) : ((((((((arr_4 [i_0] [i_1]) + (-2147483647 - 1)))) % (min((arr_1 [i_1]), (arr_5 [i_0] [i_1])))))));
                    var_16 = (max((((0 && (arr_6 [i_0 - 2] [i_0 - 2] [i_1] [i_2 + 1])))), 3840020556));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    var_17 = (((6 % 52621) <= (((arr_10 [i_1] [i_1] [4]) ? ((var_4 ? var_7 : var_2)) : ((var_10 ? var_4 : var_6))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = (((((min(1, var_6)))) >= (((arr_9 [i_3 + 1] [i_3 + 1] [i_0 + 1]) ? (arr_9 [i_3 + 1] [i_3 + 1] [i_0 + 2]) : 18446744073709551591))));
                        arr_14 [i_0 + 2] [i_1] [i_3] [i_1] = (!var_3);
                        arr_15 [i_3] [i_1] [i_0] [0] = var_5;
                        arr_16 [i_4] [i_4] [i_1] [i_4] [i_3] = (((((((var_1 ? 2147483647 : 6378173235001244764)) || ((min(3840020556, var_5))))))));
                        arr_17 [1] [i_4] [i_1] [i_4] [10] [i_4] = (-127 - 1);
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_19 = 93;
                            var_20 = (454946727 > 0);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_21 = (~var_11);
                            var_22 = var_6;
                            var_23 = ((((((min(-1744604310, 18446744073709551615))) && 1)) ? (((((arr_20 [i_0] [i_1] [i_0] [i_0] [1] [i_0] [i_0]) < (arr_20 [i_7] [i_1] [i_7] [i_5] [i_3] [i_1] [i_0]))) ? (arr_12 [i_0 + 2] [i_1] [i_3] [i_3] [i_3]) : (((var_1 ? var_0 : 1588908629))))) : ((max(var_11, (arr_5 [i_3 + 1] [i_0 + 2]))))));
                        }
                        arr_27 [2] [1] [i_3] [i_1] [2] [i_1] = (arr_12 [i_0] [i_0] [i_3] [i_5] [i_0]);
                        arr_28 [i_0] [i_1] [i_1] [3] [3] = (var_6 ? (arr_18 [1] [11] [i_1] [i_0]) : (528482304 < -5673559027808814077));
                        arr_29 [i_1] [i_1] [i_3 + 1] [i_5] = ((((((1125899906842623 ? var_4 : (arr_11 [i_1] [3])))) ? var_10 : ((((arr_10 [i_1] [i_1] [i_1]) ? 10405 : (arr_13 [i_3] [i_3] [i_1] [i_0 - 2] [i_0 - 2])))))));
                    }
                    var_24 = var_4;
                    arr_30 [i_0] [4] [i_1] = (((max((min(var_2, var_1)), -2097151)) / 112));
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_1] [1] = (((arr_19 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]) >= (((((arr_1 [i_1]) > (arr_4 [i_8 + 1] [i_1])))))));
                    arr_34 [i_0 - 2] [i_0] [i_0] [i_1] = 4294967295;
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    var_25 = -127;
                    arr_37 [i_0] [i_1] [i_0] |= ((871017975968939911 ? (arr_3 [i_0] [i_1] [i_9]) : (arr_6 [i_1] [i_1] [i_0] [i_9])));
                    var_26 = (max(var_26, ((((arr_32 [i_1] [i_0 - 1]) ? (arr_32 [i_0] [i_0 - 2]) : (arr_9 [i_9 - 3] [i_0] [i_0 - 2]))))));
                }
                var_27 = var_5;
            }
        }
    }
    var_28 = (!var_3);
    #pragma endscop
}
