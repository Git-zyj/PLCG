/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 &= ((~(!var_15)));

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [6] [6] |= ((59 ? (((((var_4 ? var_0 : 1))) ? (arr_7 [i_0]) : ((var_10 ? var_8 : (arr_8 [i_0] [i_0] [1]))))) : (((((2090579538 >> (var_0 - 49273))))))));
                        arr_14 [i_3] [i_1] [i_1] [i_0] = (((((max(var_3, var_4)))) ? ((2090579530 ? ((var_14 ? var_9 : (arr_9 [i_1] [i_1] [0] [i_3]))) : ((max(var_11, 2147483647))))) : (~var_3)));
                    }
                }
                var_18 -= (((max((arr_0 [i_0 - 1]), (arr_8 [i_0 - 1] [i_1] [i_0 + 1]))) ^ 2147483647));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_19 = 179770023;
                    arr_17 [i_1] [i_1] [i_1] [i_4] = var_8;
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_21 [10] [10] [i_1] = (min((max((~var_9), (arr_7 [i_0 - 1]))), ((max((((arr_18 [i_5] [i_1] [i_5] [i_0 - 1]) ? var_5 : 113)), 2090579523)))));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_24 [i_1] [i_1] = (arr_20 [i_0] [i_0] [i_1]);
                        var_20 *= ((((((arr_6 [i_0 - 1] [i_1]) ? (arr_6 [i_0 + 1] [i_5]) : 45))) ? var_12 : (~var_0)));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_1] [1] |= var_2;

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_21 = (((min(var_6, ((var_0 / (arr_8 [i_0] [i_1] [i_1]))))) < ((((-(arr_25 [12] [i_1] [i_5] [12] [i_5])))))));
                            arr_30 [9] [i_1] [i_0] [i_0] [i_0] [i_0] = (min(((4294967283 ? (arr_25 [i_8] [i_0 + 1] [i_5] [i_1] [i_0 + 1]) : var_6)), (arr_25 [i_0 - 1] [6] [i_5] [i_7] [i_5])));
                        }
                        arr_31 [i_1] [i_5] [i_5] [i_5] [i_5] [i_5] = var_10;
                        var_22 = ((!((((arr_9 [i_1] [7] [i_1] [i_7]) / 1)))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_1] [i_9] = ((((min(var_1, (arr_25 [i_0 - 1] [i_9] [i_9] [i_9] [i_9])))) ? ((min((arr_25 [i_0 - 1] [13] [i_5] [i_5] [i_9]), (arr_25 [i_0 + 1] [i_0 + 1] [14] [1] [i_9])))) : (((arr_25 [i_0 + 1] [5] [i_1] [i_1] [0]) << (var_14 + 62)))));
                        var_23 = (arr_16 [i_9]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
