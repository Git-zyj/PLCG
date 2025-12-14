/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (((((~214) + 2147483647)) >> ((((180 >> (((arr_1 [i_0]) - 119)))) - 90))));
        var_15 = 178;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = 178;
        var_17 = 42;
        var_18 = (((((~((min((arr_3 [i_1] [7]), 1)))))) ? var_8 : (arr_0 [i_1] [i_1])));
        arr_5 [i_1] = ((((((~225) & var_0))) ? var_5 : (max(((max(7, 232))), (~10)))));
    }
    var_19 = (max((!205), var_0));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_20 = 20;
                arr_13 [i_2] [10] = 213;
                var_21 = ((+(((arr_12 [i_3] [i_2] [i_2]) ? 99 : (arr_8 [i_2])))));
                arr_14 [i_2] = ((50 ? (arr_12 [i_2] [i_3] [i_3]) : 7));
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
