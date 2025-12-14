/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = 4360485855179800214;
    var_20 = (max((max((max(var_2, 9223372036854775807)), (min(740078223, var_15)))), ((var_8 & (((2147483642 ? 24281 : var_2)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((-8893232423268095681 < (2147483642 - 24281))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = -8642624700791738170;
            arr_6 [i_0] [i_1] = (((!-25335) | (2342747280872682490 != 8642624700791738168)));
        }
        arr_7 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = ((-var_12 ^ (arr_9 [i_2])));
        var_22 = (((-(arr_8 [i_2]))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = ((-8642624700791738159 > (((((min((arr_10 [i_3]), 65525)) != (66 != var_11)))))));
        var_23 = ((7342421222023335116 ? ((max(var_7, 255))) : (arr_11 [i_3] [i_3])));
        arr_14 [i_3] [14] = ((min((24281 / 8642624700791738155), (arr_11 [i_3] [i_3]))));
        arr_15 [i_3] = ((((arr_11 [i_3] [i_3 + 2]) | var_12)) & (((var_15 == 842438150) ? (arr_11 [i_3] [i_3]) : (min(1453414726741698529, (arr_8 [i_3]))))));
    }
    #pragma endscop
}
