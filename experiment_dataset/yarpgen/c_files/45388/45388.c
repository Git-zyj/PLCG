/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (min(var_11, (64280 ^ 64280)));
        arr_4 [i_0] = (((((min(-2147483629, 1124161982)) ? (arr_2 [i_0]) : (((-2147483647 - 1) - var_0))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((((min((arr_5 [i_1 + 1] [i_2 + 2]), (arr_5 [i_1 + 1] [i_2 + 2])))) ? ((23 ? var_10 : 65535)) : (65535 >= 1)));
                    var_13 = ((((max(var_2, (arr_2 [i_0])))) >= (((var_9 ? (arr_5 [i_1 + 2] [i_1 - 1]) : var_9)))));
                    var_14 = (arr_9 [i_0] [i_1]);
                    var_15 = (max(var_15, (((((!(arr_2 [i_1 - 1]))))))));
                    var_16 = ((((((!(arr_5 [i_0] [3]))) && (((var_9 ^ (arr_5 [i_0] [i_0])))))) ? ((((arr_3 [i_0]) ? (arr_6 [i_1] [12] [i_0]) : ((var_6 ? (arr_7 [i_2] [i_1] [i_0]) : var_4))))) : ((-(~var_7)))));
                }
            }
        }
        var_17 = (min(var_17, (((-50991 ? (((-15 ? -5771836827988270676 : 5771836827988270676))) : -7463469061720547299)))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
            var_18 = (((!var_7) ? var_9 : ((((arr_9 [i_0] [i_0]) == var_3)))));
            var_19 = var_9;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_20 = (1428334956 < 50159);
            var_21 |= ((!((!(arr_6 [i_0] [i_0] [i_4])))));
            var_22 = ((((!(arr_10 [i_0] [i_0] [i_0])))) >= ((var_1 ? var_9 : var_9)));
            var_23 = (min(var_23, (--8456802736719040101)));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_24 = (arr_15 [i_5]);
            var_25 += (((arr_15 [i_5]) ? ((10983275011989004317 ? 65535 : 16)) : var_0));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_26 = ((var_10 > (((var_5 ? var_8 : var_6)))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_27 = var_8;
                            var_28 |= ((((((arr_2 [i_5]) / 23629))) ? ((-5771836827988270676 ? 500422206 : -1688388546)) : (arr_10 [i_0] [i_0] [4])));
                            var_29 = ((arr_21 [i_0] [i_5] [i_6 + 3]) <= var_0);
                        }
                        var_30 = var_3;
                    }
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        var_31 = (((arr_31 [i_9]) ? ((min((!2147483618), 0))) : ((-((((arr_29 [i_9]) >= 13443)))))));
        arr_33 [i_9] = (((((var_10 ? (arr_31 [i_9 - 1]) : var_8))) ? (var_8 & var_9) : ((((max(1500, var_10)))))));
        arr_34 [i_9] [i_9 - 2] = ((-64034 ? (arr_31 [i_9 + 1]) : ((8455274433540228053 ? 1097794398 : 4518079687907297475))));
    }
    for (int i_10 = 3; i_10 < 18;i_10 += 1)
    {
        var_32 = (((140737488093184 ? var_5 : (var_6 >= var_6))));
        var_33 = var_10;
        var_34 = ((!((((var_0 + var_5) ? var_5 : (((arr_32 [i_10]) ? 0 : (arr_29 [i_10]))))))));
    }

    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
    {
        var_35 = ((((((-1817448640 ? -85377901 : var_8))) ? ((var_10 ? 0 : var_1)) : (var_6 | var_5))) / (arr_38 [i_11 + 1]));
        var_36 *= (!-85377902);
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
    {
        var_37 *= ((((((((var_1 ? var_4 : (arr_40 [i_12] [i_12])))) >= (~var_2)))) < (!1255)));
        var_38 &= (arr_41 [i_12 + 1] [i_12 + 1]);
    }
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        var_39 += ((-(((!1224) ? -780703113 : (((-780703107 + 2147483647) << var_0))))));
        var_40 = ((var_9 != ((((arr_39 [i_13]) ? var_3 : var_7)))));
        arr_48 [i_13] = (min(64270, 14436552507518669906));
        var_41 = 0;
        var_42 = (((((var_7 + var_0) > (!780703113))) ? (~var_10) : (arr_39 [i_13 + 1])));
    }
    var_43 = ((((((((-85377903 ? 52 : 64275))) * ((var_0 ? var_6 : var_8))))) ? var_3 : var_0));
    #pragma endscop
}
