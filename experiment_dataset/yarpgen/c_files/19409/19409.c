/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((~(~var_12)))) ? (((~((max(-4096, 7)))))) : (((((11381 ^ (arr_1 [i_0])))) ? ((25 ? 3 : 807800374827422750)) : var_6)))))));
                arr_4 [13] [i_1] = (-32767 - 1);
                var_16 = ((~((var_7 ? (arr_3 [i_0 + 3] [i_0 + 3]) : (arr_3 [i_0 + 3] [i_0 + 2])))));
                arr_5 [i_0 + 4] = min(((((1 ? var_11 : (arr_0 [i_0]))) <= ((((arr_2 [i_0] [i_0] [i_1]) ? var_0 : var_5))))), ((!(arr_3 [i_0 - 1] [i_0 - 2]))));
            }
        }
    }
    var_17 = 1;
    var_18 += (((min(((var_1 ? var_12 : var_6)), ((min(var_5, 11381))))) - (((((var_5 ? var_14 : var_1)))))));
    var_19 = (max(var_19, (((!(~var_8))))));
    var_20 = ((max(var_4, (var_12 & var_9))));
    #pragma endscop
}
