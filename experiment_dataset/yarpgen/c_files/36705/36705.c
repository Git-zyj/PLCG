/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_12 = (min(var_12, (var_9 | var_4)));
        arr_3 [i_0 - 4] &= var_6;
    }
    var_13 = (187 ^ 2428);

    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_14 = var_8;
            var_15 = var_0;

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_11 [i_2] [i_3] = (!var_1);
                var_16 = var_10;
                var_17 = (164 <= 26);
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_18 -= ((!(!var_4)));
                arr_16 [i_1] [i_1] [i_1] [i_4] = (~var_7);
            }
            arr_17 [i_1] [i_2] = var_1;

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_19 = (((var_11 / (var_3 | var_2))));
                var_20 *= (var_11 + ((1905578730 & (2428 & -12837))));
                var_21 = (((!var_7) ^ (!42)));
            }
        }
        var_22 += -var_8;
        var_23 = ((-(var_1 > var_10)));
    }
    var_24 = ((var_1 - (var_0 / var_4)));
    #pragma endscop
}
