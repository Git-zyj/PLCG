/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 3411152314;
    var_21 = var_14;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] &= (arr_0 [i_0]);
        arr_3 [i_0] = 112;
        var_22 = (max(var_22, (arr_1 [i_0] [5])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] &= var_11;

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_23 = (((((((max(29793, var_4))) ? ((min(127, 1))) : (((arr_5 [i_1]) ? (arr_8 [i_1] [i_1] [14]) : var_9))))) ? (min(5, (max(2920771120, var_19)))) : var_15));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_24 = ((!(((var_7 ? (arr_4 [i_1]) : (arr_8 [i_1] [1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [23] [21] = 113;
                            arr_18 [16] [9] [i_3] [i_4] [i_5 + 1] = var_15;
                            arr_19 [i_3] [i_4] [1] [22] [i_3] = ((-6031426280662281887 ? 7564892779786011638 : 1));
                        }
                    }
                }
            }
            var_25 = (min(var_25, (((3045319422725249459 ? 4519 : 6)))));
        }
        var_26 = (max(var_26, (arr_11 [i_1])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_22 [i_6] &= ((469762048 << (-6179932925639428802 + 6179932925639428828)));
        arr_23 [i_6 - 1] = 112;
    }
    #pragma endscop
}
