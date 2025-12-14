/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3246;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = (arr_4 [i_0] [i_1] [i_1]);
            var_11 = (((~(arr_4 [i_1] [i_0] [i_0]))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_12 = (min((~1), (arr_8 [i_3 + 1] [i_2] [i_2])));
                        arr_14 [i_0] &= 0;

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_13 = (min(var_13, (arr_4 [i_0] [i_2] [i_3 - 2])));
                            var_14 &= (arr_9 [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(((((min(var_9, (arr_13 [i_0] [i_0])))) <= (arr_1 [i_0])))));
                            var_15 = var_2;
                            var_16 = ((!((min((arr_3 [i_2] [i_2 - 1]), var_3)))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_17 = (arr_23 [i_0] [i_0] [i_3] [i_0] [i_7]);
                            var_18 = ((((((var_9 - -470113406606336479) || (((arr_15 [i_0] [i_2 - 1] [i_3] [i_0] [i_2 - 1] [i_3] [i_7]) <= (arr_8 [i_3 + 1] [i_3 + 1] [i_7])))))) < (((var_6 == (((max(var_9, var_5)))))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] = (min(((-(arr_17 [i_3] [i_3] [i_3] [i_3] [i_3 - 1]))), (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3 - 2])));
                        }

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((~(arr_19 [i_0] [i_2 + 2] [i_0] [i_3 + 1] [i_8] [i_2 + 2]))), ((~(arr_19 [i_0] [i_2 + 2] [i_3] [i_3 - 2] [i_8] [i_2 + 1])))));
                            var_19 = (min(var_19, (((-(!var_4))))));
                            arr_31 [i_2] [i_3] [i_4] &= ((((max(1, 0))) / -1058108832));
                        }
                    }
                }
            }
            var_20 = (arr_23 [i_0] [i_2 - 1] [i_0] [i_0] [i_2 + 2]);
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_21 = (arr_15 [i_2] [i_2 - 1] [i_9 - 1] [i_2 - 1] [i_9 - 1] [i_10] [i_10]);
                            var_22 = ((max((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((var_1 ? var_9 : (arr_37 [i_0] [i_9] [i_0] [i_0]))))));
                            var_23 = (~0);
                        }
                    }
                }
            }
            var_24 = (arr_10 [i_2] [i_2] [i_2 + 2] [i_2]);
        }
        for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
        {
            arr_43 [i_0] [i_0] [i_12] = ((-var_8 <= (min((((arr_1 [i_0]) * (arr_13 [i_0] [i_12 - 1]))), 2115696068))));
            arr_44 [i_12] [i_12] [i_12] = (arr_33 [i_0] [i_12]);
        }
    }
    var_25 = (((((min(var_6, -2115696068)) >= (!var_2))) ? (max((var_0 < var_2), (max(var_6, var_7)))) : var_5));
    var_26 = -1836960961;
    #pragma endscop
}
