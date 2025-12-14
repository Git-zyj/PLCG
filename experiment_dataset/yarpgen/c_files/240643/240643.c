/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? 60 : var_18));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_21 = (max(((var_18 ? 0 : -82)), (min(60, ((32354 ? 1 : (arr_7 [i_1] [i_1] [i_2] [i_1])))))));
                var_22 = (min(var_22, ((min(((2091697124 ? var_8 : 1)), ((((max(var_14, 1195935085))) ? var_7 : var_11)))))));
            }
            var_23 ^= -var_16;
        }
        arr_9 [i_0] [11] = 0;
        var_24 ^= (max(((min(((min(1, 1557989352))), (max((arr_0 [i_0]), var_16))))), var_8));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_25 = (max(4103741984498347431, 61430));
        var_26 ^= (min(1, 1));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_27 = ((max(var_4, (arr_13 [i_3]))));
            var_28 = (((((-86 ? (arr_12 [i_3]) : (arr_11 [i_4])))) ? 61276 : -37991));
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_29 = (max(var_29, (((-(((max(1322055056, 1)) & (max(1359939450, var_15)))))))));
        var_30 |= (max(((min(var_9, -902880870248825356))), 52));
    }
    var_31 = ((var_8 & ((((((var_17 ? var_6 : var_15))) ? var_7 : var_7)))));
    #pragma endscop
}
