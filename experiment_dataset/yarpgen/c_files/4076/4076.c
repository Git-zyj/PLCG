/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] = (!(((0 ? 1 : 35))));
        var_15 = max(((-(~-1))), ((0 ? var_8 : -6)));
    }
    var_16 = var_7;
    var_17 = (max(1, (((max(-1, 2037)) >> ((((23 ? 4194300 : 4194300)) - 4194237))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                arr_10 [10] [1] = (((1 + 1737684794) ? (1 < 1) : (((var_2 / -4835627140686887439) ? -7761974330045261858 : (arr_5 [i_2])))));
                arr_11 [i_2] = ((min((arr_8 [i_2]), (arr_1 [i_1]))) >> (((((arr_4 [i_1]) ? 2011 : var_6)) - 1983)));
            }
        }
    }
    #pragma endscop
}
