/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (((((25863 ? (arr_7 [6] [6] [i_1]) : var_0))) ? 58 : var_6));
                    arr_9 [0] [i_1] [0] |= ((var_8 + ((-(arr_4 [i_0 + 2] [i_1] [i_0 + 2])))));
                    var_16 = (arr_8 [i_0 - 1] [i_0 + 1]);
                    arr_10 [i_0] [i_1] = ((((25836 ? (-127 - 1) : 2856366740708261226)) / (max((arr_4 [i_0 + 1] [i_0 - 1] [i_0]), 5297071136190680697))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_17 -= ((var_14 ? var_2 : var_10));

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_18 = (((arr_14 [i_4 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_14 [i_4 + 2] [i_3 + 1] [i_3 - 1]) : (arr_14 [i_4 - 1] [i_3 + 2] [i_3 - 1])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_19 -= -10;
                            arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_19 [i_3 - 1] [i_3 - 1] [i_4 - 1]) + (arr_19 [i_3 + 1] [i_4] [i_4 + 2])));
                        }
                    }
                }
            }
            arr_27 [i_3] [i_3] [i_4] = 89;
            arr_28 [i_3] [1] = (arr_15 [i_3] [i_3]);
        }
    }
    #pragma endscop
}
