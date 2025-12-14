/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= 6592474081140957622;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        arr_3 [2] [i_0 - 2] = var_0;

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_17 = (max(0, (min(0, 3090286694389041624))));
            arr_7 [3] [i_0] [i_0] = (~(min((arr_4 [2] [i_0 + 2] [i_0 + 4]), (arr_4 [i_0 - 3] [i_0] [i_1]))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_2] = ((var_11 ? (arr_5 [i_2] [8]) : ((0 ? var_3 : var_5))));
            var_18 = (-var_6 & var_9);
            var_19 = (min(var_19, ((((arr_5 [i_0] [i_0 + 2]) / (arr_5 [i_0 - 2] [i_0 - 2]))))));
        }
    }
    var_20 = (max(var_20, (((((((var_11 / var_4) * -5731868385834516500))) ? (18446744073709551615 * var_4) : (min(((var_6 ? var_8 : var_2)), 4294967295)))))));
    #pragma endscop
}
