/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_1, var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((arr_2 [i_0]) << ((((-(arr_1 [3]))) * ((((arr_3 [10] [i_0]) >= (arr_1 [i_1])))))))))));
                var_19 = (max((arr_4 [i_0]), ((((arr_0 [i_0]) ? (arr_4 [i_0]) : (arr_2 [i_0]))))));
                var_20 ^= (max(((max((arr_4 [i_0]), (arr_1 [i_1])))), (((((arr_2 [i_0]) ^ (arr_2 [i_1]))) << ((-16425 ? (arr_3 [10] [i_1]) : var_16))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((arr_1 [5]) - (((max(-12, 1)) - (arr_6 [i_0] [11] [i_3] [i_4]))))))));
                                var_22 = ((!((max(((min((arr_9 [i_0] [i_1] [7] [i_3] [i_0] [i_4]), (arr_2 [i_2])))), (arr_11 [i_3] [i_0] [2] [i_3] [i_3] [i_3]))))));
                                var_23 = (max(((min((arr_10 [i_0] [i_1] [i_1] [i_1]), (((arr_8 [i_0] [2] [i_2] [i_3] [4]) << (((arr_1 [5]) - 209))))))), (((((((arr_2 [i_0]) <= (arr_2 [i_3]))))) + (arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(((min((var_0 ^ var_4), (var_9 ^ 3795005611)))), (((var_3 * var_3) ^ (((max(34408, var_14))))))));
    var_25 = var_14;
    #pragma endscop
}
