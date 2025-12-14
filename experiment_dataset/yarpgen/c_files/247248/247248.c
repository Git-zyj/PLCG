/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_5 ? ((var_0 >> (-4714248463528798920 + 4714248463528798922))) : (~var_3));
    var_20 = (((((~(var_3 != 1)))) ? ((19474 ? (max(var_18, var_7)) : ((var_4 ? var_18 : var_16)))) : 3589470808061666323));
    var_21 = ((1 ? -7863729395938872332 : 3277699342411569368));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (!var_10);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = (max(var_22, ((10 ? (((((var_5 ? (arr_1 [i_1] [i_0]) : 19474))) ? ((22125 ? var_12 : var_8)) : (((4095 ? 1 : 65))))) : var_11))));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_23 = (!(((10806420163558977191 ? var_0 : var_1))));
                var_24 *= (~1);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [3] [7] [i_4] [i_2] = 1;
                            var_25 |= ((!(((134217472 ? 19488 : 1)))));
                        }
                    }
                }
                var_26 = (~1);
            }
            arr_15 [i_1] [i_1] = (var_9 ? (((227 ? 8603 : ((40300 ? var_4 : 4095))))) : 7863729395938872350);
            arr_16 [i_0] [i_0] [6] = var_11;
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_27 [i_0] [i_0] [i_6] [6] [i_5] = ((((((-9223372036854775807 - 1) != var_13)) ? (!var_14) : ((1 ? (arr_4 [i_0] [i_6]) : var_0)))));
                        arr_28 [i_5] [i_5] [i_6] [i_7] = (~var_10);
                        arr_29 [i_5] [i_5] [i_5] = (((max((!var_13), ((var_5 ? 1983911046896438538 : 46062))))) ? ((12 ? -370626043 : 0)) : (arr_17 [i_5]));
                    }
                }
            }
        }
        var_27 *= ((!((((var_10 ? 25235 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_28 = (((!var_12) ? (max((min(13095117312088491683, var_13)), ((2773575220768342816 ? 46 : 13095117312088491683)))) : 543391871));
    #pragma endscop
}
