/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (max((var_4 / 1), ((((min(var_11, var_10))) ? (-1684253112 / var_15) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (-((3692712862 ? 1684253100 : (arr_1 [i_0]))));
                arr_8 [i_1] [i_1] [i_1] = (((arr_2 [i_1]) * ((((min((arr_6 [i_0] [i_0] [i_0]), var_10))) * var_14))));
            }
        }
    }
    #pragma endscop
}
