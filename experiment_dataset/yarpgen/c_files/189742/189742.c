/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 *= (arr_0 [i_0]);
        var_16 = ((((min(((min(-100, var_11))), var_1))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (min(4444836494900828424, ((0 / (arr_0 [1])))))));
        var_17 = arr_1 [i_0];
        var_18 = (min(var_18, -171));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((max(var_9, (arr_3 [8] [i_0] [i_0])))))));
                    var_20 = (min(var_20, (((min((arr_8 [i_2] [0] [i_0]), 54330))))));
                    var_21 *= (arr_5 [i_1 + 1]);
                }
            }
        }
    }
    var_22 &= (((((~((var_14 ? 2065217726 : (-9223372036854775807 - 1)))))) ? (-9223372036854775807 - 1) : var_7));
    #pragma endscop
}
