/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = var_17;
    var_22 = (max((((((var_10 ? var_19 : 78))) ? ((var_6 ? var_16 : var_4)) : (((max(var_15, 8384)))))), var_8));
    var_23 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_24 = ((-(((((1 ? 12290 : var_15))) ? (((-(arr_2 [i_1] [i_1])))) : 11296803296929798431))));
                arr_6 [i_0] [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
