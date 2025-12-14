/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((-19088 ? ((~((var_0 ? -18616 : var_1)))) : var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (!var_18);
                arr_4 [i_0] [i_0] &= var_5;
                arr_5 [i_0] [i_0] = ((((arr_1 [i_0]) ? (((140737471578112 ? var_0 : (arr_1 [i_1])))) : (arr_3 [i_0] [i_0]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 ^= ((-(min(((-2 ? (arr_6 [i_2]) : var_1)), (((arr_7 [i_2]) ? (arr_6 [i_2]) : (arr_7 [i_2])))))));
        var_22 = ((+(max((arr_7 [i_2]), (arr_6 [i_2])))));
        var_23 = ((-(((arr_7 [i_2]) ? 1 : (arr_6 [i_2])))));
        var_24 = var_8;
    }
    #pragma endscop
}
