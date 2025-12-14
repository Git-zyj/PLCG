/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_7;
    var_17 = (((max(var_15, var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 += (((((var_6 ? (arr_1 [i_0]) : 316956329)) < 316956329)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [15] [i_2] [i_1] [i_2] [i_2] [i_0] = min((((var_4 ? -20232 : (!536346624)))), (((((2 ? var_12 : var_10))) ? 6021519183415185191 : (arr_4 [i_3 + 1] [i_2 + 2] [i_1]))));
                            var_19 = (max(((((30720 ? var_13 : var_6)))), ((((max(98655450, (arr_2 [6])))) ? ((var_9 ? 6021519183415185207 : var_0)) : (arr_9 [16] [i_1] [i_2 + 1] [i_1] [i_1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 15;i_6 += 1)
                            {
                                var_20 = (~var_3);
                                var_21 = var_3;
                                var_22 = ((((!((max(18446744073173204969, 1))))) ? (((((arr_8 [i_4] [i_4] [i_4] [i_1] [i_0]) <= var_9)) ? (((arr_14 [i_0] [i_0] [i_4] [6]) ? 0 : (arr_3 [i_1]))) : ((((arr_8 [i_0] [i_1] [i_4] [i_5] [i_6]) ? 917504 : (arr_12 [i_0] [i_0])))))) : (!var_3)));
                                arr_17 [i_1] [i_1] [10] [i_1] [i_5] [i_1] = ((max(((((arr_9 [i_0] [i_0] [i_1] [i_5] [i_5] [i_6]) != (arr_1 [i_0])))), (arr_2 [i_1]))));
                            }
                            arr_18 [i_0] [i_5] [i_0] = ((((((((arr_9 [i_0] [i_1] [1] [i_5] [i_5] [i_4]) ? var_15 : 16758))) ? (arr_9 [i_0] [i_0] [i_1] [i_5] [i_4] [i_5]) : var_5)) > (((var_8 >= ((917504 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_3)))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (((var_13 && var_13) ? ((((var_12 >> (18446744073709551596 - 18446744073709551583))) + var_14)) : (((!(var_12 == 18446744073173204992))))));

    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        arr_22 [i_7] = ((((arr_20 [i_7 + 2]) - var_2)));
        arr_23 [12] &= (var_14 & var_15);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_26 [i_8] = (((max(2443900556, ((18446744073173204969 ? 24 : -24421)))) / (((((arr_25 [i_8]) <= 1))))));
        arr_27 [i_8] [i_8] = ((!((max((arr_24 [i_8] [18]), 65533)))));
        arr_28 [i_8] = ((~-1055431094) ^ var_10);
        var_24 = min((min(var_14, ((var_13 << (33553408 - 33553408))))), ((((max((arr_25 [9]), (arr_25 [i_8])))) ? 1864269125 : (((arr_24 [i_8] [i_8]) + var_14)))));
    }
    for (int i_9 = 3; i_9 < 18;i_9 += 1) /* same iter space */
    {
        arr_31 [8] &= ((((!(!var_6)))) % ((~(~16))));
        var_25 += ((var_0 ? 18446744073709551615 : (((-502852133 ? (var_6 > var_15) : ((max(24420, 1))))))));
        var_26 += (-(max(var_5, (!var_15))));
    }
    for (int i_10 = 3; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_27 = ((((max((arr_29 [i_10]), (arr_20 [i_10 - 3])))) ? (max(var_9, (min(-14, 805386547)))) : 3489580741));
        arr_35 [i_10] = ((((((!var_15) ? -1 : (-1864269122 + -26978)))) ? var_12 : (((((var_8 ? 1073741824 : 26799)) >= ((max(var_11, var_5))))))));
    }
    #pragma endscop
}
