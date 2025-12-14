/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_10 = ((((((((arr_6 [i_1]) ? -26094 : (arr_2 [i_1]))) + (arr_10 [i_0 - 2] [i_1] [i_1] [i_3])))) ? (((!(arr_9 [i_1] [i_3 + 2] [i_2 - 4] [i_1] [i_1])))) : (arr_1 [i_2])));
                                arr_13 [i_0 - 1] [i_1] = 126;
                            }
                        }
                    }
                    var_11 = (i_1 % 2 == 0) ? ((((((arr_6 [i_1]) + 2147483647)) << (((arr_3 [i_1] [i_1]) - 780323437854464578))))) : ((((((((arr_6 [i_1]) - 2147483647)) + 2147483647)) << (((((arr_3 [i_1] [i_1]) - 780323437854464578)) - 15554433972670508742)))));
                }
            }
        }
    }
    var_12 = var_8;
    #pragma endscop
}
