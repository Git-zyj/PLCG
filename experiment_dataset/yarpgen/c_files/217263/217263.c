/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((((((var_17 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? (((-80 ? var_5 : (arr_0 [i_0] [i_0])))) : (arr_1 [i_0]))) - 1));
        arr_3 [i_0] = (max(-1, -14));
    }
    var_19 = var_17;
    var_20 = 17303850298409744753;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_21 = ((((!((max(var_15, var_4))))) ? (((arr_7 [i_1]) ? 46 : var_13)) : var_17));
                var_22 = arr_7 [i_1];
                var_23 *= var_18;
                arr_11 [i_2] [i_2] = (arr_6 [i_2] [i_1]);
            }
        }
    }
    #pragma endscop
}
