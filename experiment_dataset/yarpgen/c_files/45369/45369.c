/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((min(var_3, var_0)))) - (max((var_15 & var_1), var_2))));
    var_19 = (max(var_19, var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((((var_3 && var_9) ? ((((((arr_4 [i_0] [i_1] [i_0]) / (arr_8 [i_1] [i_1] [i_2])))))) : var_16)))));
                    var_21 = (arr_6 [1] [10] [i_1 + 1]);
                    var_22 = -32116;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_23 = (((arr_10 [i_0] [i_1] [4] [i_3]) && (var_16 | var_10)));
                    arr_13 [i_3] [i_1] [i_0 - 2] = var_9;
                }
                var_24 = (((!(arr_6 [i_1] [i_0] [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_25 = (((((arr_5 [i_5] [i_4]) >> ((((var_10 ^ (arr_4 [i_4] [i_4] [i_5]))) + 22721)))) / (((var_13 >= (max(var_17, var_9)))))));
                arr_20 [i_5] [i_4] [i_5] = (max(var_11, (((arr_1 [i_4 - 1] [i_4]) ^ var_12))));
                var_26 |= ((((-((max(var_0, var_10))))) & var_13));

                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_27 = var_9;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] [i_5] [i_5] [i_5] [i_4] = var_17;
                                var_28 *= (arr_10 [i_4 + 1] [10] [14] [i_7 + 1]);
                            }
                        }
                    }
                    var_29 = (arr_0 [i_5]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_30 += var_11;
                                var_31 = (((arr_21 [i_5] [i_6] [i_10]) > var_3));
                                var_32 *= ((!(~var_3)));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_33 &= ((((var_14 << (((((arr_5 [i_5] [i_11]) + (arr_18 [i_5] [i_5]))) - 6826)))) + (var_8 <= var_13)));

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_34 = (((arr_31 [i_4 - 2] [i_5] [i_4 - 2] [i_4 - 3] [i_4]) || var_7));
                        arr_43 [i_4] [i_4] [i_5] [i_5] = ((((arr_11 [i_4 - 2]) - (arr_31 [i_12 - 1] [i_5] [i_12] [i_12 - 1] [i_12 - 1]))));
                    }
                    arr_44 [i_11] [i_5] [i_11] [i_4] = (arr_6 [i_5] [i_5] [i_4 - 3]);
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    arr_48 [i_13] [1] [1] [4] |= (((arr_38 [i_4 + 1] [i_5] [4] [i_13]) > (arr_36 [i_4 + 1])));
                    var_35 = (min(var_35, (((((arr_11 [i_4]) > (arr_27 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1] [i_13])))))));
                }
            }
        }
    }
    #pragma endscop
}
