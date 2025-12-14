/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 -= (min((arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_2] [i_2] [i_2] [i_3] [i_4] [i_1] [i_0])));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_1] = ((((64 ? (37 % 126) : (arr_13 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1]))) > (((((var_14 ? var_13 : (arr_6 [i_0] [i_1 + 1] [i_1] [i_1 + 1])))) ? ((251 ? 0 : 64)) : 37214))));
                                var_21 += (min((arr_7 [i_4] [i_1] [i_1] [i_1]), ((((arr_7 [i_2] [i_2] [i_2] [i_4]) != (arr_7 [i_2] [i_2] [i_3] [i_4]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] |= (max((arr_3 [i_4] [i_3]), (arr_0 [i_0] [i_0])));
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((((!((var_6 || (arr_4 [i_0] [i_0] [i_0]))))) && ((((arr_10 [i_1] [i_1 + 3] [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 - 1]) ? (arr_10 [i_1] [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 + 1]) : (arr_10 [i_1] [i_1 + 3] [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1]))))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] = (191 > (arr_7 [i_1] [i_1] [i_1] [i_1 + 2]));
                    var_22 = ((~(((arr_4 [i_0] [i_0] [i_0]) ^ (((arr_9 [i_0] [i_1] [i_0]) ^ (arr_8 [i_1] [i_1] [i_1] [i_1])))))));
                }
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
