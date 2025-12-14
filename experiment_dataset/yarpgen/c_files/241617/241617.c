/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((-98 ? ((95 ? 960461165 : var_3)) : -2145386496)) * (!var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_11;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] = (arr_1 [i_0]);
                    var_17 = (!var_4);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    var_18 = 112;
                    arr_14 [4] [i_0] = (((arr_7 [i_1 + 1]) | (arr_7 [i_1 - 1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_19 ^= var_9;
                var_20 -= -113;
            }
        }
    }
    #pragma endscop
}
