/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-1197410157 ? var_13 : var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_4 [i_1])));
                var_20 = ((((3134874674 - (arr_1 [i_1]))) - ((((arr_5 [i_0]) << (((var_7 + 39) - 9)))))));
                var_21 -= ((((7919 ? ((max(var_14, (arr_0 [i_0])))) : (min((arr_0 [i_1]), var_2)))) - ((min(-var_17, (arr_1 [i_1]))))));
                var_22 ^= (((((((min(1160092621, var_10))) || (((var_6 ? 1641924690 : var_15)))))) ^ ((var_12 / ((var_11 ? (arr_4 [i_1]) : (arr_3 [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
