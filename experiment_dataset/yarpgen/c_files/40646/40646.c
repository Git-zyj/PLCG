/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((var_1 ? var_12 : var_13))));
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = ((((max(var_5, (arr_4 [i_0 - 1] [i_0 - 1])))) ? (((max((arr_4 [i_0 - 1] [i_1]), var_14)))) : var_5));
                arr_5 [i_0] = (((((~(arr_2 [i_0] [i_0 + 2])))) ? var_1 : (arr_2 [i_0 - 1] [i_0 + 3])));
            }
        }
    }
    #pragma endscop
}
