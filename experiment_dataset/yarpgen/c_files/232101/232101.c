/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, (((+(max((arr_0 [i_0]), 12174357315285673615)))))));
        var_20 = (min(var_20, ((max(((var_10 ? var_2 : (arr_1 [0]))), -16133)))));
        arr_2 [i_0] [i_0] = (((((19 ? (arr_0 [i_0]) : var_9))) && ((((arr_1 [i_0]) * (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = (max(((-(arr_8 [i_2]))), 331720347));
                    arr_11 [i_1] [i_2 - 1] [i_2] [i_2] = (-31 - ((-var_13 ? ((((arr_5 [i_1]) ? var_3 : var_10))) : (arr_8 [i_2]))));
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_21 = var_17;
            arr_15 [i_1] [i_4] [i_4] = (max(((5 / ((~(arr_7 [i_1] [i_4] [i_4]))))), var_7));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_22 = (max(var_22, (~48919)));
                        var_23 = (min(var_23, (((3963246939 && ((max((~var_13), ((var_7 ? var_18 : (arr_1 [8])))))))))));
                    }
                }
            }
            var_24 -= (max(1, (max((arr_23 [i_1]), ((var_6 ? var_14 : 30))))));
            var_25 = (min(var_25, -22348));
        }
    }
    var_26 = (min(var_26, ((max(var_1, -var_3)))));
    var_27 = (var_7 ? var_4 : ((var_2 ? var_6 : (((3679675287567387234 << (var_15 - 8974638182559954171)))))));
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    var_28 = (arr_25 [i_8 + 2] [i_9]);
                    arr_30 [i_8] = (max((((!(var_15 > 1023)))), (max(var_6, (-8136876413931025683 >= 211)))));
                    var_29 = var_18;
                    var_30 = (max(((((max(30, var_17))) ? var_6 : (arr_24 [i_8 + 2]))), (max((arr_29 [i_10] [i_10 + 2] [i_10 + 3] [16]), 14518485919465573946))));
                    var_31 = (max(var_31, var_0));
                }
            }
        }
    }
    #pragma endscop
}
