/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 ^= 0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        var_15 = 0;
        var_16 ^= (!1);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (+((235 ? (((arr_4 [i_1]) / var_2)) : 235)));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_7 [9] [i_2 - 1] = (~1);
            arr_8 [i_1] [1] [i_1] = var_7;
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_18 = (max((arr_4 [1]), ((max(1, ((var_2 ? 1 : 3038635454)))))));
            var_19 = (1 ? 255 : 241);
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_13 [i_4] = (+(((arr_12 [i_4]) ? (arr_4 [i_4]) : (arr_12 [i_4]))));
        var_20 = (max(var_20, ((max((arr_4 [1]), var_4)))));
    }
    #pragma endscop
}
