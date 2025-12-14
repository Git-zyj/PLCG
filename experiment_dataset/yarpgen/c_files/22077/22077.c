/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (min((((arr_0 [i_0]) ? var_4 : (arr_1 [i_0]))), 30));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [2] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [4] [i_3] [i_3] [4] [21] = ((max((arr_3 [i_4 - 1] [i_2 + 1] [15]), 12800179754389095919)) >> ((((1 ? 4027135557 : (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) - 4027135518)));
                                var_18 = ((var_8 + (((!((((arr_4 [i_1] [i_1]) - -31))))))));
                                var_19 = ((((((arr_10 [i_2] [17] [17] [17]) - (arr_6 [i_0] [i_0] [i_3] [5])))) ? (arr_0 [i_0]) : (!1)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4 - 1] |= var_8;
                            }
                        }
                    }
                    arr_16 [1] [i_1] = (((((!(arr_5 [19] [i_0])))) | (arr_11 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_20 = (max(var_20, (~var_3)));
    #pragma endscop
}
