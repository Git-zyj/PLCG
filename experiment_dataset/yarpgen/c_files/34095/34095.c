/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = min(var_15, (!var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max(((((!(arr_3 [16] [i_1] [i_1]))) ? (min(0, 1)) : (!var_6))), (min((((arr_3 [i_0] [i_0] [i_1]) | (arr_1 [i_1]))), ((max((arr_5 [i_0 - 1] [i_1]), 1)))))));
                arr_7 [i_1] [i_0] [i_0 - 1] = (((-6919627833713427602 >= (arr_5 [i_0] [i_1]))));
                var_20 = 8190;
            }
        }
    }
    #pragma endscop
}
