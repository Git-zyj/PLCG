/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (min(1, 7250006093062699444));
    var_19 = (max(var_19, ((((((-32740 ? (~13121075422687797121) : ((max(var_12, 3811515017267319851)))))) ? ((var_14 ? (13121075422687797125 * 0) : var_16)) : var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(((((var_7 ? (arr_0 [i_1]) : (arr_4 [i_0] [i_1] [i_2]))))), (max(21685, 5325668651021754490))));
                    var_21 &= var_12;
                    arr_6 [i_0] [i_1] [i_2] = (min(13121075422687797142, 119));
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
