/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (arr_8 [i_0] [i_1] [i_1] [i_0]);
                    var_20 = (arr_1 [10] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_21 = (((((((arr_14 [i_3]) ? (arr_10 [i_3]) : (arr_13 [i_3] [i_4] [i_7]))))) ? (arr_17 [i_3] [i_3] [i_3] [i_3]) : ((((arr_13 [i_3 - 1] [i_4 + 1] [i_7]) | (arr_11 [i_3]))))));
                                var_22 = ((arr_18 [i_3] [i_3] [i_3] [i_7 + 2]) * (arr_10 [i_3]));
                                var_23 = (arr_21 [i_7] [i_7] [i_7] [i_7] [i_7 + 3] [i_7] [i_7 + 2]);
                                var_24 = arr_22 [i_3] [i_4 + 1] [i_4 + 1] [i_3] [i_7 + 3] [i_7];
                            }
                        }
                    }
                }
                var_25 = ((0 ? 2904827284819068836 : -72));
            }
        }
    }
    #pragma endscop
}
