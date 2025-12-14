/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min(((var_13 ? var_2 : var_7)), (((403967558 ? var_11 : var_4)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (-(max(((max(403967558, 37791))), var_7)));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_17 = ((var_12 ? (min(((min(var_11, var_11))), (min(var_15, var_13)))) : (((((min(var_7, var_5)) != (min(var_14, var_14))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 = (var_3 ? (((((var_14 + 9223372036854775807) >> (var_0 - 959302234))) >> ((((var_9 ? var_10 : var_7)) - 20041)))) : ((var_6 ? 65535 : (min(var_14, var_2)))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = var_2;
                    }
                }
            }
            var_19 = (((((3797667838 / (min(var_1, var_12))))) ? ((((37792 / 3890999738) ? ((var_13 ? var_12 : 2485725386348017561)) : ((var_3 ? var_13 : var_6))))) : ((~((3797667838 ? 12691515012706185093 : 27158))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_20 = (27744 ? 1548451180 : 2485725386348017590);
                            arr_18 [i_0] = (~((0 ? (arr_0 [i_0] [i_1]) : (min(var_6, -27083)))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_21 = -17112;
            var_22 = ((((((max(var_0, var_14)) + (~var_5)))) && (!var_1)));
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_23 = 8921675199742936370;
        var_24 = (max(((max(-var_2, var_6))), (max(((var_6 ? var_15 : -358825167)), (((var_0 ? var_3 : var_3)))))));
        arr_24 [i_8] = ((min((((arr_23 [1]) ? var_7 : var_10)), (var_10 / var_13))));
    }
    #pragma endscop
}
