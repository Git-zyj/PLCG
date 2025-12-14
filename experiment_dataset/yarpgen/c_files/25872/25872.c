/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((arr_1 [2]) >= (!var_4));
        arr_4 [i_0] |= ((~((var_7 | (arr_2 [1])))));
        arr_5 [i_0] = (arr_0 [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            arr_13 [9] [i_1] = (((((-(max((arr_10 [i_1]), 1))))) ? (var_1 | var_14) : ((((~var_5) | (max(1, var_12)))))));
            arr_14 [i_1] = var_1;
            arr_15 [i_1] [i_1] [i_2] = ((var_11 >= ((((!(!var_14)))))));
        }
        arr_16 [i_1] = ((((((var_3 != ((var_12 ? var_5 : var_12)))))) / ((-(~var_11)))));
        arr_17 [i_1] = (arr_6 [i_1] [i_1]);
        arr_18 [1] = (((((-var_7 + 2147483647) << (((((1 != (arr_10 [i_1])))) - 1)))) ^ (((!(((var_8 << (54027 - 54016)))))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_26 [i_3] [10] &= (arr_1 [i_3]);
            arr_27 [6] [i_3] [i_3] = (((1349820117 % var_14) ? 3518481094844289400 : (~var_2)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_34 [i_3] [10] [i_6] [10] [i_6] [i_6] = var_9;
                        arr_35 [i_3] [i_3] [i_5] [i_6] = (~var_4);
                        arr_36 [2] [i_6] [i_6] [2] = (!var_11);

                        for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] = var_3;
                            arr_40 [i_6] = (((arr_31 [i_5] [2] [i_7] [2] [i_5]) ? 34890 : ((((arr_28 [i_4]) != -1089111547)))));
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_43 [i_3] [i_3] [12] [0] [i_3] [i_4] [1] = ((-((5 ? var_2 : (arr_31 [3] [i_4] [0] [10] [i_4])))));
                            arr_44 [10] [4] [i_4] [10] [i_3] = ((!(((-(arr_41 [8]))))));
                            arr_45 [i_5] = (((~var_12) < (~1350136914)));
                            arr_46 [i_3] [i_8] [i_5] [i_4] [i_8] = (var_0 == var_8);
                            arr_47 [i_4] [i_4] [10] [i_4] [i_4] [i_4] = (((!0) < var_5));
                        }
                        arr_48 [i_4] [i_4] [2] = var_1;
                    }
                }
            }
        }
        arr_49 [i_3] = ((-((-((var_3 ? var_12 : var_9))))));
        arr_50 [i_3] = var_1;
        arr_51 [i_3] [i_3] = ((~(((!(arr_22 [i_3]))))));
    }
    var_15 = ((!((max((~var_1), 12361)))));
    #pragma endscop
}
