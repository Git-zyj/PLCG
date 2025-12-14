/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (max(var_19, (((((max(((min(var_7, var_1))), (arr_0 [i_0] [i_0])))) ? (min(2883238916, (((var_7 ? var_15 : var_17))))) : ((~(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_16)))))))));
        var_20 &= (!var_11);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = ((+((-7748 + ((4294967295 ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_0])))))));
            var_22 = (arr_0 [i_1] [i_0]);
            var_23 += (min(1411728353, ((((-(arr_0 [i_0] [i_0]))) * (min((arr_0 [i_1] [3]), var_1))))));
            arr_4 [20] [8] [i_1] |= (((~1411728353) ? (min((~9223372036854775807), (max(var_7, (arr_3 [10] [9] [i_1]))))) : (((~(((((arr_2 [i_0] [i_1]) + 2147483647)) >> (2292819675 - 2292819655))))))));
        }
        arr_5 [i_0] = ((1411728398 == ((((((-9223372036854775807 - 1) ? var_2 : 4704867406773021100))) ? (arr_2 [i_0] [i_0]) : ((1592462861 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))))));
    }
    var_24 = (min(var_24, ((max(-268435456, (((!(var_18 ^ var_4)))))))));
    var_25 = 841812137;
    #pragma endscop
}
