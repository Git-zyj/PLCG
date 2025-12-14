/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? var_0 : var_9));
    var_13 = ((((min(var_6, var_11))) == var_11));
    var_14 = (((((((min(1, var_0))) ? 60761276 : var_11))) || (((var_4 ? var_8 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((-(((((var_9 ? 1 : (arr_1 [i_0] [i_0])))) ? (var_11 || var_5) : 7492)))))));
                var_16 ^= (max(((((min(56, (arr_2 [i_0] [i_0])))) ? 858931550 : (((max(var_1, var_1)))))), -79));
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
