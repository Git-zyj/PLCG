/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_10 = 1;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0 + 1] = min((max(4105642969, -1)), var_8);
                            arr_15 [i_4] [i_0] [i_2] [i_3] [i_4] = (max(0, (arr_11 [i_0 - 1] [i_2] [i_2 + 1] [i_0 - 1] [i_3] [i_4])));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_11 = (max(var_11, (min((((arr_1 [i_2]) || (arr_18 [i_1] [0] [i_5] [0] [6]))), (((~4194303) >= (1 != 74)))))));
                            var_12 += (((max(1, (arr_16 [i_0] [i_1 + 1] [i_2] [i_2] [i_0] [i_5 - 1] [i_5 - 1]))) != (~var_1)));
                        }
                    }
                    arr_19 [18] [i_1 - 1] &= (var_1 / var_3);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_2] = (max((((arr_5 [i_1 - 2] [i_1 - 2]) % 1044480)), ((min(9223372036854775807, 197)))));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [11] [i_0] [i_2] [1] = ((((max(193, (arr_21 [i_0 + 2] [i_2 + 1] [i_7])))) ? (~1) : (((arr_21 [i_0 + 2] [i_2 + 2] [18]) * 69))));
                            arr_29 [9] [i_6] [i_2] [i_1] [i_0] = ((+(((arr_4 [i_1 - 1] [i_2 + 1]) ? 0 : (arr_4 [i_1 + 1] [i_2 + 1])))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_13 = 1;
                            var_14 = (min(var_14, 1));
                            arr_32 [i_2] [i_2] [i_2] [15] = (((((~(arr_18 [i_0 + 1] [i_2] [i_2] [i_6] [i_8]))) + ((198 ? var_8 : 1)))));
                            arr_33 [i_0] [i_1] [14] [i_2] [1] [1] [i_2 - 1] = 1;
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_15 = (((arr_9 [i_0 + 1] [i_1 + 1] [i_6] [11]) * (((arr_20 [i_1 + 1] [i_0 + 1] [i_0]) % 1))));
                            var_16 = (min(var_16, ((min(((7359177858538583659 ? ((1 ? var_1 : 46348)) : (arr_18 [i_0] [14] [i_2 - 1] [4] [i_9 + 1]))), (arr_18 [10] [12] [10] [i_6] [i_9 + 1]))))));
                            var_17 = 4850774235104934554;
                            var_18 = ((((min(((max(1, (arr_31 [i_2] [i_2] [i_2] [i_6] [i_9])))), (((arr_13 [14] [14] [19] [14] [i_9]) | (arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_6])))))) ? (((max(1012915656, 1)))) : (var_0 & 1)));
                        }
                    }
                    for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        var_19 = 13595969838604617061;
                        arr_39 [i_2] [i_1] [i_1 + 1] [i_1] [12] [i_1] = (arr_9 [i_0] [i_1] [11] [i_10]);
                    }
                    /* vectorizable */
                    for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [1] [i_2] [1] [1] [8] = (arr_5 [i_11 - 1] [i_11 - 2]);
                        var_20 = (((arr_17 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1] [i_11 - 1] [7]) <= (arr_17 [i_0 + 2] [i_0] [i_1 - 2] [i_1 - 2] [i_11 + 2] [15])));
                    }
                }
            }
        }
    }
    var_21 = ((((~(max(var_8, 29))))) ? ((249 ? -var_9 : ((var_0 >> (164 - 164))))) : ((max(16, 4283))));
    var_22 -= (max((max((10602863392002114267 + var_5), -1)), (((var_9 || (((var_9 ? 1 : 127))))))));
    var_23 = ((((((~135) + 2147483647)) >> ((((1 ? var_1 : var_1)) - 230872433)))));
    #pragma endscop
}
