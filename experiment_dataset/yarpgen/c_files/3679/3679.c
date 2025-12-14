/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3679
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
                var_14 = (((((((arr_2 [10] [10]) / -11))) ? (arr_3 [i_0] [1]) : ((var_10 ? var_11 : -989566681)))));
                arr_4 [i_1] [i_0] = (((arr_0 [i_0]) ? ((~(arr_0 [i_1]))) : ((max((arr_0 [i_0]), -97)))));
            }
        }
    }
    var_15 = ((var_8 ? (((-123 ? var_5 : 4611686018360279040))) : var_9));
    var_16 += (min(((~((var_10 ? var_9 : var_12)))), var_5));
    #pragma endscop
}
