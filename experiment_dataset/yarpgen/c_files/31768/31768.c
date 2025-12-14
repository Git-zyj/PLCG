/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_4;
        var_16 = (((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : var_15)) + (arr_2 [i_0 - 2])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [14] |= ((var_11 ? (max(((min(127, (arr_1 [i_0])))), (min((arr_2 [i_0]), var_7)))) : ((18446744073709551610 ? (arr_0 [4] [i_0 + 3]) : ((-3562374964580544471 * (arr_4 [i_0] [i_1])))))));
            var_17 *= (min((--4760), ((min((min(var_1, (arr_1 [i_0]))), var_1)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_18 = (arr_4 [i_0] [i_2]);
            arr_9 [i_0] [i_2] = (((min(((max(var_10, var_15))), ((var_0 ? 94 : 4294967295)))) * (arr_1 [i_0 + 1])));
        }
        arr_10 [i_0] = var_5;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_19 = (((8973075259034842291 * (-127 - 1))));
        arr_14 [i_3] = ((min(((var_7 ? -1145840359 : (arr_12 [i_3] [i_3]))), (arr_12 [i_3] [i_3]))));
    }
    var_20 = ((~(((min(18446744073709551615, 15))))));
    var_21 = (min(var_21, ((((((~(min(29, var_8))))) ? var_12 : ((((~var_0) ? ((min(var_7, 0))) : (var_2 || var_7)))))))));

    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        var_22 = var_11;
        var_23 = (((max((arr_15 [i_4 - 3]), (arr_15 [i_4 + 2])))) ? (!114) : ((min(var_2, 4416091684334241158))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_24 += (-((1 ? ((7521808206830143944 >> (((arr_0 [1] [1]) - 55206)))) : 4294967295)));
        var_25 = (min(var_25, ((((arr_7 [i_5] [4]) + (max((arr_7 [12] [12]), (arr_7 [i_5] [14]))))))));
        var_26 = ((min(((min((arr_0 [i_5] [i_5]), (arr_12 [i_5] [i_5])))), -var_6)));
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_27 = ((~((((!-23) && (!8184))))));
        arr_22 [i_6] = (min((arr_13 [i_6 + 1]), (((arr_13 [i_6 - 1]) * (arr_13 [i_6 + 2])))));
        arr_23 [i_6] = (((-32743 + 2147483647) >> (-92 + 121)));
    }
    var_28 = var_7;
    #pragma endscop
}
