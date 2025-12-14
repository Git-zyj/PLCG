/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-32767 - 1);
        arr_3 [i_0 + 2] = (((((-32767 - 1) <= 32767)) ? ((-(((-32767 - 1) ? 0 : (arr_0 [i_0] [i_0 + 3]))))) : var_8));
        arr_4 [i_0] [10] = ((~(-32767 - 1)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        var_10 = (max((((((!(arr_7 [i_4] [i_2]))) && 28175))), (((arr_1 [i_3] [i_4]) ? 252566632610443922 : var_5))));

                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            arr_19 [3] [i_4] [i_3] = ((~(-127 - 1)));
                            arr_20 [i_4] [i_2] [i_4] = (max((23501 && 1), ((((var_9 ? 18194177441099107694 : 0)) > (var_7 <= var_1)))));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_6] [i_4] [i_3] [i_4] [i_4] [i_1] = (-32767 - 1);
                            arr_24 [i_1] [1] [i_4] = (max((max((max((arr_18 [i_4] [3] [i_1] [i_3] [i_6] [i_6] [2]), (arr_0 [i_3] [i_3]))), 0)), (((8716 && (arr_15 [i_1] [i_6 + 1] [i_3] [i_4 + 2] [i_6] [i_4]))))));
                        }
                        for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_11 = ((~(arr_0 [18] [i_1])));
                            var_12 = ((!((((arr_15 [i_7] [i_4 + 4] [i_3] [i_7 - 2] [i_7 - 2] [i_7 - 2]) ? (arr_15 [i_4] [i_4 - 1] [i_3] [i_7 - 2] [i_7 - 2] [i_4 - 1]) : (arr_15 [i_1] [i_4 - 1] [i_4 - 1] [i_7 + 1] [i_7] [i_4 + 2]))))));
                            var_13 = (arr_1 [i_3] [i_7]);
                            var_14 = (max((((arr_27 [i_4 + 4] [i_4]) * 0)), (max((max(23501, 262909641)), (1313235032 + 0)))));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_15 = ((((((((arr_10 [i_4] [i_2]) <= (arr_28 [i_1] [i_2] [i_3] [i_4] [i_8]))) ? (((0 ? 78 : var_7))) : (max((arr_9 [i_2] [0] [i_8]), 5619803872954462087))))) ? var_1 : (((arr_28 [i_2] [i_2] [i_4 - 1] [i_4] [i_4 - 1]) / var_2))));
                            arr_30 [i_4] [i_4] = ((!(~var_1)));
                            var_16 = 0;
                            var_17 = (max((((!var_6) ? ((((arr_15 [i_1] [6] [i_3] [1] [i_4] [i_3]) / var_8))) : (-6746166363185360749 ^ var_1))), var_6));
                        }
                        var_18 = (max((max((((-32767 - 1) + 1647016278)), 1)), (((((!(arr_18 [i_4] [5] [5] [i_4] [i_3] [i_3] [i_3])))) ^ 262909641))));
                        var_19 = (!752942);
                    }
                    var_20 = (((93 <= ((0 ? 247 : 1)))));
                    arr_31 [0] [i_1] = (((arr_11 [4] [i_2] [10]) ? (-32767 - 1) : (((arr_0 [i_1] [2]) ? (max(var_7, (arr_11 [i_1] [i_2] [i_1]))) : (arr_21 [i_1] [i_3])))));
                }
            }
        }
        arr_32 [i_1] = 708780099;
        arr_33 [3] [i_1] = ((!(((((!(arr_21 [i_1] [i_1]))) ? ((0 ? 1 : 255)) : var_0)))));
    }
    var_21 = var_0;
    #pragma endscop
}
