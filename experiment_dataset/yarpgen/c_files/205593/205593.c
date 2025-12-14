/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_6));
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 += ((124 ? 228 : (arr_3 [i_0] [i_1] [i_0])));
                var_19 = ((((((((21 ? (arr_1 [i_0]) : -994877879306339984))) ? ((((arr_3 [i_0] [i_1] [i_1]) ? (arr_1 [i_0]) : 124))) : (max((arr_0 [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_1])))))) ? (((~(arr_1 [i_1])))) : (max((arr_0 [i_0] [i_0]), -253))));
            }
        }
    }
    var_20 = (((((max(var_2, var_7))) ? (((var_7 ? var_8 : var_1))) : (min(0, 1)))));
    var_21 = 55;
    #pragma endscop
}
