/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_10 = (min(0, ((((0 ? 0 : 39175))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_11 = (~((~(min((arr_5 [i_0] [8]), (arr_5 [i_0] [i_0]))))));
                            var_12 = (min(28, 0));
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_1] = ((((-(arr_0 [i_1 - 2] [i_3 + 1]))) > (((((((arr_1 [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_3])))) ? (((!(arr_6 [i_0] [4] [i_2] [i_3])))) : ((((arr_0 [i_1] [i_4]) || (arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_4])))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] = ((arr_10 [7] [i_1 - 2] [i_1 - 2]) ? (max((((arr_4 [i_0] [i_1] [i_2]) * (arr_1 [i_1] [i_3]))), (arr_0 [i_1 - 2] [i_1]))) : (arr_7 [i_4]));
                        }
                    }
                    var_13 = (max((min((arr_2 [i_0]), (arr_0 [i_0] [i_0]))), ((min((arr_10 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_0] [i_1 + 1] [i_2]))))));
                    var_14 = (max(var_14, ((0 ? (arr_9 [i_0] [i_2] [10] [i_1] [i_2]) : 4294967295))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {

                            for (int i_9 = 3; i_9 < 20;i_9 += 1)
                            {
                                arr_28 [i_5] [i_5] [i_5] [i_9 + 1] = (min((max((min((arr_18 [i_5] [i_5] [i_5] [i_5]), (arr_23 [i_5 + 1] [5] [i_7 - 1]))), ((~(arr_15 [i_5 - 2]))))), (4294967295 - 4294967295)));
                                var_15 ^= (((arr_27 [i_5]) / (((max(1, -30771))))));
                                arr_29 [i_5 - 2] [i_6] [i_7] [i_5] [i_5] = ((((-(arr_21 [i_5] [i_6]))) <= ((((~(arr_19 [i_5]))) - (arr_26 [i_5] [i_6] [i_5 - 3] [i_9 - 1])))));
                            }
                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 18;i_10 += 1)
                            {
                                var_16 = (max(var_16, ((((((arr_14 [i_8] [i_10]) ? (arr_23 [i_5] [i_6] [i_7]) : (arr_21 [i_6] [i_6]))) * (((arr_22 [19] [i_6] [i_7]) ? (arr_19 [i_10]) : (arr_26 [i_8] [i_6] [i_6] [i_6]))))))));
                                var_17 = ((~(arr_20 [i_5 - 2] [i_5 - 2] [i_5 - 1])));
                                arr_32 [i_5] [i_6] [i_5] [i_7] [i_8] [i_5] = (((((!(arr_22 [i_5] [i_5] [i_5])))) > (arr_27 [0])));
                            }
                            arr_33 [i_5] = (((arr_21 [i_5] [i_7]) << ((((min((arr_15 [i_5]), (arr_21 [i_5] [i_6])))) ? (((min((arr_30 [i_5] [i_6] [7] [i_5] [i_7 + 1] [i_7] [i_8]), (arr_30 [i_5] [i_6] [i_6] [i_6] [i_7 - 1] [i_8] [i_6]))))) : (max((arr_23 [i_5 - 3] [i_5 - 3] [i_7]), (arr_27 [i_5])))))));
                        }
                    }
                }
                var_18 = (min(((((min((arr_27 [i_5]), (arr_23 [i_5] [i_5] [i_5]))) == ((((arr_26 [i_5] [8] [i_6] [i_6]) | (arr_20 [i_5] [i_6] [i_5 - 3]))))))), (min((arr_17 [i_5] [i_6]), (min((arr_22 [i_5] [i_5 + 1] [i_5 - 3]), (arr_30 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5] [i_5 - 2])))))));
            }
        }
    }
    #pragma endscop
}
