/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = 65535;
        arr_3 [8] = (~(arr_0 [i_0 + 1]));
        var_16 += 64;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 ^= (!var_5);

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2] = (~-65);
            var_18 = (min(var_18, (((-65 >= -83) ? var_10 : (arr_6 [0] [i_2])))));
            var_19 = (min(var_19, (2444861150055550354 / var_12)));
        }
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            arr_14 [7] [7] [i_1] = (((arr_12 [i_3 - 4] [i_3 - 1] [i_3 - 1]) ? 65535 : ((var_0 ? var_14 : 65533))));
            arr_15 [19] [i_3] [3] = ((((79 ? var_1 : var_8)) < 1));
        }
    }
    var_20 += var_7;
    #pragma endscop
}
