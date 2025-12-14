/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_20 = (max(var_20, ((((arr_7 [i_0] [i_1] [11]) ? ((var_16 + (arr_5 [i_2]))) : (arr_4 [i_1] [i_1]))))));
                    var_21 = (max(var_21, (arr_5 [i_2])));
                    arr_9 [i_1] [i_1] = (arr_7 [i_0] [3] [3]);
                }
                var_22 &= (min((((((var_11 + 9223372036854775807) >> (((arr_3 [i_0]) - 13945)))) / (((var_17 ? var_9 : var_2))))), ((((arr_1 [i_0]) > (arr_3 [i_0]))))));
                var_23 ^= ((((min((((arr_0 [i_1] [i_1]) ? (arr_1 [9]) : var_10)), ((((arr_3 [8]) / (arr_2 [i_0] [i_1]))))))) ? (!var_13) : (((arr_6 [i_0]) | (var_8 | var_16)))));
            }
        }
    }
    var_24 &= ((((((max(var_16, var_5))))) % var_1));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_25 &= ((1585481086 == (-2147483647 - 1)));

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        arr_20 [i_3] [14] [i_5] [i_3] = (-(arr_11 [i_3 - 1]));
                        var_26 = (arr_18 [24] [i_3 - 1] [i_3] [i_6] [i_3] [i_6 - 1]);

                        for (int i_7 = 4; i_7 < 24;i_7 += 1)
                        {
                            var_27 = ((-(arr_14 [i_5] [i_3])));
                            var_28 = (min(var_28, (((var_5 ? 4758179690251662640 : -1698242002)))));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_29 = (arr_16 [0] [0] [0]);
                            var_30 = (((arr_15 [i_6 - 1] [i_3] [i_6 + 1] [i_6 - 1]) && var_18));
                            var_31 = (arr_22 [i_3 + 1] [i_3 + 1] [5] [i_4 + 2] [i_3]);
                            var_32 = ((var_10 && (arr_26 [i_4 + 2] [i_3 - 1] [i_3])));
                            var_33 = (i_3 % 2 == 0) ? ((((arr_16 [i_3] [i_3 + 2] [i_6 - 2]) << (((arr_22 [i_3] [i_3 + 2] [i_4 + 4] [i_5] [i_3]) - 54086))))) : ((((arr_16 [i_3] [i_3 + 2] [i_6 - 2]) << (((((arr_22 [i_3] [i_3 + 2] [i_4 + 4] [i_5] [i_3]) - 54086)) - 6038)))));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_29 [i_9] [i_3] [i_5] [i_5] [i_3] [i_3] = (var_10 ^ var_0);
                            arr_30 [i_3] [i_3] [i_5] [i_6] [i_3] = (((arr_24 [i_3] [i_3]) ? ((((arr_23 [i_4] [i_4]) == var_6))) : (arr_27 [i_3] [i_4] [i_5] [i_3] [i_3] [i_4] [i_3])));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_33 [i_3] [i_4] [16] [i_3] = (((arr_26 [i_4 + 3] [i_4 + 1] [i_3 + 1]) / (arr_26 [i_4 + 2] [i_4 - 1] [i_3 + 1])));
                            var_34 = (((arr_12 [i_3] [2]) >= (((!(arr_23 [i_5] [i_10]))))));
                            var_35 = (((arr_27 [i_3] [12] [i_3] [i_3 - 1] [i_3] [i_3] [i_4 - 1]) ? (arr_27 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 1] [i_4] [i_3 + 1] [i_4 - 1]) : (arr_27 [5] [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_4 + 1])));
                            arr_34 [i_3] [i_3] [i_3] [i_5] [i_6] [20] = (~(arr_10 [i_3 + 1] [i_4 - 2]));
                            var_36 ^= (((arr_11 [i_5]) ? (arr_17 [i_3] [i_6 - 2] [i_4 - 2] [i_6 - 2]) : ((var_9 | (arr_11 [i_10])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_37 = (max(var_37, (arr_31 [24] [i_3 - 1] [i_11] [24] [i_3 - 1] [i_4 + 2])));

                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            var_38 = ((((arr_15 [i_12] [i_3] [i_5] [i_5]) | (arr_12 [9] [i_4]))));
                            var_39 = (i_3 % 2 == zero) ? ((((arr_13 [i_12 + 3] [i_3] [i_3 + 2]) >> (var_15 + 27)))) : ((((((arr_13 [i_12 + 3] [i_3] [i_3 + 2]) + 2147483647)) >> (var_15 + 27))));
                        }
                        for (int i_13 = 3; i_13 < 24;i_13 += 1)
                        {
                            var_40 &= (arr_35 [i_3]);
                            arr_43 [i_3] [6] [i_5] [i_4] [i_4] = var_5;
                        }
                        var_41 = (min(var_41, (arr_31 [i_3] [i_4] [i_11] [i_11] [i_3] [i_4])));
                        var_42 = (max(var_42, (arr_25 [i_3 + 2] [i_4])));
                    }
                    var_43 &= ((-(11 / 26)));
                }
            }
        }
    }
    var_44 = (max((min((~var_8), -var_4)), var_3));
    var_45 = var_14;
    #pragma endscop
}
