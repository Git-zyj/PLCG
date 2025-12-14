/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_10 = (max((((((var_5 ? var_3 : (arr_9 [i_3] [i_2] [i_1])))) ? (((-2147483647 - 1) ? 4627 : 2077535426)) : var_5)), (((var_5 ? ((max(var_1, (arr_4 [i_0] [i_0] [i_0])))) : ((142651003 / (arr_0 [i_2 + 2]))))))));
                            arr_13 [i_0] [10] [10] [i_3] = (arr_6 [i_0] [i_1] [i_1]);
                            arr_14 [i_0] [i_0] [i_2 - 2] = max(2077535443, var_6);
                        }
                    }
                }
                arr_15 [i_0] = (max((((var_4 & var_6) ? (~var_0) : (arr_12 [i_1] [i_0 + 1] [i_0 - 1] [8]))), (arr_2 [i_0])));
                var_11 = (max(var_11, ((((-(((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0 - 1] [i_1]) : (arr_2 [i_0])))))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] [i_0] [i_0] = (((arr_10 [i_0] [i_0]) ? (arr_5 [i_0 + 1] [i_0] [i_0 + 1]) : 2077535443));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_12 = (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]);
                        var_13 += var_4;
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_14 ^= 2077535427;
                        arr_23 [i_0 - 1] [i_0] [i_0] [i_6] = ((~((var_9 ? var_5 : (arr_4 [i_6] [i_1] [i_1])))));
                        var_15 = var_7;
                    }
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_16 = (min(var_16, (((((50195 ? (((arr_4 [1] [i_1] [i_7]) ? -5 : (arr_9 [i_0] [i_1] [i_7]))) : (arr_24 [i_0] [i_0 - 1] [i_0 - 1]))) & (((((var_5 ? var_3 : var_4)) ^ (var_6 && 523776)))))))));
                    arr_26 [i_0] [4] [4] [i_0] = ((((((((16590408240554482305 ? -123 : 1))) ? var_8 : var_8))) ? (arr_4 [i_1] [i_1] [i_0]) : ((var_0 ? (arr_7 [i_0] [i_0 + 1]) : 283591563))));
                    var_17 = (max(var_17, ((((((arr_25 [i_0 + 1] [i_7]) ? (arr_3 [i_7] [i_7]) : (((arr_16 [i_0] [i_0]) / 29967)))) - var_2)))));
                    var_18 = (((((max(var_8, 6063)) * (var_7 * var_5))) << (47 && 0)));
                }
            }
        }
    }
    var_19 = var_6;
    var_20 = (((((-9223372036854775807 - 1) > 16511231331450340033)) ? (max(((11143 ? 100 : -10488)), ((var_0 ? var_0 : var_0)))) : ((((((-2147483647 - 1) ? var_9 : var_8))) ? var_9 : (510830851 && 15)))));
    var_21 = -26865;
    #pragma endscop
}
