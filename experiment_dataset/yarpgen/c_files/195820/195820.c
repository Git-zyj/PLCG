/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 173));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_1 [i_0])));
        var_20 = var_14;
        var_21 = (min(var_21, (((74 << (((arr_0 [i_0]) - 164)))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_22 = (min(var_22, ((((!82) - ((((max(173, -6832313801862240459)) < var_11))))))));
        var_23 = (var_14 < 8583560647309531659);
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        var_24 = ((~(arr_1 [i_2 - 2])));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_11 [i_2 - 4] [i_3] = var_7;
            var_25 = ((((arr_9 [i_2 - 1] [i_3] [i_2 - 1]) != var_14)));
            var_26 = (min(var_26, -4294967295));
            var_27 = (~246);
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_28 = (min(var_28, ((((arr_4 [i_4]) + (arr_12 [i_4] [i_4]))))));
        var_29 -= -6832313801862240431;
        arr_14 [i_4] = (((((arr_13 [i_4]) ? (arr_2 [i_4] [i_4]) : var_12))) ? (arr_3 [i_4]) : -6832313801862240452);
    }
    #pragma endscop
}
