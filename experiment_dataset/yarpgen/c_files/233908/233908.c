/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-var_3, (((!((max(-18692, var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_6 [2] [i_1] [0] [9] = ((((arr_5 [5] [i_1] [i_0]) ? var_0 : 235)));

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_16 = (max(var_16, 21));
                        var_17 = (~var_7);
                        var_18 ^= (((((arr_8 [8]) / 235)) ^ (((!(arr_3 [i_0]))))));
                        var_19 = (min(var_19, 21));
                        var_20 = var_7;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_21 &= (((arr_9 [i_1] [4] [i_1] [i_1] [i_2 + 1] [i_2 - 1]) ? (arr_9 [i_0] [7] [i_0] [6] [i_2 + 2] [i_2 - 1]) : (arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 2])));
                        var_22 += 20;

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_23 = (min(var_23, (((192 ? (((arr_8 [8]) ? -4 : (arr_3 [i_1]))) : 1)))));
                            arr_14 [i_1] [i_1] [i_2 - 2] [i_4] [i_0] = (arr_0 [i_2 - 1] [i_2 + 2]);
                            var_24 &= ((!(arr_5 [4] [4] [4])));
                            var_25 = (min(var_25, (arr_8 [1])));
                            arr_15 [i_0] [i_1] [2] [i_4] [i_1] = (((arr_10 [i_2 + 1] [i_2 - 2] [i_1]) >= (((199 ? var_1 : 24)))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_26 = 143;
                            var_27 += var_1;
                            arr_18 [i_1] [i_1] [8] [4] [i_6] = ((-((147 ? 2393594280 : (arr_9 [8] [i_1] [i_2 + 3] [10] [i_6] [10])))));
                            arr_19 [i_0] [9] [i_4] [i_1] = (arr_9 [i_2] [i_2] [i_2] [i_2] [i_6] [i_2 + 1]);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [5] [i_1] [i_4] [i_7] [5] = ((-127 ^ (!var_6)));
                            var_28 = (((arr_9 [i_7] [i_2 - 1] [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 1]) ? (arr_1 [i_0] [i_0]) : ((150 ? var_0 : 20))));
                        }
                        arr_24 [i_0] [2] [i_0] [2] [2] [6] &= ((var_13 - (((arr_1 [i_2] [i_1]) ? var_12 : 235))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_28 [i_1] [i_1] [11] = var_0;
                        var_29 = ((40 ? (arr_0 [i_2 - 2] [i_2 + 3]) : 21));
                        var_30 = ((40 ? var_13 : (arr_22 [i_0] [i_0] [7] [i_1] [i_2] [i_1])));
                    }
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        var_31 *= (arr_1 [i_0] [i_1]);
                        var_32 = (arr_30 [i_1] [i_1] [i_2] [i_0] [i_0] [2]);
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    arr_34 [i_1] [i_1] [i_1] [i_1] = (((((var_3 ? (arr_0 [3] [i_1]) : (arr_3 [i_1])))) ? -1 : 48261));
                    arr_35 [i_1] [i_1] [i_1] = ((~((var_5 ? (arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [9]) : -8664179074579049214))));
                    var_33 = ((var_6 ? 182 : var_11));
                    arr_36 [i_1] [i_1] = (var_7 % 2041165745);
                }
                var_34 = var_9;
            }
        }
    }
    var_35 = var_11;
    #pragma endscop
}
