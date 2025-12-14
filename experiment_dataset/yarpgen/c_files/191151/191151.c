/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [7] = (((((arr_1 [i_0 + 4] [i_0 + 4]) || (arr_2 [i_0 - 3] [i_0 - 3]))) ? ((var_3 ? (arr_2 [i_0 - 3] [i_0 - 3]) : (arr_1 [i_0 - 2] [i_1]))) : (var_8 || var_4)));
                    arr_8 [i_0] [i_1] [3] = (min((~7), 1));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_13 = (~var_7);
                    var_14 = (((~(((arr_15 [i_5 - 1] [i_3] [i_3]) ? 18446744073709551615 : var_8)))));
                }
            }
        }
    }
    var_15 = -39;
    #pragma endscop
}
