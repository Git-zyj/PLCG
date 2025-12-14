/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_10;
    var_13 = (!11472581608873109075);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_1 [i_0 + 1])));
        var_15 = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_16 = (min(var_16, var_1));
            var_17 = (arr_9 [i_1 - 3]);
            var_18 = ((var_9 < ((0 ? (max(var_4, (arr_3 [i_1]))) : ((~(arr_3 [i_2])))))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_19 = (max(var_19, (((~(((var_5 <= 18446744073709551615) >> (((14573830384492782833 | var_5) - 14654693220143852764)))))))));
            var_20 *= (!9345300238027853314);
        }
        arr_12 [i_1] = (var_8 ? ((-var_4 ? (arr_10 [i_1] [14]) : var_3)) : (((((var_1 ? var_6 : var_1))) ? 9345300238027853310 : var_8)));
    }
    #pragma endscop
}
