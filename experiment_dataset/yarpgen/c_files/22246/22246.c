/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_0] [i_0] [0] [i_0] = (max(((((arr_5 [i_2] [i_3] [i_4]) ? (arr_7 [6] [i_1] [i_2] [i_3]) : (arr_0 [i_4])))), (~14470)));
                                var_20 += 124922929;
                                var_21 = (((min(124922937, (32754 == 2084672218038125791)))) ? (((arr_7 [i_2 + 1] [i_2] [i_2 - 2] [i_2]) << (((arr_10 [i_1 + 1]) + 7848893807815377236)))) : 110);
                                var_22 = (((~(arr_7 [i_0] [i_0] [1] [i_0]))));
                                var_23 = max((arr_4 [i_1 + 2] [i_2 - 2] [i_2 + 3]), (((arr_4 [i_1 + 1] [i_2 - 1] [i_2 + 3]) ^ (arr_2 [i_1 - 1] [i_2 + 4]))));
                            }
                        }
                    }
                    arr_14 [i_2] [20] = ((((((arr_7 [i_0] [8] [7] [8]) >= 2206724441))) >> (((((((arr_10 [i_0]) ? (arr_3 [i_1] [i_2]) : (arr_3 [i_0] [i_0]))) - (((((arr_4 [i_0] [i_1] [i_0]) < (arr_7 [i_0] [i_0] [i_1] [i_0]))))))) + 4513699366331613353))));
                    var_24 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    var_25 = (((((arr_5 [i_1] [i_1] [2]) >= ((~(arr_1 [i_0] [i_1 + 1]))))) ? (arr_12 [i_2]) : 2468720736));
                    var_26 += (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2 + 3] [20]);
                }
            }
        }
    }
    var_27 = var_13;
    var_28 = -28;
    #pragma endscop
}
