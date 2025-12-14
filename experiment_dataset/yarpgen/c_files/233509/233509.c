/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_13 | (min(-8868353079057730186, var_15)))) & ((((((-127 - 1) ^ var_10)))))));
    var_20 = (min(var_20, var_15));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = ((max(var_5, (arr_5 [i_2 - 1] [i_1 - 2] [i_2]))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_22 = var_16;
                        arr_10 [i_0] [i_3] [i_0] [i_3] = ((-((((var_5 ? (arr_9 [i_3] [9] [i_0] [i_0]) : var_3))))));
                        arr_11 [10] [i_0] [10] [16] &= ((((min((arr_1 [10] [i_1 - 1]), (min(var_18, (arr_5 [i_0] [i_2] [i_3])))))) ? (arr_0 [i_2]) : ((min(233059133, var_13)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_17 [i_0] [17] [10] [17] [i_5] = (var_1 ? (arr_5 [i_0] [i_1] [i_4]) : -1464857896);
                            var_23 = (max(var_23, (((((!(arr_6 [i_0] [i_0] [i_0] [4]))) ? (arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 + 2]) : (arr_1 [i_2] [i_1 + 1]))))));
                            var_24 += ((((1686856981933073986 << (((arr_13 [i_0]) + 766811043)))) << (var_2 + 55)));
                        }
                        var_25 *= (!var_15);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] = (arr_12 [i_7] [12] [i_1] [3]);
                                var_26 = ((((((~var_2) && (arr_5 [19] [19] [19])))) | ((((-(arr_5 [i_0] [14] [10]))) - ((var_1 / (arr_13 [i_6])))))));
                            }
                        }
                    }
                    var_27 = var_17;
                    var_28 = arr_12 [4] [i_1] [i_1] [i_2];
                }
            }
        }
    }
    var_29 = (min(var_29, ((var_12 ? var_4 : (max(var_15, (((var_18 + 2147483647) >> (-39 + 50)))))))));
    var_30 = var_15;
    #pragma endscop
}
