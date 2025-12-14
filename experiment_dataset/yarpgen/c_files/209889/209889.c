/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_2 ? var_2 : var_11)), var_14));
    var_18 = var_15;
    var_19 = var_5;
    var_20 = ((var_10 ? var_10 : (min((var_0 & var_10), var_15))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_21 = (1 >= 1);
                arr_7 [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
