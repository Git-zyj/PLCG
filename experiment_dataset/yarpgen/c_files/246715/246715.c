/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((21934 ? 507 : -21935))) ? -21923 : (var_7 % var_0)));
    var_16 = ((((((var_6 ? var_4 : var_5)))) ? (((!16) ? -507 : var_7)) : (max(((1 << (32767 - 32754))), -var_0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = ((-1 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
        var_17 = (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_18 = ((((((arr_3 [i_1]) - var_2))) ? ((min(((min(var_12, (arr_3 [i_1])))), (arr_4 [i_1 + 1])))) : (arr_3 [i_1])));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_19 += (((-507 + 2147483647) << (max(0, (~1)))));
            arr_7 [i_1] [i_2] [i_2] = (((arr_5 [i_1] [i_1 - 1] [i_1 - 1]) || (--21934)));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_3] = ((21913 ? (arr_5 [i_1 - 1] [i_1] [i_1 - 1]) : ((((((~(arr_10 [i_3] [i_1])))) != (((arr_4 [i_1 + 1]) | 4294967295)))))));
            var_20 += ((((((arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : 32767))) ? (((arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_11 [i_1] [i_1 - 1] [i_1 + 1]))) : (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1])));
        }
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            var_21 = (min((1406047370 || -2313743691716053971), 8));
            var_22 -= (~13001178077522420013);
            arr_15 [i_1] [12] = (i_1 % 2 == zero) ? (((arr_6 [i_1]) * (((min((arr_6 [i_1]), 0)) * 32767)))) : (((arr_6 [i_1]) / (((min((arr_6 [i_1]), 0)) / 32767))));
        }
        arr_16 [4] &= (arr_9 [i_1]);
    }
    var_23 = (min((127 & var_9), (((var_3 ? 15946 : (max(9223372036854775807, var_11)))))));
    #pragma endscop
}
