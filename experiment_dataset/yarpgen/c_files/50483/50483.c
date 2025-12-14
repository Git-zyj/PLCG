/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 -= ((((((!4079771430) >> ((((6480590817331022824 ? (arr_5 [i_0] [i_0] [i_1]) : 2899597795)) - 4294967223))))) ? var_8 : (arr_0 [i_1])));
                arr_6 [i_0] = (arr_2 [i_0] [i_1]);
                var_16 = ((+(((arr_1 [i_0 - 2]) ? var_4 : (arr_1 [i_0 + 1])))));
            }
        }
    }
    var_17 = var_8;
    var_18 = ((((max(var_11, 11966153256378528791))) ? 6480590817331022824 : var_7));
    #pragma endscop
}
