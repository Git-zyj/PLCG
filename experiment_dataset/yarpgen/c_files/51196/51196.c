/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(31749, 13835137598390099107) / var_1))));
    var_21 = (~((-1374154310 ? -31424 : 6218807666671336282)));
    var_22 = (((((((min(var_5, var_13))) ? var_6 : (var_12 || var_10)))) ? 1374154309 : (((((var_12 ? var_17 : var_14))) ^ 7598846842371268143))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (arr_5 [i_0])));
                var_24 *= (arr_3 [i_0] [i_1] [i_1]);
                arr_6 [i_0] [i_1] = (min(((((var_1 | var_16) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_0])))), var_2));
            }
        }
    }
    #pragma endscop
}
