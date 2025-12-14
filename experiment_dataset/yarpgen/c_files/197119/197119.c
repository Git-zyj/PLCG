/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min((max((min(var_11, (arr_2 [i_1] [i_1] [10]))), ((max(51674, var_6))))), ((max(var_7, 65160)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 = ((-(((((arr_2 [i_2] [i_1] [i_0]) ? 61440 : (arr_5 [i_0] [i_1] [i_0] [8]))) << (-var_1 - 12804)))));
                            arr_8 [i_0] [i_1] [1] [i_3] [i_1] = arr_2 [i_3] [12] [i_1 + 3];

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_11 [i_0] [i_4] [i_1 - 1] [1] [i_1] = (arr_2 [i_0] [i_2 - 1] [i_3]);
                                arr_12 [i_0] [i_1] [i_0] [23] [i_0] = 1288476090263349818;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] &= 61415;
                                arr_14 [i_0] [i_0] [21] [i_3] = ((var_12 * (arr_0 [i_3] [i_1 - 1])));
                            }
                            for (int i_5 = 1; i_5 < 21;i_5 += 1)
                            {
                                arr_18 [0] [i_5] = ((+((max((arr_5 [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_2]), 12560)))));
                                arr_19 [i_5] [i_3] [i_0] [i_5] = var_4;
                            }
                            for (int i_6 = 2; i_6 < 24;i_6 += 1)
                            {
                                var_16 = (min((((arr_21 [i_6 + 1] [24] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]) ? (arr_21 [i_6 - 1] [i_6] [i_6] [i_6] [i_6 + 1] [3] [i_6]) : 12560)), (((arr_21 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6 - 2]) * (arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 1] [i_6] [i_6 - 2])))));
                                var_17 = (((arr_2 [i_1 + 3] [i_1] [i_3]) ? (((max(var_2, 19432)))) : (1288476090263349818 - 52975)));
                                arr_22 [i_6] [i_3] [i_2] [i_1] [i_1 + 3] [i_1 + 1] [i_0] = (min(((((((arr_9 [i_0] [i_1] [i_1] [i_3] [i_1]) >= 2093932494))) & (var_1 * var_10))), 52990));
                            }
                            var_18 = (min(var_18, 255));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(42, 61415));
    var_20 = (min(var_20, 1926497934));
    var_21 = var_10;
    #pragma endscop
}
