/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 &= var_0;
                    arr_7 [i_1] = ((arr_1 [i_0]) ? (arr_2 [i_0] [i_1] [i_1]) : var_9);
                }
            }
        }
        var_12 = -65532;
        var_13 = (~var_0);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = -2061369924;

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_14 = 3059587076;
            arr_14 [i_4] = ((arr_2 [i_4 + 1] [i_4 + 1] [i_4]) ? (var_8 % 3899757404831858346) : (((var_1 ? 46538 : (arr_5 [i_3] [i_4] [i_4] [i_4])))));
            arr_15 [i_3] [i_4] = (((arr_3 [i_4]) ? (arr_10 [i_3] [i_4 + 1]) : 45169));
        }
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            var_15 += (((var_6 ? (arr_10 [i_3] [i_3]) : var_2)) & var_7);
            arr_18 [11] = (((var_4 & 0) ? 16942 : (arr_12 [i_5 - 1] [i_3] [i_5])));
            var_16 *= var_2;
            arr_19 [i_3] [i_5] [i_5] = (((arr_6 [i_3] [i_5 - 1] [i_5] [i_5]) / 2966));
        }
        arr_20 [i_3] [i_3] = ((arr_2 [i_3] [i_3] [i_3]) * (~var_8));
        var_17 = (((arr_13 [i_3]) ? (~var_1) : var_0));
        var_18 = (max(var_18, (!var_9)));
    }
    var_19 = (max(var_19, var_5));
    var_20 = 11;
    #pragma endscop
}
