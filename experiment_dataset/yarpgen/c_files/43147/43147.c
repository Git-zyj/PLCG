/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= min(((var_5 ? var_2 : (var_5 > var_0))), var_13);
    var_18 = (min(var_18, ((((min(var_0, var_11)) % ((-53879 + (max(var_0, var_12)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (arr_12 [4] [4] [4] [4] [i_3 - 2] [i_4]);
                                arr_14 [0] [i_0] [i_0] [i_2] [i_0] [i_4 - 3] |= ((1 ? 16777088 : (((((min(11656, (arr_0 [i_0])))) ? var_1 : (arr_5 [i_0] [i_2 - 1]))))));
                                arr_15 [i_2] = ((((min((arr_4 [i_3 - 4]), (arr_0 [i_2])))) ? (min(4092, (arr_2 [i_3] [i_4 + 1]))) : ((((arr_5 [i_3 + 2] [i_4 - 1]) >> (((arr_4 [i_2 - 1]) - 8950436836920412607)))))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = (((19815 / (arr_1 [i_0] [i_0]))) < (((~(arr_2 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_20 = (arr_24 [i_5] [i_5] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_34 [2] [1] [i_6] [i_5] [i_8] [i_9] [i_9] = ((((~(arr_23 [i_5] [i_5] [i_5 - 3]))) | (((arr_23 [i_5] [i_5] [i_5 + 2]) | (arr_23 [i_5 - 1] [i_5] [i_5 + 2])))));
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_31 [i_6] [8] [i_7] [i_6]);
                                var_21 = (((arr_17 [i_5 + 1]) || 53898));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
