/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_0, var_6));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = 352707586;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_17 &= (max((max(var_2, var_11)), 4171293235));
                    var_18 = (min(var_18, (((!(min((!var_7), (((arr_8 [i_1] [i_1] [i_1] [i_1] [i_1]) && var_3)))))))));
                    var_19 -= max((min(var_13, var_14)), (arr_9 [i_3 + 1] [i_3 + 2] [i_3] [i_3] [i_3]));
                    arr_10 [i_0] [i_2] [i_2] = ((min(var_10, var_7)));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_14 [i_2] [4] [i_2] [i_2] [i_2] = (arr_7 [11] [i_1] [i_2]);

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_0] [i_0] [i_5 - 1] [i_5 + 1] = max((!var_3), (((arr_5 [i_5 - 1] [i_5 - 1] [i_5 + 1]) - (arr_5 [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
                        arr_18 [2] [i_1] [i_1] [i_1] [i_1] [i_4] [8] |= max((max((max(var_14, var_5)), (max((arr_5 [i_0] [i_1] [i_2]), (arr_11 [i_0] [i_1] [i_2] [i_4]))))), var_9);
                        var_20 += max((((max((arr_13 [i_1] [i_1]), (arr_16 [i_0] [i_0] [i_0] [i_0]))))), ((max((arr_1 [i_4] [i_1]), var_10))));
                        var_21 = (max(var_21, ((max((arr_5 [i_0] [i_0] [i_0]), ((min(var_0, var_12))))))));
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_22 = min((arr_9 [11] [i_4] [i_0] [i_0] [i_0]), ((var_11 ? var_2 : (arr_11 [i_6] [i_4] [i_1] [5]))));
                        var_23 ^= (max((min((max((arr_11 [3] [i_1] [3] [i_6]), (arr_16 [i_1] [i_2] [i_1] [i_6]))), var_12)), var_8));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_24 = ((arr_5 [i_0] [i_0] [i_0]) ? (((max(var_5, (arr_16 [i_1] [i_1] [1] [11]))))) : var_4);
                        var_25 = max(((var_7 + (arr_8 [i_2] [i_2] [4] [i_4] [i_7]))), ((max(var_6, var_2))));
                        var_26 = (var_6 % var_14);
                    }

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_27 |= var_0;
                        var_28 = (max(var_28, ((((!(((arr_25 [i_4] [i_1] [i_2] [0] [0]) || (arr_26 [i_0] [i_1] [i_1] [i_0] [i_8] [i_0] [i_2])))))))));
                    }
                    arr_29 [i_2] [i_1] [i_1] = (min(var_14, var_10));
                }
                var_29 *= max(var_12, ((max(3942259709, 2799257273))));
                var_30 = (min(var_30, (((((((!var_4) ? (max((arr_20 [8] [i_0] [8] [i_0] [i_0] [10]), (arr_5 [i_0] [i_0] [9]))) : (!var_6)))) ? (((((var_7 ? var_10 : var_0))) ? ((var_7 ? (arr_13 [i_0] [i_1]) : (arr_3 [i_0]))) : (arr_20 [i_0] [i_0] [6] [i_1] [i_0] [i_2]))) : (((max((max(var_12, var_2)), (arr_20 [i_0] [i_1] [10] [i_0] [i_0] [i_1]))))))))));
            }
            arr_30 [i_0] [i_0] = ((-(max((arr_25 [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_25 [i_1] [i_0] [6] [i_1] [i_1])))));
            arr_31 [i_0] [i_1] [i_1] = ((var_0 ? var_12 : (arr_27 [i_0] [i_1] [i_1] [8] [i_0] [i_0] [i_0])));
        }
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            var_31 *= (max((((!(arr_26 [i_0] [i_9] [i_9] [i_9 - 3] [i_9 - 3] [i_0] [i_0])))), (max(var_8, var_8))));
            var_32 += (max(var_10, (arr_13 [i_0] [i_9 - 2])));
            var_33 += (!var_4);
        }
        for (int i_10 = 4; i_10 < 11;i_10 += 1)
        {
            var_34 = ((var_1 ? var_7 : var_11));
            var_35 = var_14;
            var_36 = (min(var_36, ((var_4 ? (var_6 || var_7) : (arr_28 [i_0] [i_10 - 2] [i_10 - 2] [i_10 + 1])))));
            arr_37 [i_0] [i_10 - 3] [i_0] |= (max((arr_15 [i_0] [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 4] [i_10 - 4]), (arr_2 [i_0])));
            arr_38 [i_0] = var_8;
        }
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_37 -= (max((((arr_2 [i_11]) / (arr_2 [i_11]))), (((arr_19 [i_11] [i_11] [i_11] [i_11] [2]) & (arr_36 [i_11] [i_11])))));
        arr_41 [0] = ((arr_28 [i_11] [10] [i_11] [i_11]) ? (((max(var_14, (arr_6 [i_11] [i_11]))))) : (arr_1 [i_11] [i_11]));
        arr_42 [i_11] = ((max(((var_2 ? var_7 : var_1)), var_2)) + (max((arr_3 [i_11]), var_7)));
    }
    #pragma endscop
}
