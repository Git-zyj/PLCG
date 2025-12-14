/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_9, var_4));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_19 = var_9;
        var_20 = (((((min(var_6, (arr_0 [i_0 - 1] [i_0]))) * ((min(var_4, var_12))))) | var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_0] = var_13;
                    var_21 = 81;
                    arr_9 [i_1] = 0;
                }
            }
        }
        var_22 = 4868012726889380379;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = var_13;
            arr_13 [i_0] [i_0] = (!2948235724);
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_16 [i_4] = (var_9 * var_4);
        arr_17 [i_4] = (((-(var_2 + 1346731571))));
    }
    var_24 = var_4;
    var_25 = (max(var_25, var_11));
    #pragma endscop
}
