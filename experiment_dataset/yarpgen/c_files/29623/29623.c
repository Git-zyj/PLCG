/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 = var_17;
    var_20 |= (max(var_5, (((((var_0 ? var_5 : var_1))) ? var_6 : (var_6 << 1)))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_21 = (max(((((min((arr_1 [i_0 - 3] [i_0 - 2]), 16383))) ? (arr_2 [i_0 + 2]) : (arr_0 [i_0 - 3] [i_0 - 2]))), ((~(arr_2 [i_0 - 1])))));
        var_22 = max(((var_13 ? (arr_0 [i_0 + 1] [i_0 - 1]) : ((var_16 / (arr_1 [i_0 + 1] [i_0 - 1]))))), (arr_2 [i_0 + 2]));
        arr_3 [i_0 - 3] = (((0 ? 32767 : 11635)));
        arr_4 [i_0 + 3] = (((var_7 < -var_3) - (arr_0 [i_0 + 1] [i_0 + 2])));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 2] = (!-779099920);
        var_23 &= (((((-2147483647 - 1) < 779099919)) ? -1 : ((((arr_6 [i_1 - 1] [i_1 - 2]) || (arr_6 [i_1 - 2] [i_1 - 1]))))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_2 - 1] [i_3] [i_4] [i_3] [i_3] [i_3] = (arr_13 [i_2 - 2] [i_2 + 1] [i_2 - 2]);
                        var_24 -= max(((-((var_17 ? (arr_11 [i_2 - 3] [i_3] [i_4]) : (arr_5 [i_4]))))), ((-(((arr_13 [i_2 + 3] [i_2 - 3] [i_4]) - -1)))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_22 [i_2 - 1] [i_3] [i_4] [i_6] = 1;
                        arr_23 [i_2 + 3] [i_4] = (((((arr_21 [i_2 + 1] [i_2 - 1] [i_2 - 3] [i_2 + 3]) / (arr_21 [i_4] [i_4] [i_4] [i_4]))) - (arr_5 [i_6])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((4 | (((arr_9 [i_2 - 3]) ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 + 1]))))))));
                                var_26 = (max(var_7, (max(1549967333, 54492))));
                                var_27 = (!-1);
                                arr_30 [i_2 - 1] [i_3] [i_4] [i_7] [i_8] [i_3] [i_2 - 3] = ((min(var_5, (((arr_12 [i_2 - 2] [i_2 + 3] [i_2 - 1]) ^ (arr_29 [i_7] [i_4] [i_3] [i_2 - 1]))))));
                            }
                        }
                    }
                    arr_31 [i_2 - 1] = (((((arr_5 [i_2 + 3]) ? ((14 * (arr_28 [i_2 + 1] [i_2 - 2] [i_3] [i_4] [i_4] [i_4]))) : ((59922 ? 1 : 7)))) >> ((((((((arr_19 [i_4] [i_3] [i_3] [i_3] [i_2 + 2] [i_2 - 1]) < (arr_9 [i_3])))) | var_13)) - 27691))));
                }
            }
        }
        var_28 = (arr_27 [i_2 + 3] [i_2 - 1] [i_2 - 2] [i_2 + 3] [i_2 - 1] [i_2 - 3] [i_2 - 3]);
        var_29 = ((((((var_16 ? (arr_24 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 2]) : (arr_1 [i_2 - 3] [i_2 - 3])))) ? var_15 : (var_4 < var_7))));
        arr_32 [i_2 - 2] [i_2 - 3] = var_8;
        arr_33 [i_2 + 3] [i_2 + 1] = (min(((~(arr_12 [i_2 - 1] [i_2 + 2] [i_2 + 3]))), (arr_26 [i_2 + 1] [i_2 - 3] [i_2 - 1] [i_2 + 3] [i_2 - 2])));
    }
    #pragma endscop
}
