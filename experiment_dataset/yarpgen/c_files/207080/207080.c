/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((12020 == (min(-2440338861763093917, 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_18 = max((max(((((arr_7 [i_0] [i_0] [i_0] [i_0]) ^ (arr_3 [10] [i_1])))), (min(2440338861763093916, (arr_4 [i_0] [i_1] [i_1]))))), ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_2]) : (arr_2 [i_0]))) <= (((arr_3 [0] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0])))))));
                    var_19 = min((arr_2 [i_0]), (((((((arr_0 [i_0] [i_0]) == 2440338861763093916))) == (((arr_6 [i_0]) ? (arr_5 [i_1] [i_1] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    arr_8 [i_0] [1] &= (arr_7 [i_0] [1] [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = (min(((max((((arr_10 [i_3] [i_3]) ? (arr_10 [i_0] [1]) : (arr_2 [i_0]))), (((arr_6 [i_3]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_6 [i_0])))))), ((((((arr_10 [i_0] [i_0]) + (arr_7 [i_0] [i_0] [i_0] [i_0])))) + (arr_11 [0] [7])))));
                    var_21 |= max((((((arr_10 [i_0] [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_10 [13] [i_1]))) << (((arr_11 [i_0] [i_0]) - 5508195052864648025)))), ((((((arr_1 [i_0]) ? (arr_4 [1] [8] [i_3]) : (arr_0 [i_1] [i_1])))) & (max((arr_1 [i_0]), (arr_7 [i_3] [i_3] [i_3] [i_3]))))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_22 = (((arr_1 [i_0]) || (arr_12 [i_0] [i_0] [i_0] [i_0])));
                    var_23 = (arr_13 [i_1] [i_1] [i_1]);
                }
                var_24 = (min(((((arr_1 [i_0]) ? 128 : 128))), ((((-1 ? 54 : (arr_1 [i_0]))) - (((min(1, 1))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_25 = arr_4 [i_0] [i_1] [i_1];
                            var_26 = (((min((arr_15 [i_0] [i_1]), ((min((arr_4 [i_0] [i_5] [3]), (arr_13 [14] [i_1] [4])))))) >= (arr_6 [1])));
                            arr_18 [6] [i_1] [i_1] [i_0] [i_1] [i_1] = (((((((max(-1588911581, 0))) ? (arr_13 [i_0] [6] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (min(((max((arr_9 [i_0]), (arr_10 [i_0] [i_0])))), (max((arr_12 [12] [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_0] [i_0] [i_0]))))) : ((12 ? (min((arr_17 [i_0] [i_0] [i_0] [4]), -2)) : (((0 ? 0 : -6852292616821457362)))))));
                            arr_19 [i_6] [i_5] |= (max(37, 0));
                        }
                    }
                }
            }
        }
    }
    var_27 = ((1 ? 11472 : 8835858461229435025));
    #pragma endscop
}
