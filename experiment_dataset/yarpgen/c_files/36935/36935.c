/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((-5495967084552318261 ? var_0 : (57469 ^ 1804576963165287045))), ((((1804576963165287045 <= 18302628885633695744) ? (max(4037226422, 16100)) : var_8)))));
    var_17 = (((~-887180580) != (~var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (((arr_0 [i_1]) == (((arr_4 [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : ((127 ? 3138300304583158669 : (arr_2 [i_0] [i_1])))))));
                var_19 = ((((16642167110544264570 ? 1 : 1379487533)) + -1));
            }
        }
    }
    var_20 = (max(var_20, var_4));
    #pragma endscop
}
