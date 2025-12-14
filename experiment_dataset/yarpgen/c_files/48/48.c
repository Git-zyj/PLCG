/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] = (((((~(arr_1 [i_1]))))) ? ((2147483647 - (arr_0 [i_0]))) : (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 1]) : -116)));
                var_16 = (((arr_2 [i_0 + 1] [i_1]) ? ((((((arr_1 [i_0]) ? -3383790758845161968 : 116))) ? ((-109 ? (arr_1 [i_1]) : 2147483627)) : 1024325203)) : (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_17 = (((((6 / ((var_11 ? -2147483647 : var_14))))) ? var_8 : ((min(var_5, var_15)))));
    #pragma endscop
}
