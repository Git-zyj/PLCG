/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_9 || var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [7] = (((((arr_4 [i_0] [i_2] [i_1]) ? (arr_0 [i_1]) : var_15))) ? (arr_2 [i_2]) : ((((!(arr_7 [i_1] [i_1] [i_1]))))));
                    arr_9 [i_0] [i_1] = (((arr_3 [i_0] [i_0] [i_0]) - var_19));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_4;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] [i_3] [1] = (((1 < 238) * (((!(arr_11 [i_1] [i_0]))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_0] [i_5 + 2] = ((arr_7 [i_5 - 2] [i_5 + 2] [i_5 - 2]) ? (arr_2 [i_5 - 3]) : (arr_2 [i_5 + 1]));
                            arr_19 [i_0] [i_0] [i_3] [i_4] [i_4] &= (((var_7 <= 96) | 17531));
                            arr_20 [i_0] [i_1] [i_3] [i_4] [i_5] = ((!(((arr_3 [6] [6] [6]) < var_16))));
                            arr_21 [i_0] [i_1] [i_3] [i_3] [i_5] [i_1] = (arr_7 [i_0] [i_0] [i_0]);
                        }
                        for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
                        {
                            arr_26 [3] [i_4] [i_4] [i_6] [i_4] [6] [i_4] = var_7;
                            arr_27 [i_0] [i_0] [i_0] [i_6] [i_6] = (((arr_25 [i_0] [i_6] [i_1] [i_0] [i_6] [i_0]) != (17531 >= var_7)));
                            arr_28 [i_4] [1] [i_6] [i_4] [i_0] = ((((((arr_17 [i_3] [i_3] [i_3] [i_3]) / -761287552))) ? (!-17532) : 53));
                            arr_29 [i_0] [i_6] [i_0] [i_6] [i_6] = var_13;
                        }
                        arr_30 [i_0] [i_0] [4] [i_0] [i_0] = ((!(arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [5])));
                    }
                    arr_31 [i_0] [i_0] [i_3] = ((-(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_32 [i_1] [1] [i_1] [i_1] = ((!((((arr_22 [5] [i_0] [i_1] [i_0] [i_0]) / 17553)))));
                    arr_33 [i_0] = ((!((((arr_3 [i_0] [i_0] [i_3]) * (arr_6 [i_1]))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_38 [i_0] [4] [1] = (!67092480);
                    arr_39 [i_0] [i_0] [i_1] [i_7] = (17525 < 14);
                    arr_40 [i_7] = (!6406);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_47 [i_0] [i_1] [i_0] [i_1] [i_9] &= ((var_14 ? (arr_14 [i_9 + 1]) : var_13));
                                arr_48 [i_0] [i_0] [i_0] [i_8] [i_7] [i_8] [i_9] = var_9;
                                arr_49 [i_7] [i_7] = ((!((((arr_14 [i_7]) ? (arr_36 [i_7] [i_9]) : (arr_37 [i_0]))))));
                                arr_50 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = ((!(arr_11 [i_9 - 1] [i_9 - 1])));
                                arr_51 [i_7] = (arr_35 [i_9 - 1] [i_8] [i_7] [i_1]);
                            }
                        }
                    }
                }
                arr_52 [i_0] [i_1] = (((((+(((arr_42 [i_0]) / -22))))) ? (((((min((arr_12 [i_1] [i_1] [i_0] [i_0]), 2754659920))) <= (arr_41 [i_1] [i_0] [i_0] [i_0] [i_0])))) : (-32767 - 1)));
                arr_53 [i_1] = (min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]), ((((!17556) == -67092481)))));
                arr_54 [i_0] [i_1] = (133 >= -17532);
            }
        }
    }
    #pragma endscop
}
