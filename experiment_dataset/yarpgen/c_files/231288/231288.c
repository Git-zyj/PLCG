/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_15 |= ((((((((898111213 > (arr_0 [4] [4]))) && -31)))) > ((min(-116, 2953639989)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (((~(max((arr_0 [i_0] [i_2]), 4326208773077494933)))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0 - 2] = 6690029362406359097;
                        var_17 = (((!(arr_9 [i_0 + 3] [i_1 + 1] [i_2 - 1] [i_3]))));
                        arr_12 [i_0] [i_1 - 1] [i_2 + 2] [i_3] = (((!(!1341327307))));
                        arr_13 [10] [10] [i_1] [i_1 - 2] [i_2] [6] &= 2953639989;
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = 1341327311;
        var_18 = 1;
    }
    var_19 = (((var_3 > 26) ? (((!((max(-1002400576, 0)))))) : ((-(60873 | 68)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_4] [i_5] = ((15212737693999399491 ? 1341327307 : 188));
                var_20 = ((min((arr_16 [3]), 2839110869)));
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
