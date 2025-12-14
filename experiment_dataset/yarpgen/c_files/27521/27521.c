/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [6] [6] = ((min(var_12, (min((arr_1 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] = (max((arr_0 [i_0]), -79));
        var_15 = 4025047617;
        var_16 = ((min(4025047617, (min(var_3, var_11)))));
        arr_4 [i_0] = 5151703659207975246;
    }
    var_17 = var_1;
    var_18 = var_4;
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                arr_12 [i_1 - 1] [i_1 - 1] = (min(-1, (max((arr_7 [i_1 - 1]), 2343805157476980543))));
                var_20 = (min(var_20, var_14));
                var_21 |= min((arr_1 [i_1]), ((min(var_11, 4025047617))));
            }
        }
    }
    #pragma endscop
}
