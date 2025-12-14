/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max((max(var_1, var_18)), 3184973377));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, -743622880));
        var_21 -= (arr_0 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_22 = (min(var_22, (((0 >> (47809 - 47782))))));
            arr_7 [i_0] [i_1] [i_1] |= (arr_2 [i_0]);
            arr_8 [i_1] = (~var_5);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [i_0] = (arr_3 [i_0] [i_2]);
            arr_12 [i_0] [i_0] [6] = (((max((arr_0 [i_2] [i_0]), (max((arr_1 [4] [i_2]), (arr_0 [i_0] [i_2])))))) ? 17705 : (((~47845) + 703001111)));
        }
        var_23 = min((min((max(2277, 1057776869633917943)), ((max(var_14, (arr_1 [i_0] [i_0 + 1])))))), -91);
        arr_13 [i_0] = ((((arr_2 [i_0]) ? (arr_10 [4]) : (arr_3 [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 20;i_4 += 1)
        {
            {
                arr_19 [i_3] = ((var_18 | (max(((min((arr_16 [i_3] [i_4]), var_8))), (arr_15 [1])))));
                var_24 = max(1225437426, (((~(arr_14 [14])))));
            }
        }
    }
    #pragma endscop
}
