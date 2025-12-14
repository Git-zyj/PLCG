/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, 37));
                    var_16 = ((((((255 ? var_1 : var_13))) ? (5 & var_3) : var_7)));
                    var_17 = (min(var_17, ((((((var_4 ? (((37 >= (arr_2 [i_0] [i_0] [i_0])))) : var_13))) ? ((((((var_2 ? 9023679118802581136 : var_2))) ? var_6 : ((34359738367 ? (arr_3 [i_0]) : (arr_6 [1] [i_0])))))) : (((((var_11 ? 12901671723093736373 : (arr_1 [i_2])))) ? var_3 : -1944289484562275954)))))));
                }
            }
        }
    }
    #pragma endscop
}
