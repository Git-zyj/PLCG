/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = var_6;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_21 = (arr_12 [8] [i_3] [i_2] [i_1 - 1] [i_0]);
                            arr_13 [i_3 - 1] [i_2] [i_0] [i_0] = (arr_6 [i_1 + 1]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_5] [i_3 - 2] [i_1 - 2] [i_2] [i_1 - 2] [i_0] [i_0] = ((!(((1 ? 65 : -126)))));
                            var_22 = var_9;
                            arr_17 [i_5] [i_3] [i_0] [i_2] [14] [i_0] [i_0] = -var_17;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_6] [i_2] = 49;
                            var_23 = (((arr_9 [i_1] [i_3 + 1] [i_1] [9] [i_1 - 1] [i_1]) ? 1 : (arr_9 [i_6] [i_3 + 1] [i_3] [i_0] [i_1 - 2] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_24 -= var_6;
                            arr_25 [2] [2] [i_2] [i_2] [i_2] = (((arr_12 [9] [i_3 + 1] [i_2] [i_2] [i_7]) >= (arr_21 [i_3 - 3] [i_3 - 1] [i_3 + 2] [i_3 + 1])));
                        }
                        var_25 = var_3;
                    }
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_26 = (((var_6 ? var_14 : var_16)));
                        var_27 -= ((((((((arr_27 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8]) ? var_13 : var_2))) ? ((((arr_2 [i_1 - 1]) * var_17))) : (arr_20 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_8 - 2] [i_8 + 1] [i_8])))) + ((((((arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_8 - 1]) | -116))) ? (var_0 | -3389127818510143059) : (-1226207668315210369 ^ var_4))));
                    }
                    var_28 = (max((~127), 97));
                    arr_28 [i_0] [i_0] [i_0] = (min(((((((arr_5 [i_0] [i_1 + 1] [1]) ? var_17 : var_5))) ? (((var_8 ? var_5 : (arr_8 [i_0] [i_1 - 2] [i_1] [i_0])))) : var_1)), ((var_3 ? var_18 : 54))));
                    var_29 = (max((min((((-(arr_18 [11] [i_1] [i_1] [10] [i_1] [1] [i_0])))), ((var_9 % (arr_3 [i_2]))))), ((((arr_18 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2]) * (arr_18 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [9] [i_1 - 1] [i_1 - 2]))))));
                    arr_29 [i_0] [i_0] [i_0] = (3041176774 + -126);
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_30 = ((!((((((-109 ? 7 : 8160))) ? (var_19 + var_19) : (arr_8 [i_0] [i_0] [i_9] [i_0]))))));
                    var_31 = var_0;
                    var_32 = (((((var_2 << (var_18 - 19855)))) || ((max((arr_5 [i_0] [i_1 + 1] [i_1 - 2]), (arr_4 [i_1 + 1]))))));
                    arr_32 [i_0] [i_0] = (((((-1009792149 < var_8) == var_6)) ? (arr_20 [i_0] [i_1 - 2] [i_0] [13] [i_9] [13]) : var_12));
                }
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    arr_35 [i_0] [i_0] [i_10 - 1] [i_10 - 1] = var_11;
                    arr_36 [i_10 - 1] [11] [2] [i_0] = ((((((((arr_11 [i_0]) ? 2047 : var_2))) || ((var_3 && (arr_5 [8] [i_1] [8]))))) ? (arr_8 [11] [i_0] [i_1] [i_10]) : ((((arr_18 [8] [8] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_10 - 1]) && (arr_18 [i_10 - 1] [i_10 - 1] [i_10] [i_1] [i_1 + 1] [i_1] [i_0]))))));
                    arr_37 [14] [0] [i_10] |= (arr_2 [i_0]);
                    arr_38 [i_0] [i_1 - 1] [i_0] = var_3;
                }
            }
        }
    }
    var_33 = var_18;
    #pragma endscop
}
