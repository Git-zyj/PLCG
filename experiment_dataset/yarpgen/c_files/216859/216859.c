/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_10, (max(var_12, ((15 ? var_9 : var_7))))));
                            arr_11 [i_0] [i_1 - 2] [i_2] = (i_2 % 2 == 0) ? (((((((((arr_7 [i_2] [i_1] [i_1]) + 2147483647)) << (((((arr_1 [i_0]) ? (arr_0 [8]) : var_3)) - 4969))))) ? ((max(42619, (((arr_0 [i_1 - 1]) << (((arr_5 [i_0] [i_1]) - 123))))))) : (min(((((arr_10 [0] [i_1] [i_1] [i_1 - 2]) ? 42619 : 101))), (arr_6 [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 - 1])))))) : (((((((((((arr_7 [i_2] [i_1] [i_1]) - 2147483647)) + 2147483647)) << (((((arr_1 [i_0]) ? (arr_0 [8]) : var_3)) - 4969))))) ? ((max(42619, (((arr_0 [i_1 - 1]) << (((arr_5 [i_0] [i_1]) - 123))))))) : (min(((((arr_10 [0] [i_1] [i_1] [i_1 - 2]) ? 42619 : 101))), (arr_6 [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 - 1]))))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_0] = -47;
                var_15 *= (((max(-494003167, 9167196791244872804)) & ((min((arr_8 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 1]), ((~(arr_7 [0] [i_0] [0]))))))));
                arr_13 [i_0] = (((5126 & -494003167) ? ((7154708799984882436 ? ((~(arr_4 [0] [i_1 + 1] [0]))) : (arr_5 [i_0 - 1] [i_0 - 1]))) : ((((arr_8 [i_0] [i_1] [i_1] [i_0]) ? (arr_5 [i_0 - 1] [i_0]) : var_4)))));
            }
        }
    }
    #pragma endscop
}
