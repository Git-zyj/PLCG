/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (!var_5)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [11] = (((((+(max((arr_2 [i_0] [i_0]), var_4))))) ? (max((((arr_0 [0]) - var_1)), (((var_10 && (arr_2 [16] [i_0])))))) : (((((arr_1 [i_0]) && var_6)) ? ((((arr_0 [i_0]) ? var_8 : var_1))) : (max(var_6, (arr_0 [i_0])))))));
        var_13 ^= (max(72057594037927935, 19745));
        arr_4 [i_0] = (((((((arr_2 [1] [1]) ? 19745 : 72057594037927935)) % (arr_2 [i_0] [i_0])))) ? var_9 : ((-var_5 << (((max((arr_1 [i_0]), (arr_2 [i_0] [i_0]))) - 62)))));
        var_14 = (max(var_14, (((((var_9 || (arr_1 [i_0]))) ? (((arr_1 [10]) - (arr_1 [i_0]))) : (((arr_1 [i_0]) | (arr_1 [i_0]))))))));
        var_15 = (((arr_1 [i_0]) || (!1023)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = (((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_4] [i_3] [i_2] = (-3131357652730312684 < -19746);
                                arr_18 [i_1] [i_2] [0] [4] [i_2] = (((arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2] [i_2 - 1] [i_2] [i_2 - 2]) ? var_8 : (arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2])));
                                var_17 -= ((((var_11 >> (arr_6 [i_2]))) | (((arr_1 [i_1]) ? (arr_11 [i_2] [i_2]) : (arr_5 [i_3] [i_3])))));
                            }
                        }
                    }
                    var_18 -= ((!(arr_2 [i_2 - 1] [i_2])));

                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2 - 1] [i_3] [i_6 - 1] = (((arr_12 [i_6] [i_6] [i_6 + 2] [i_6 + 2]) && (arr_12 [i_6] [i_6] [i_6] [i_6 + 2])));
                        arr_23 [i_6] [i_3] [10] [10] = 19745;
                        arr_24 [8] [i_6 + 2] [i_3] [i_6] [14] = var_2;
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_7] = (((((var_6 - var_3) + 2147483647)) << (arr_5 [i_2 + 1] [i_7 + 2])));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, ((((arr_8 [i_7 - 1]) ? (arr_8 [i_7 + 1]) : (arr_8 [i_7 + 1]))))));
                            arr_31 [i_1] [i_1] [i_7] [i_7] [i_2] [i_1] = (!1);
                            arr_32 [i_1] [i_2] [i_7] [i_1] [i_1] = (((arr_1 [i_2 - 2]) ? var_8 : (arr_20 [i_1] [i_3] [i_3] [i_3] [i_8])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_2] [i_7] [12] [i_1] [i_9] [i_9] = (!var_9);
                            var_20 = (i_7 % 2 == zero) ? ((((arr_6 [i_7 + 1]) >> (((arr_26 [i_2 - 2] [i_2 - 2] [i_7]) + 133911516284043124))))) : ((((arr_6 [i_7 + 1]) >> (((((arr_26 [i_2 - 2] [i_2 - 2] [i_7]) + 133911516284043124)) + 2390070545084843193)))));
                            arr_37 [i_1] [i_1] [i_3] [i_7 - 1] [i_7] [i_9] = ((var_11 ? ((var_3 ? var_0 : (arr_21 [i_1] [i_2] [i_3] [i_7] [i_9] [i_9]))) : (arr_27 [i_7] [i_7 + 2] [i_7] [i_7] [i_7] [i_3])));
                        }
                        var_21 = (((arr_0 [i_7 + 1]) - (arr_14 [i_2 + 1])));
                        var_22 = (((arr_12 [i_1] [1] [i_3] [i_7]) + (arr_12 [i_2] [i_2] [i_2] [i_2 + 1])));
                    }
                    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (((((((arr_6 [10]) ? var_1 : (arr_2 [i_1] [i_1])))) && (arr_11 [i_2 + 1] [i_10 + 1]))))));
                        arr_41 [i_1] [i_1] [i_1] [i_1] [i_10] = ((-72057594037927936 ? 63 : (arr_34 [i_1] [i_2] [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_10 - 1])));
                    }
                    var_24 = ((var_4 && (var_6 && var_0)));
                }
            }
        }
        arr_42 [i_1] [i_1] = (((!var_4) ? (arr_14 [i_1]) : var_11));
        arr_43 [i_1] = (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_25 = (arr_14 [i_1]);
    }
    #pragma endscop
}
