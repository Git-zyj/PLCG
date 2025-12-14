/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_11, (((var_7 ? var_4 : (max(var_7, 4178706714)))))));
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 = (max(var_16, ((((((18446744073709551605 * (((var_6 ? 0 : var_4)))))) ? var_0 : (arr_5 [i_0]))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [5] = 134217664;
                        arr_12 [i_0] [i_2] [i_1] [i_3] = ((-(min((3241507632416538591 / 255), ((18446744073575333951 ? (arr_10 [i_0] [15] [i_1] [i_3]) : (arr_0 [i_0] [i_3])))))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_17 = (arr_6 [i_2]);

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_18 = (min(var_18, ((((arr_16 [i_0] [i_4] [i_5 - 2] [i_5 - 2] [i_5 - 1]) ? (arr_2 [i_0]) : -1)))));
                            var_19 = ((arr_16 [i_0] [i_0] [i_5 + 1] [i_5] [i_5 + 1]) || (arr_16 [i_1] [i_1] [i_5 - 2] [i_5 + 1] [i_5]));
                            arr_18 [i_1] [i_1] [i_1] [i_4] [i_5] = (arr_7 [i_5 + 2] [i_5] [i_5] [i_5 - 2]);
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_21 [i_0] [i_0]) ? (arr_4 [i_0] [i_2] [i_7]) : (arr_4 [i_6] [7] [i_0]))))));
                            arr_24 [i_0] [i_0] [4] [i_0] [11] [i_1] [i_0] = (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_7] [i_1] [i_2] [i_6]) : var_9));
                        }
                        var_21 |= (330771463 ? 3241507632416538591 : 11671051772637920083);
                        var_22 = (max(var_22, 251));
                        var_23 = ((var_0 ? (arr_22 [i_0] [i_1] [i_1] [i_2] [0]) : var_3));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_24 |= var_2;
                        arr_27 [i_1] = (arr_0 [4] [i_2]);

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_25 = (min(var_25, var_7));
                            arr_31 [3] [i_1] [i_1] [i_2] [i_8] [i_9] = (var_13 == var_9);
                            var_26 *= (arr_8 [i_0]);
                        }
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_1] [i_1] [i_0] [i_10] = ((var_5 & (((((((arr_6 [i_1]) ? (arr_28 [i_0] [i_1] [i_2] [i_1]) : 3241507632416538569))) ? (arr_32 [i_10] [i_1] [i_2] [i_10]) : var_2)))));
                        arr_35 [i_1] = -2723795720391448053;
                        var_27 -= 119;
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_39 [i_1] [i_1] [i_1] [i_11] = var_3;
                        arr_40 [i_1] = ((~((-(arr_28 [i_0] [i_1] [i_2] [i_1])))));
                    }
                }
            }
        }
    }
    var_28 |= 242;
    #pragma endscop
}
