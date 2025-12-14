/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-16259 > 12446) ? (((((var_1 + 36) > (!var_4))))) : (max(var_9, 1072791176))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (-var_3 / var_5);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 = ((-(arr_6 [i_0])));
            arr_7 [i_0] [10] [i_0] = ((3614603669 | (-9223372036854775807 - 1)));
            arr_8 [i_0] [i_0] = var_3;
        }
        arr_9 [i_0] = 13963299501554118962;
        arr_10 [i_0] = (arr_1 [i_0 + 4]);
    }

    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        arr_13 [i_2] = (((((-8696 ? var_3 : (arr_0 [i_2])))) ? (arr_1 [i_2 + 2]) : (max((arr_0 [i_2]), 3033455100))));
        var_13 = (min(var_13, (((var_6 ? (arr_12 [i_2 + 2] [i_2 + 3]) : (arr_12 [i_2 + 3] [i_2 + 1]))))));
        arr_14 [i_2] [i_2] = var_9;
    }
    #pragma endscop
}
