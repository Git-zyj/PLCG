/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_19 = (max(var_14, 0));
                var_20 = 2675661581;
                var_21 = (max(var_21, 0));
            }
            var_22 = (((-49 / var_3) ? (min(1, ((var_13 ? var_9 : var_14)))) : ((((arr_3 [i_1] [i_0] [i_0]) ? ((min(48, -13801))) : (arr_3 [0] [4] [i_0]))))));
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_23 = ((max(var_9, 255)));
            var_24 = (max(var_24, 1));
        }
        var_25 = (min(55, -46));
        var_26 = (arr_8 [i_0] [i_0] [i_0]);
        arr_10 [0] = (((arr_9 [i_0] [1]) ? (99 / var_14) : (((193 ? var_8 : 2349929794)))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_27 = (min((((var_8 ? (arr_12 [i_4 + 2]) : (arr_12 [i_4 + 1])))), (max((max(5559190029296304251, 45)), var_9))));
                    arr_15 [i_0] [i_4 + 1] = 255;
                }
            }
        }
    }
    #pragma endscop
}
