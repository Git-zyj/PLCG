/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((-173606617 ? var_6 : (arr_1 [i_0])));
        arr_3 [i_0] = (!-6089570008566830077);
        var_17 -= (((arr_0 [i_0]) >= (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = min(((-897314384 ? 7988643695935532402 : -31236)), -31257);
        var_19 = (max(var_19, -106));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        arr_16 [i_4] [17] = (((47772 ? ((6089570008566830056 ? var_7 : 74)) : -6089570008566830059)));
                        var_20 = ((-(((((6089570008566830046 ? var_1 : (arr_7 [i_2] [i_2])))) ? ((0 ? var_6 : (arr_0 [i_3]))) : var_4))));
                        arr_17 [i_5] [i_4] [i_3] [i_4] [i_2] = (max((arr_7 [i_2] [i_5]), ((((min(-6089570008566830065, (arr_15 [11] [7] [i_4] [i_3])))) ? -6149843937072925899 : var_6))));
                    }
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        var_21 = (max(var_21, ((min(var_1, (~12835276599379992200))))));
                        var_22 -= (((!2708) ? (max(2501331866, 3799060747)) : (min(17745, 3901334071))));
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_23 = (!1);
                        arr_23 [i_2] [i_3] [i_4] [i_3] [18] = ((-3580897279120640736 ? (max(124, ((5174534616413477472 % (arr_8 [i_7 + 1]))))) : (arr_9 [i_4 + 2] [i_4 + 3])));
                        var_24 = -6149843937072925899;
                        arr_24 [i_2] [i_4] [i_4] [2] = 1699343263;
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_25 = (arr_27 [i_8] [i_8 + 1] [i_8] [i_4 + 3] [i_4 + 1] [i_2]);
                        var_26 = (~-852);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_27 = ((((min((arr_18 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_9] [i_9]), (arr_18 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4] [i_4])))) ? var_0 : 0));
                                var_28 = ((((min(((6149843937072925899 << (((var_11 + 651775156) - 7)))), (((1878496412 ? 833 : -22)))))) ? var_0 : (max((arr_28 [i_4 + 3] [i_4] [i_4 - 1] [i_4 + 3]), (var_7 ^ var_4)))));
                            }
                        }
                    }
                    arr_35 [i_2] [i_2] [i_2] [i_4] = (arr_25 [i_4 + 2] [i_4 + 1] [10] [i_4] [i_4 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
