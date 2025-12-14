/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [6] = ((1 ? 1 : -2095547671));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] = var_6;
                        var_11 = (!127);
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        var_12 |= ((min(-var_8, (min(var_6, var_3)))));
                        arr_13 [i_4] [i_2] = max((15978404195725336651 % 12262), var_9);
                        arr_14 [i_4] [i_1] = ((((((-12262 ? -7 : 53299)))) ? (!var_2) : ((15978404195725336652 ? (min(var_10, 0)) : var_9))));
                    }
                    var_13 = (~((max(-12270, 55635))));
                    arr_15 [i_0] [i_1] [i_2] [i_2] = var_4;
                }
            }
        }
    }
    var_14 = (max(var_14, (max(((8388607 & ((1775260515 ? 1 : 103)))), ((-((var_10 ? var_0 : var_10))))))));
    var_15 = (max(var_0, 765956628));
    #pragma endscop
}
