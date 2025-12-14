/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((max(((var_7 ? var_0 : var_1)), var_5)) | (((var_0 || var_6) ? var_1 : 249))));
    var_11 = (((!var_6) ? (~var_7) : (min(((min(var_6, var_4))), (~0)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = ((!(((((max(24, var_2))) ? var_6 : 3307599313)))));
        var_13 = (((((var_0 ? ((((arr_0 [i_0]) && (arr_0 [i_0])))) : var_3))) ? ((min(var_1, (!12915899058754570456)))) : (arr_1 [2])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_14 &= (min(((var_1 ? (((min((arr_3 [12] [13]), (arr_0 [i_1]))))) : (var_6 - 24))), var_8));
        var_15 = ((min(((((arr_1 [14]) % (arr_2 [i_1])))), (min(var_5, 64)))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 7;i_2 += 1)
    {
        arr_7 [i_2] [i_2 + 2] &= var_1;
        arr_8 [i_2] [i_2] = ((!(~var_1)));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_16 = ((var_7 ? (max((((arr_12 [i_4] [i_4]) - (arr_14 [i_6] [i_5]))), (arr_18 [i_6] [1] [i_5 + 1] [1] [1] [1]))) : (arr_13 [i_4] [i_4])));

                        for (int i_7 = 2; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_4] [i_4] = (min(((!(arr_18 [i_6] [i_5 - 2] [i_6] [i_6] [i_5 - 2] [i_4]))), ((!((max(5530845014954981158, (arr_17 [i_7]))))))));
                            var_17 = var_5;
                        }
                        for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_18 += (arr_14 [5] [14]);
                            arr_25 [i_4] = var_6;
                            var_19 = ((var_7 ? (!var_2) : var_5));
                        }
                    }

                    for (int i_9 = 4; i_9 < 23;i_9 += 1)
                    {
                        var_20 = ((((arr_28 [i_4] [i_4]) ? (arr_28 [i_4] [i_4]) : ((((arr_27 [i_4] [i_4] [i_4]) & (arr_10 [i_5 - 1])))))));
                        var_21 = (((arr_27 [i_4] [i_5 - 2] [i_4]) != ((-((5530845014954981158 ? (arr_13 [i_4] [i_4]) : var_0))))));
                    }
                    arr_30 [i_4] = (((~12915899058754570456) ? (((28 ? 4294967268 : ((((arr_17 [i_4]) <= 5)))))) : (~var_7)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {

                    for (int i_12 = 2; i_12 < 24;i_12 += 1)
                    {
                        var_22 = (min(var_22, ((((~var_3) ? (arr_36 [i_11] [i_10] [9]) : ((((!85) / (-32767 - 1)))))))));
                        var_23 |= (min((((86 ? ((max((arr_35 [16] [i_3] [4] [16]), (arr_14 [i_12] [i_11])))) : var_6))), var_7));
                        var_24 = (arr_26 [i_10] [i_10]);
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {

                        for (int i_14 = 1; i_14 < 24;i_14 += 1)
                        {
                            var_25 = (arr_14 [i_10] [i_3]);
                            arr_45 [i_10] [i_10] = ((arr_23 [i_14] [i_11]) ? (((var_4 ? (arr_15 [i_10]) : (arr_43 [i_14] [i_13] [16] [i_10] [i_3])))) : 5559861906139661403);
                            var_26 = ((-0 ? ((6 ? var_5 : 115)) : 2266056799741255802));
                            var_27 = 1;
                        }
                        arr_46 [i_10] [i_10] = var_3;
                        arr_47 [i_10] [i_3] [i_10 - 1] [i_10] = ((((var_5 == (arr_10 [i_3]))) ? var_8 : (arr_29 [i_10])));
                        arr_48 [i_10] [i_10] = (!14315483199221907159);
                    }
                    for (int i_15 = 4; i_15 < 23;i_15 += 1)
                    {
                        var_28 -= (max((max(12886882167569890213, (arr_18 [2] [23] [i_11] [i_11] [21] [i_3]))), 24196));
                        var_29 = (max(var_29, var_1));
                    }
                    for (int i_16 = 2; i_16 < 23;i_16 += 1)
                    {
                        arr_55 [i_10] [i_3] [i_10] = (max((~14), -2147483628));

                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            arr_59 [i_10] [i_11] [i_11] [i_3] [i_10] = (max((arr_27 [i_10] [i_16] [i_10]), (arr_29 [i_10])));
                            var_30 = 1984;
                            arr_60 [i_17] [4] [4] [i_3] |= ((~(var_3 && var_8)));
                            var_31 = var_5;
                        }
                    }
                    var_32 = (min(var_32, (((((arr_12 [20] [20]) ? (((var_0 < (arr_19 [i_11])))) : (arr_44 [i_10 - 4] [i_10 - 1] [i_10 - 1] [i_10 - 1])))))));
                }
            }
        }
        var_33 ^= 73;
    }
    #pragma endscop
}
