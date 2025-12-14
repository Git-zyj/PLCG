/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((var_10 / 1), (var_8 ^ var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((((-8340137689673677773 ? 8340137689673677773 : -1327670628))) ? ((((min(8340137689673677773, 8340137689673677773))) ? (((((arr_6 [0]) + 2147483647)) << (var_7 - 4236054116674543048))) : (max(594451795, var_8)))) : ((min(62, 1))))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = (((((0 ? var_12 : (min((arr_4 [i_0]), (arr_5 [i_0] [i_1] [i_1] [i_1])))))) ? (((!var_7) + 16991339667314818754)) : ((var_2 ? (arr_5 [i_0] [i_3] [i_1 + 1] [i_3]) : (arr_5 [i_0] [i_1] [i_1 + 2] [i_0])))));
                        arr_12 [i_0] = (((((arr_7 [i_1 + 1]) - var_1)) <= ((min(var_0, ((0 ? (arr_10 [i_0] [i_1] [i_2] [i_2] [i_0]) : -8340137689673677773)))))));
                        var_17 = -var_5;
                        arr_13 [i_0] [i_0] [12] [i_3] = (((min((arr_10 [i_0] [i_1] [i_0] [i_3] [i_1 - 2]), (arr_10 [i_0] [i_0] [i_2] [i_3] [i_1 - 2]))) + (((((arr_10 [i_1] [i_1] [i_1] [i_3] [i_1 - 1]) > (arr_10 [i_3] [i_3] [i_3] [i_3] [i_1 - 3])))))));
                        arr_14 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = ((16972646908070173329 + (((~(arr_5 [i_0] [i_0] [i_1 + 1] [i_1]))))));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        arr_17 [i_0] [i_4] = (arr_7 [i_1]);
                        var_18 = (max((max(2100152656484693402, ((max(-6893680899860116050, var_3))))), var_13));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_22 [i_0] [i_1 - 1] = var_2;

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_19 = arr_23 [i_6 - 1] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_20 -= (2305843007066210304 * 8340137689673677773);
                            arr_26 [i_0] [i_0] = (((arr_25 [i_0] [i_0] [i_5 + 2]) ? (arr_4 [i_0]) : (~-6609414389181432781)));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_21 = (arr_8 [i_1 + 2] [i_5 + 2]);
                            var_22 = var_5;
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_27 [i_0] [i_1])));
                        }
                        arr_31 [i_0] [i_0] [i_2] [i_5] = (arr_3 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_34 [i_0] [i_2] [i_1 - 3] [i_1] [i_0] = (((arr_33 [i_0] [i_1 + 2] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 2]) / (arr_25 [i_1 - 1] [i_0] [i_1 - 1])));
                        var_23 *= (arr_29 [i_2] [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
