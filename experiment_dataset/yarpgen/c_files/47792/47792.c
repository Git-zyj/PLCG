/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min(var_0, (max(-2568448230395954399, ((min(var_3, var_8)))))));
    var_17 = ((min(2568448230395954422, 11026)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 &= ((!(((((min(var_3, var_1))) ? (!var_10) : ((min(var_12, var_0))))))));
                var_19 = var_10;
                var_20 = (max(var_20, (((7 ? (((((min(var_3, (arr_4 [i_1])))) ? (arr_3 [i_0] [2]) : ((min((arr_1 [i_1]), var_14)))))) : (max((min(var_2, var_11)), var_4)))))));
                var_21 = (max(var_21, ((max(((min((var_5 > var_9), (arr_1 [i_0])))), (1 * 0))))));
            }
        }
    }
    var_22 &= (((min((min(9003475056823910203, var_8)), var_2)) > (min((~var_7), (min(var_10, var_14))))));
    #pragma endscop
}
