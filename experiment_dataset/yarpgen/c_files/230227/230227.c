/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((min(var_16, var_10)), var_8))) ? var_4 : (max(var_12, (var_8 != var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] |= ((~(((arr_6 [i_0] [i_1] [i_2] [13]) ^ (((arr_3 [i_0] [i_1] [i_2]) ? (arr_4 [i_1] [6] [i_4]) : (arr_11 [i_0] [7] [i_0] [i_3] [i_0])))))));
                                arr_15 [1] [i_4] [9] [i_2] [i_1] [i_0] = max((arr_11 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]), ((~(arr_11 [i_0] [i_1] [i_4 - 1] [i_3] [i_4]))));
                                arr_16 [i_0] [i_1] [i_4] = (arr_3 [i_3] [i_1] [i_2]);
                            }
                        }
                    }
                    var_20 = (max(var_20, (((((max((((arr_8 [i_0] [i_0] [i_1] [i_2]) ? (arr_13 [5] [i_0] [i_0] [11] [11] [11] [i_2]) : (arr_2 [i_0]))), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2] [i_2])))) ? (arr_11 [1] [i_2] [i_2] [i_1] [1]) : (min(1605989725, (arr_4 [i_0] [1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
