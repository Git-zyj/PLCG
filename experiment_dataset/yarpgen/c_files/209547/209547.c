/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = var_13;

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [7] [i_1] [i_0] [i_3] = (var_12 > 1198876886431153913);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_21 = (min(var_21, (((var_16 - ((((var_8 | var_2) ? (arr_7 [i_3] [i_1]) : (arr_2 [i_3 - 1] [i_4])))))))));
                            var_22 = ((~(15 > 0)));
                        }
                        arr_14 [i_0] [0] [i_2] [1] [i_0] [i_3] = (max(((var_0 <= (arr_5 [1] [1] [i_0]))), ((var_3 && (((var_16 ? 0 : var_12)))))));
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] [i_5 - 2] = (arr_5 [i_0] [i_0] [i_0]);
                        arr_18 [i_0] [i_0] [i_0] [11] [7] [i_0] = (max((max(var_6, ((min(25, var_9))))), (~28952)));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_24 [i_2] [i_1] [i_0] [i_0] [i_2] [i_0] [i_0] = (((((((var_4 == (arr_4 [i_7] [i_1])))) != var_5)) ? var_15 : (((((((var_10 ? 15 : 255))) > ((var_1 ? var_6 : var_13))))))));
                            var_23 = (max((arr_15 [i_6] [i_0] [i_0] [i_0 - 1]), ((((arr_10 [i_0 - 1] [i_1] [i_2] [i_6] [i_7] [i_7]) && var_11)))));
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_27 [i_0] [i_0 - 1] [i_0] [i_0] [0] [i_0] [i_0] = var_6;
                            var_24 = ((39 ? -var_11 : ((-((var_9 ? var_10 : (arr_4 [i_6] [i_6])))))));
                            var_25 = (min(var_25, ((var_13 ? 231 : ((-(arr_1 [i_1])))))));
                            var_26 = (min(var_26, ((((arr_9 [i_2] [i_1] [i_2] [i_6]) < ((12156 + (max(var_5, var_12)))))))));
                        }
                        for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, var_7));
                            var_28 = (max(var_28, var_19));
                        }
                        for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_0] [12] [2] = ((!((((arr_28 [i_0 - 1] [i_1] [i_0] [i_6] [i_6] [i_2]) + (arr_4 [i_0 - 1] [i_0 - 1]))))));
                            arr_35 [i_10] [i_6] [i_0] [i_1] [i_0] = (arr_15 [i_10] [i_0] [i_0] [i_0]);
                        }
                        var_29 = (min(var_29, var_5));
                    }
                }
            }
        }
    }
    var_30 = (min(var_30, var_8));
    #pragma endscop
}
