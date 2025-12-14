/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (~10082691296881692913);
    var_13 = (min(var_13, var_11));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) | 231)) < -var_1));
        arr_3 [i_0] = min((arr_1 [i_0]), (max((((arr_1 [i_0]) ? 2147483642 : var_1)), ((min((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = min((((arr_4 [i_1]) ? 62493 : (var_3 & 5972501868899684308))), 1);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_15 = arr_4 [i_3];
                        var_16 = (max(((((arr_0 [i_1]) / (arr_8 [i_1] [6])))), ((2402096954 ? 4294967295 : 4))));
                    }
                }
            }
        }
        arr_12 [4] = ((~(((arr_10 [i_1] [i_1] [i_1] [i_1]) ? (1892870345 | -553950388) : (arr_6 [i_1])))));
    }
    #pragma endscop
}
