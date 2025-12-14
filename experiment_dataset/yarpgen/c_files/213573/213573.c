/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((((arr_6 [i_1] [i_1]) ? (min(0, var_10)) : var_12))) != (max((691280192 == var_7), (arr_3 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] = ((((~(arr_4 [i_2] [i_0]))) != (((((arr_3 [i_2]) < var_8))))));
                            arr_12 [i_0] [4] [12] [i_0] [i_0] &= (((max(3430392356, (((arr_9 [i_3] [1] [1] [i_0]) << (((arr_9 [i_0] [i_1] [4] [i_3]) - 389168484)))))) | (((-2145257997 ? (arr_2 [i_0]) : var_13)))));
                            var_15 -= ((!((55897 < (1052233544 & -641006797)))));
                        }
                    }
                }
                var_16 = ((0 ? ((-(max(var_3, var_5)))) : (((((min(3430392356, 6531574512184733493))) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]) : var_7)))));
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
