/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (0 && 57387);
    var_12 = ((1 >= (var_9 ^ var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 ^= ((~((-(((((arr_4 [i_0] [12] [17] [i_0]) + 2147483647)) >> (((arr_4 [i_0] [i_0] [i_1] [i_0]) + 93))))))));
                    var_14 = (arr_5 [i_1] [i_1] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = ((!(arr_6 [i_0] [i_3 - 3] [i_2] [i_4 - 1])));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = var_2;
                                var_15 += (((((~(arr_13 [i_2] [i_3 + 4] [i_4 + 4] [i_4])))) ? (((arr_13 [16] [i_3 + 2] [i_4 - 3] [i_4]) ? (arr_13 [i_2] [i_3 - 4] [i_4 - 1] [i_4 - 2]) : (arr_13 [i_0] [i_3 - 3] [i_4 - 1] [i_4]))) : ((min((arr_13 [i_3 - 2] [i_3 - 4] [i_4 + 1] [i_3 - 4]), (arr_13 [i_0] [i_3 - 2] [i_4 + 2] [i_4 + 1]))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] = (((((arr_6 [i_0] [i_0] [i_0] [i_0]) || (arr_6 [i_0] [i_2] [i_0] [i_0]))) ? (((((32752 ? (arr_5 [1] [i_1] [i_1] [i_2]) : (arr_10 [i_0] [i_1] [i_2] [i_2] [i_2])))) ? ((((!(arr_13 [i_1] [i_1] [6] [i_1]))))) : (arr_3 [0]))) : (57387 || 57389)));
                    var_16 = (min(var_16, (arr_0 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
