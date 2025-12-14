/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [0] |= (var_4 || (((~(arr_5 [0] [1] [0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 18;i_4 += 1)
                            {
                                arr_17 [i_0] [i_0] [10] [i_0] [i_0] [i_0] = (max(((176 ? 1 : (176 == 1))), ((max((arr_15 [i_0]), ((((arr_10 [i_4] [i_3] [i_0] [i_0] [i_1 + 1] [i_0]) || var_15))))))));
                                arr_18 [i_0] [1] [i_3] [i_3] = ((((!(arr_15 [i_0 + 2])))));
                                var_20 = ((0 ? 0 : ((8164 ? 718561752 : 87))));
                            }
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((((((((arr_15 [14]) | 65532))) ? ((var_10 ? 157 : (arr_13 [i_0] [i_0] [i_3]))) : (arr_0 [i_0]))) > (min(var_11, (min((arr_13 [i_0] [8] [i_3]), 103))))));
                            var_21 -= (min(((40349 ? (((1 ? (arr_7 [i_0] [i_0]) : var_8))) : (max(2440000857, var_5)))), ((((((4194240 ? 28117 : 44))) ? ((var_17 ? (arr_4 [i_2]) : var_18)) : (((arr_12 [i_2] [0] [i_2] [i_3]) >> (-29181 + 29189))))))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_22 = 2778017143;
                    var_23 = ((((((var_9 ? (arr_4 [i_0]) : var_18)))) ? 166 : (arr_20 [i_0] [i_1 - 1] [i_5])));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_24 = arr_25 [0] [0] [2];
                    var_25 = ((((82 | ((min((arr_15 [i_0]), var_7))))) - ((var_7 << (var_2 - 1359873856)))));
                }

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_26 -= (max(((((max(2778017132, -28118))) ? var_11 : ((1 ? 50822 : 29182)))), (arr_27 [i_0 - 1] [i_1 - 2])));
                    var_27 = (arr_25 [i_0] [i_0] [1]);
                    arr_28 [i_0 + 1] [i_1] [i_0] = ((-((var_15 ? ((max((arr_8 [i_0]), var_16))) : 1))));
                }
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((min(1, (-var_7 > var_17))))));
                                var_29 -= var_2;
                            }
                        }
                    }
                    var_30 = ((((((var_17 << (var_9 - 33652)))) ? (((min(var_17, var_4)))) : ((var_1 ? var_9 : var_2)))));
                }
            }
        }
    }
    var_31 = (((((min(var_12, var_16)) ? var_1 : (min(898421935, var_1))))));
    #pragma endscop
}
