/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 += (min((((min(var_8, var_3)))), ((1 / (~1)))));
                    var_15 = (max(var_15, ((((min(1, -32763)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_15 [i_3] [i_5] [i_0] = (((min((arr_4 [i_3] [i_4 - 1] [i_5]), var_13)) + (((max((var_0 > 26866), (arr_2 [i_5])))))));
                        arr_16 [i_0] [i_0] [i_4] [i_5] [i_5] [i_5] = var_0;
                        var_16 = (max(var_16, ((max((-26866 > 1), (~var_10))))));
                        arr_17 [i_0] [0] [19] [i_4] = (arr_12 [1] [i_3] [i_4] [i_5] [i_5]);
                    }
                }
            }
        }
        arr_18 [i_0 + 1] = -23;
        var_17 += 0;
    }
    var_18 = var_5;
    var_19 = (((((var_12 / (((min(var_2, -26867))))))) ? (min(var_5, var_3)) : var_9));
    #pragma endscop
}
