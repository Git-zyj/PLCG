/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_4;
                arr_7 [i_0] [i_0] = ((((((var_11 ? (arr_4 [i_0] [i_0] [i_1]) : var_11)) + 2147483647)) << 0));
                arr_8 [i_0] [i_0] [i_0] = (((((0 ? var_3 : (arr_2 [i_0]))) - (arr_3 [i_1]))));
                arr_9 [i_0] [i_0] = var_12;
                arr_10 [i_0] = var_6;
            }
        }
    }
    var_14 = (min(var_14, ((min(var_5, var_4)))));
    #pragma endscop
}
