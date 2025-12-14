/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (0 || -1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = (arr_3 [i_0] [i_0] [i_2]);
                                arr_11 [1] [i_3] [i_0] [i_0] [5] [5] = (5303310134430994039 != -20637);
                                var_22 = (min(var_22, (((((((arr_0 [i_1]) ? 32745 : -96))) ? (min((max(var_4, var_8)), (arr_8 [10] [10] [i_3] [i_3]))) : ((min((~-1), (var_16 <= 4267387955801766761)))))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] = (max((((arr_5 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) ? (arr_10 [i_0] [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) : (arr_5 [i_1] [i_0] [i_1] [i_0 + 1]))), -14));
                var_23 = (max((((((min(var_13, var_13))) || 92))), (min(var_1, (arr_1 [i_0])))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_24 = (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_25 = (min(var_25, (((31 ? ((((max(-2, 1))) % (min(892164739, 184)))) : (((0 ? var_5 : var_2))))))));
        var_26 = ((5 ? 13972783615182794310 : 112));
        var_27 = var_7;
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = -1;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    arr_26 [i_8] [i_7] [i_8] = ((min((arr_16 [i_7]), (arr_16 [i_7]))));
                    var_28 = (min(var_28, (((var_15 ? ((((((arr_18 [i_6]) != 18446744073709551611)) ? ((var_11 ? var_16 : (arr_19 [5] [5]))) : (143 && var_1)))) : (var_5 % 920723904831389387))))));
                }
            }
        }
    }
    #pragma endscop
}
