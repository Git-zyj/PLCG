/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(-var_1, var_6));
    var_15 -= ((-(max((min(var_10, var_0)), 1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = (max((arr_2 [i_0]), var_4));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_16 = (max(var_16, ((((arr_5 [i_0] [i_1]) & (~var_0))))));
                    arr_11 [i_0 + 2] [i_1] [i_0] [i_0 + 2] = (arr_2 [i_0]);
                }

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_17 = (min((((arr_15 [i_0]) - var_10)), ((min((arr_14 [i_0] [i_1] [i_3]), var_6)))));

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_19 [i_0 + 2] [i_0] [i_3] [i_4] = var_0;
                        var_18 = ((!((-var_13 >= (arr_16 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_5] [i_5] [3] [1] = 2527030541;
                            var_19 += -2147483648;
                            var_20 = ((!(arr_12 [1] [i_5] [i_5 + 1] [i_0 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_21 *= (arr_13 [i_0] [2] [6]);
                            var_22 = (arr_22 [i_7] [i_3] [i_3] [i_0]);
                            arr_32 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = (((arr_13 [i_1] [i_0] [i_5]) ? (((var_6 + (arr_14 [i_5] [9] [9])))) : ((var_4 ? (arr_6 [i_0]) : var_10))));
                        }
                        arr_33 [1] [3] [8] [i_3] [i_0] [8] = var_13;
                        arr_34 [9] [i_0] [6] = (arr_7 [i_5 + 1]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_38 [8] [i_0] [i_3] [i_3] [8] [i_3] = (!24203);
                        arr_39 [i_0 + 1] [5] [i_0] = 1001271008226635771;
                    }
                    arr_40 [i_0] [i_0] [i_1] [i_0] = (min((max((arr_10 [i_0 + 1] [7] [i_3] [i_0 - 1]), (arr_31 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))), (((~0) ^ ((~(arr_12 [i_1] [i_1] [1] [i_0])))))));
                }
                arr_41 [i_0 + 2] [8] [i_0] = 0;
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
