/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = ((((min((max(var_10, (-2147483647 - 1))), (((arr_1 [i_0]) ? var_1 : (arr_2 [i_0 - 1] [10])))))) ? (-2147483647 - 1) : (min((min(-952575097000989626, (arr_2 [i_0] [i_0]))), (arr_0 [i_0])))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            var_19 = (min(8822213021815959685, (((((-32755 - (arr_3 [i_1]))) - 1)))));
            arr_6 [i_0] [i_0] = (((2147483647 ? 9624531051893591921 : (arr_1 [i_0]))));
            var_20 = 8128;
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_21 *= (((var_8 / 9223372036854775807) ? var_15 : (((!((min(var_0, 32754))))))));
            var_22 = var_5;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_23 = (min(var_23, ((((((9223372036854775807 ? (!var_17) : (arr_3 [i_3])))) ? (min((-7631532803446302467 % 9223372036854775807), ((1 ? (arr_11 [i_0] [5] [i_0]) : var_11)))) : ((((arr_3 [i_3]) % (arr_3 [i_3])))))))));
            arr_13 [i_0] = (arr_3 [i_0]);
        }
        arr_14 [1] |= min(((((-9223372036854775807 - 1) > var_12))), (-9223372036854775807 - 1));
        var_24 = (min((((((0 ? (arr_9 [9] [i_0 + 1] [i_0]) : var_0))) ? (arr_5 [i_0]) : 127)), ((((arr_5 [i_0]) > -9223372036854775807)))));
    }
    var_25 = (((var_13 || 31) ? (((min(var_13, var_11)))) : (((var_1 - var_14) - (-9223372036854775807 - 1)))));
    #pragma endscop
}
