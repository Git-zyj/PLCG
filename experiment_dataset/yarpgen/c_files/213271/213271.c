/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_12 -= (arr_3 [i_1 + 2] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [0] [i_2] [i_4] [0] [2] [i_3] = (((arr_5 [i_0]) == ((((~(arr_2 [i_1] [i_1] [i_2])))))));
                                arr_12 [i_4] [i_1] [i_2] = (((arr_2 [i_1] [i_1] [i_2]) * (((-(((arr_1 [i_2]) | (arr_10 [3] [i_1] [i_1] [5] [i_4]))))))));
                                var_13 = ((min((arr_5 [i_1 + 2]), (arr_5 [i_1 + 1]))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_14 = (max(var_14, ((((((arr_15 [i_1] [0] [1] [i_1 - 1]) / (arr_15 [i_0] [6] [i_5] [i_1 + 1]))) * (((arr_15 [i_0] [i_1] [0] [i_1 - 1]) * (arr_15 [i_1] [i_1] [i_1] [i_1 + 3]))))))));
                    arr_16 [i_5] [9] [i_0] = max((max((52 != 8894), (arr_6 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0]))), (arr_3 [i_0] [4]));
                    var_15 = (max(var_15, (arr_1 [5])));
                    arr_17 [i_0] [i_1 + 1] = (((arr_1 [i_1 + 3]) - (arr_3 [i_1 + 3] [i_0])));
                }
                var_16 = (arr_13 [i_0] [i_0] [i_1 - 1]);
                var_17 ^= (arr_10 [i_0] [i_1] [1] [i_1 + 3] [i_1]);
            }
        }
    }
    var_18 = (var_7 >> var_2);
    #pragma endscop
}
