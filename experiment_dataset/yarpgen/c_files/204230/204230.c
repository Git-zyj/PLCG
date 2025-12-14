/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 &= ((((max((arr_3 [10] [2]), (arr_3 [6] [i_0])))) ? (((~(((arr_3 [6] [6]) ? var_7 : 7))))) : (((!13586262269546232358) * ((7 ? (arr_5 [i_0]) : (arr_1 [i_1] [18])))))));
                var_22 = (max(var_22, (var_15 / 208)));
            }
        }
    }
    var_23 = (((((var_14 + 9223372036854775807) >> (((~var_7) + 204)))) / ((((!var_5) ? (77 && var_13) : ((127 ? 14 : 822400083)))))));
    #pragma endscop
}
