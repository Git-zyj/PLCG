/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((-1993628968 ? 0 : (((min(1, 61304))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] = var_2;

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_1] [8] [12] [i_3] = (arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3] [i_3]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -61304;
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_2] [i_4] [i_4] = ((!(((4237 ? 61310 : ((-30626 ? 61310 : 1)))))));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = (((-127 - 1) || -3836915172894237886));
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_10 = 1;
                        var_11 = (9223372036854775797 ? 1799208454 : ((((-1298181658 >= (arr_11 [i_0] [i_1] [i_2] [i_5 + 1] [0] [8]))))));
                        var_12 = (min((min(35, ((1982201459 ? 0 : -886847206)))), (~10127)));
                        var_13 = ((((((((arr_5 [i_0] [i_0] [i_0]) ? 4228 : var_1)) - 187742056))) ? (max(107, 1799208445)) : -4225));
                        arr_21 [i_0] [i_0] [i_5] [i_0] [4] [i_0] = 886847187;
                    }
                }
            }
        }
    }
    var_14 = (max(-2312765836, ((((-118521230 * var_4) ? ((var_5 ? var_0 : var_8)) : ((var_2 ? var_3 : var_8)))))));
    var_15 = (max(var_15, var_8));
    var_16 = (max(var_16, (((max((min(var_8, var_6), ((min(var_1, var_4))))))))));
    #pragma endscop
}
