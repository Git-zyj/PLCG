/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((54 || 1) ? (((~187) ? (45 ^ 42) : (124 >> var_0))) : var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = ((((max((arr_11 [i_0] [14] [4] [i_3 + 2] [i_4]), 16252928))) + (((min((arr_7 [i_1] [i_1] [i_2] [i_1]), (arr_7 [i_3] [i_3 + 1] [i_2 + 1] [i_2 + 1])))))));
                                var_20 ^= (max(var_8, ((9513812548677320286 ? (arr_1 [i_3 + 2]) : 404396023))));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_21 = (!4290772992);
                        arr_15 [14] [1] [i_2 + 1] [1] [i_2] [14] &= var_15;
                    }
                    arr_16 [i_0] [4] [i_2 + 1] [i_2 + 1] = (min(((-(arr_11 [i_0] [i_0] [i_2] [3] [i_2 + 1]))), (((arr_14 [i_0] [i_1] [i_2] [i_0]) ? 15 : (arr_11 [16] [16] [i_2] [16] [i_2 + 1])))));
                }
            }
        }
    }

    for (int i_6 = 3; i_6 < 20;i_6 += 1)
    {
        arr_21 [i_6] = ((((min(-12, 1))) * ((min((arr_5 [i_6]), 0)))));
        arr_22 [i_6] = ((((max(var_3, (arr_12 [i_6 + 1] [i_6] [i_6 - 3] [i_6 - 2] [i_6] [i_6 + 1])))) & ((~(arr_1 [i_6 - 2])))));
    }
    #pragma endscop
}
