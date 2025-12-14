/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, ((min(-213235137240204320, 136)))));
    var_18 |= var_15;
    var_19 = var_1;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((min((arr_2 [i_0] [i_0] [i_0]), (arr_6 [i_0 + 3] [4] [i_0 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_1] [12] [12] [i_2] [i_1] [i_2] = (arr_10 [i_2] [i_3] [i_2] [i_1] [i_2] [i_2]);
                                arr_12 [i_2] [i_1] [i_1] [i_1] [2] [6] = (((arr_9 [i_4] [i_2] [i_0] [i_2] [i_2] [i_0]) || 0));
                                arr_13 [i_4] [i_2] [i_2] [1] = (arr_7 [i_2] [3] [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [8] [i_0] [i_2] [11] [i_0] = (arr_7 [i_2] [i_1] [i_1]);
                                arr_19 [i_2] [i_6] [i_5] [i_1] [i_1] [i_2] = (max((arr_7 [i_2] [i_2] [i_6]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])));
                                var_21 ^= (min((1455379564 != -1455379578), (max((arr_1 [i_0]), ((max((arr_8 [0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 3]))))))));
                                var_22 += (arr_4 [4]);
                            }
                        }
                    }
                    var_23 = (((arr_9 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0]) & (arr_14 [i_2] [i_2] [i_1] [i_0] [i_0 + 3])));
                }
            }
        }
        var_24 += (arr_5 [0] [12] [i_0] [0]);
        var_25 = ((((max((26228403 <= 190), (((arr_8 [10]) <= (arr_14 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_0])))))) == (arr_4 [0])));
    }
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        arr_22 [i_7] = (min((min((min((arr_21 [i_7]), (arr_20 [i_7] [i_7]))), (arr_21 [i_7]))), (min((arr_20 [i_7] [i_7]), (arr_21 [i_7])))));
        var_26 += (arr_21 [0]);
        var_27 = (min((arr_21 [i_7]), (arr_21 [i_7])));
        var_28 = (min((arr_20 [i_7] [i_7 - 3]), ((((((arr_21 [i_7]) != (arr_20 [i_7] [i_7])))) < (arr_20 [i_7] [7])))));
    }
    var_29 = (max((min(var_7, (-1455379581 / 135))), (((var_7 > (((1 << (var_10 + 32690)))))))));
    #pragma endscop
}
