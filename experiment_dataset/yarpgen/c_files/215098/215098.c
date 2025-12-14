/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (min(((((1 ? (arr_5 [i_0] [i_4]) : 52782)))), (((arr_9 [i_0] [i_1] [8] [i_4] [i_4]) >> (((max(var_15, var_2)) - 16230561903641938903))))));
                                arr_12 [i_3] = ((-(((arr_5 [i_1 + 1] [i_1]) ? (arr_5 [i_1 + 1] [i_1]) : 126))));
                                var_19 = (max(127, 23009));
                                arr_13 [i_4] [1] [i_2] [i_1] [i_0] = (!((max((arr_11 [i_1 + 1]), (arr_1 [i_1] [i_1 + 3])))));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, -29));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_21 = 1;
                arr_18 [i_5] = (max((((0 <= 18446744073709551615) * ((16383 ? 0 : -105)))), (~var_6)));
                var_22 = arr_17 [i_5] [i_6];
                var_23 = (arr_17 [7] [i_5]);
            }
        }
    }
    var_24 = (min(var_24, var_6));
    #pragma endscop
}
