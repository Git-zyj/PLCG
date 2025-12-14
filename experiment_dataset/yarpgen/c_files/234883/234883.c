/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((-5794 ? var_10 : -var_10)))));
                    var_15 = (max(var_15, (!var_0)));
                }
            }
        }

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_16 = -16711;
            arr_11 [i_0] [i_3] = 100;
            var_17 = ((var_8 ? 159 : var_12));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_18 = -15650;
        var_19 = (min(var_19, -50849629));
        var_20 = 18351872442604516089;
        var_21 = 50792;

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_18 [i_5] = (var_7 ? var_12 : var_8);
            var_22 += 13421470617465897386;
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_21 [i_6] = ((11505556883815946647 ? -1469 : 14031502442451133975));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_7] [i_8] = var_7;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_23 *= (-(max(var_8, 10595423437233935930)));
                                var_24 |= (((((3361332728 ? 8367938184406550816 : -563093253))) ? ((var_9 ? (((-44 ? 59779 : 1980638200))) : var_12)) : ((((max(var_10, var_4))) ? (((-4776548720102130414 ? 1 : -6165007711992498580))) : 3008098617903109307))));
                                var_25 = var_1;
                                var_26 = min((var_10 + var_2), (((((var_2 ? var_0 : var_0))) ? var_6 : ((111 ? var_10 : var_9)))));
                                arr_32 [i_6] [i_7] [i_7] [i_8] [i_9] [i_10] = (min(((((~var_2) ? var_4 : (var_7 - var_11)))), (((((6511880687856780964 ? 4511022912647357805 : 117))) ? (-899282812 + var_0) : -var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_37 [i_11] [i_11] &= (-((var_8 ? var_3 : 640)));
        arr_38 [15] [i_11] &= var_0;
    }
    var_27 ^= (max(((var_6 ? var_12 : ((max(-1105138677111243239, 5092711123600772574))))), var_5));
    #pragma endscop
}
