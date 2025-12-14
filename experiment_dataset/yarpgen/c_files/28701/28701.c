/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_11);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (max((((arr_4 [i_0] [i_0] [i_2]) / ((1 ? var_15 : 27283)))), ((((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_3 [22]) : (arr_1 [i_0])))) ? 0 : var_16))));
                    var_22 = (((((arr_2 [i_0 + 1] [i_1] [i_0]) + var_1)) * (0 % 32750)));
                }
            }
        }
    }
    var_23 = (min(var_12, var_8));
    #pragma endscop
}
