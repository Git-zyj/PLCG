/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 |= min(-36, (((arr_0 [i_0]) ? (var_15 + var_7) : (((1 ? 1 : var_0))))));
        arr_3 [1] &= ((var_2 ? (((arr_1 [i_0] [0]) >> (((arr_1 [i_0] [10]) - 65)))) : (((arr_2 [i_0]) - (arr_1 [6] [6])))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((~(max((arr_2 [i_0]), (max(3931636753, -11))))));
            var_20 = ((((((~var_3) ? (6576693240035228745 == 363330542) : (arr_2 [i_0])))) ? (arr_6 [6]) : ((var_17 / (arr_1 [i_0] [2])))));
            var_21 = (max(var_21, (arr_0 [i_0])));
            var_22 = (((var_12 ^ var_12) | (~-181390849491623266)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_0] = (max((min((~var_4), ((((arr_1 [i_0] [i_0]) - (arr_6 [i_0])))))), (arr_1 [i_0] [i_0])));
            arr_11 [i_0] = (arr_6 [i_0]);
            arr_12 [i_0] [i_0] = var_12;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_23 = ((0 ? 1 : 3013640945383767362));
                arr_20 [i_0] [i_3 + 1] [i_4] [i_4 + 1] = arr_2 [7];
            }
            arr_21 [i_0] [5] [i_3] = (var_17 - 8191);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_34 [i_5] &= ((!(((-(arr_19 [i_7]))))));
                                var_24 = (arr_27 [i_8] [1] [1] [i_0] [7] [i_0]);
                                arr_35 [i_0] [i_0] [i_6] [i_0] = var_0;
                            }
                        }
                    }
                    arr_36 [i_0] [i_5] [i_6] [i_0] = (((((-(min(-5, (arr_19 [i_0])))))) * ((-1 ? (min(var_4, (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_28 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_25 = var_18;
                                var_26 = (min(var_26, var_15));
                                var_27 = ((((((~var_10) - -1))) ? var_9 : (((((max(1, 1)))) + (632716995 - var_14)))));
                                var_28 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_2;
    var_30 += ((var_8 ? 193 : var_5));
    var_31 = var_6;
    #pragma endscop
}
