/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (max(var_10, 672));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_11 = (max(var_11, (((arr_0 [i_1]) ^ ((39225 ? -321913080 : 267997736))))));
            arr_5 [9] [9] = arr_0 [i_0];
        }
        var_12 = ((!(((1472102585 ? -7217 : -267997736)))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [5] [i_4] = ((!569682169) ? (arr_7 [i_0]) : (min(827467780, 24720)));
                        arr_16 [i_0] [i_2] [i_3] [i_0] = ((63295 / (((min(59826, (arr_8 [i_2] [i_4])))))));
                        arr_17 [13] [2] [i_3] [19] [i_3 - 3] [0] = ((min(34803, -321913076)));
                    }
                }
            }
            var_13 ^= ((!((min(1, 50337)))));
            arr_18 [i_2] [i_0] = min((arr_10 [i_2] [i_0]), 2147483623);
            arr_19 [i_0] [i_2] &= var_0;
        }
    }
    var_14 = min((~1793724370), (((max(var_8, var_7)) / -var_2)));
    var_15 = ((!((min(var_2, var_8)))));
    var_16 = ((var_2 ? (((((24691 ? -1532988136 : var_7))) ? (var_0 < var_3) : (var_5 % 24717))) : var_4));
    #pragma endscop
}
