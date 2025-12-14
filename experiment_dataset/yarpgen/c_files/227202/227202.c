/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((((((((var_2 ? (arr_1 [i_0]) : (arr_2 [i_0] [6] [i_1])))) ? var_17 : var_7))) > var_6));
                var_20 = (max(var_20, ((((((((((var_0 ? var_11 : var_11)) + 2147483647)) << (((((arr_2 [i_0] [i_0] [i_0]) + 3393)) - 6))))) ? ((((max(-26855, var_9))) ? (min((arr_3 [i_0] [i_0] [i_0]), var_12)) : (max((arr_2 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0]))))) : (max(var_13, (arr_4 [i_0] [i_1]))))))));
                var_21 = (max(var_21, ((min(var_12, var_6)))));
            }
        }
    }
    var_22 = var_17;
    var_23 = ((((((var_10 ? var_18 : var_14)))) ? ((((((var_9 ? var_3 : 3020067491))) ? (~-121) : ((var_16 ? var_2 : var_17))))) : var_6));
    #pragma endscop
}
