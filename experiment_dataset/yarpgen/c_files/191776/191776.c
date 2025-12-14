/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((-(((var_13 | var_17) ? (max(var_8, var_6)) : var_4))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        var_19 = (max(var_19, ((((((((((arr_1 [0]) / var_4))) ? ((((arr_2 [10]) < var_13))) : ((var_2 ? var_3 : var_2))))) ? (arr_0 [i_0] [i_0]) : (((!((!(arr_3 [i_0])))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_20 -= (((((((arr_1 [i_2]) ? var_2 : (arr_6 [i_0] [i_0] [i_0]))) - (arr_10 [i_2] [i_2] [i_3])))) ? ((-0 - (15152104227567317784 && 14))) : (!var_2));
                        var_21 = (arr_2 [i_0]);
                        var_22 = 255;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((255 >= (arr_10 [i_0] [i_1] [i_0])));
                        arr_18 [0] [i_1] [0] [i_0] = (arr_16 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_23 &= (((((var_9 ? (arr_19 [i_1] [i_2] [i_5]) : 4503599627370494))) ? (((arr_15 [i_2 - 1] [i_1] [i_2 - 1] [i_0] [i_6 + 2] [17]) << ((((-(arr_20 [i_0] [i_0] [i_0]))) + 1100896022)))) : (((var_1 & var_0) ? (15152104227567317769 >= 2) : ((max(26922, var_13)))))));
                                var_24 &= (((((max((!511), ((!(arr_23 [i_0] [i_2] [i_2] [1] [i_2]))))))) > (max((max(10, var_14)), (-7 > var_14)))));
                                arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = ((!1) >> (((arr_0 [i_0] [i_0]) ? (((var_8 + 2147483647) >> (246 - 218))) : -3)));
                            }
                        }
                    }
                }
            }
        }
        var_25 = (max(var_25, var_0));
        var_26 = var_16;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_27 -= (((((max((max(var_3, 243)), (var_16 > 223158311))))) + (((arr_27 [i_7]) ? ((max(var_8, (arr_3 [i_7])))) : (arr_1 [2])))));
        arr_28 [i_7] [8] = var_10;
        var_28 = (min(var_28, ((((max(16776960, ((var_8 ? (arr_7 [16] [16]) : (arr_19 [i_7] [i_7] [i_7]))))) >> (((max(-var_1, ((var_3 | (arr_19 [i_7] [i_7] [i_7]))))) - 3949453341180140344)))))));

        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            arr_31 [i_7] [i_7] [i_8] = (((((-32767 - 1) + 430676463)) << (var_10 - 4135)));

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_29 = 4071808963;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_30 = (max(((8128 < (arr_35 [i_8] [i_9] [i_10] [i_7]))), var_5));
                            var_31 = ((!((!(!var_15)))));
                            var_32 -= (max((max(var_10, (arr_13 [8] [i_8] [i_8] [i_8]))), (((!(var_15 / var_12))))));
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                arr_42 [i_12] [i_7] [i_7] [i_7] = (max((var_16 && var_16), (var_8 | var_12)));
                var_33 = (min(var_33, ((max(var_9, ((-(arr_34 [8] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]))))))));
                var_34 = ((-((max(var_15, var_16)))));
            }
            var_35 ^= max((arr_12 [i_8] [i_8] [i_8 - 2]), (arr_0 [i_7] [i_8]));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_45 [i_7] [i_7] = (max((arr_25 [i_7] [i_7]), ((var_8 != (var_10 - 243)))));
            arr_46 [i_7] [i_7] = var_12;
            var_36 = ((((((var_17 ? (arr_38 [i_7] [11] [5]) : var_1)) == (var_8 < var_1))) ? ((510062838 ? 1240952337 : -7902)) : 12));

            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                arr_49 [i_7] [i_7] [i_14] [i_7] = var_3;
                var_37 = (max(var_37, ((((((((arr_48 [i_7] [1] [i_13] [i_7]) ? var_3 : (arr_6 [i_7] [i_7] [i_7]))))) % (arr_10 [i_14] [i_13] [i_13]))))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                arr_52 [i_7] [12] [i_15] |= (arr_35 [i_7] [i_13] [i_13] [1]);
                var_38 = ((-22879 > (arr_15 [i_7] [i_7] [i_13] [i_13] [i_13] [i_7])));
                arr_53 [i_7] [i_13] [i_7] = 33507;
            }
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_56 [i_7] [i_7] [i_7] [i_7] = ((((((arr_37 [i_7] [i_16] [i_16] [i_7] [i_7] [i_7]) ? (!3725106579955734161) : (arr_50 [i_7])))) || var_16));
                var_39 = 255;
            }
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                arr_61 [i_7] [i_7] = (((((((!var_4) > -var_15)))) == 2097151));
                arr_62 [10] &= ((!((((arr_60 [i_13] [i_13] [i_13]) ? (arr_3 [i_7]) : (arr_26 [i_17]))))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        {
                            arr_71 [i_7] [i_7] [i_17] [16] [i_18] [i_19] [i_18] = ((((((192 ? (arr_10 [i_7] [i_7] [i_17]) : (arr_25 [i_7] [i_7]))))) ? var_10 : (max((!var_7), var_9))));
                            arr_72 [i_7] [i_7] [i_13] [i_7] [i_7] [i_18] [i_7] = (arr_70 [i_7]);
                            arr_73 [i_7] [i_7] [i_17] [i_7] [i_19] = ((((max((-2147483647 - 1), (arr_64 [i_7] [i_13])))) ? ((var_2 ? (arr_50 [i_7]) : var_6)) : ((max((arr_65 [i_7] [1] [i_7]), var_8)))));
                        }
                    }
                }
            }
            var_40 |= ((163417644 ? -2 : 245));
        }
    }
    var_41 = var_9;
    var_42 -= ((max(((158 ? var_11 : var_15)), (!17533))));
    #pragma endscop
}
