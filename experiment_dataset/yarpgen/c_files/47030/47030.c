/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_2, var_10));
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (((min((arr_0 [i_0]), (-9223372036854775807 - 1)))) ? (-9223372036854775807 - 1) : (arr_0 [i_0]));
        var_20 = ((~(~9223372036854775807)));
        var_21 = (max(var_21, (arr_1 [6] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [16] = (min(((((((3 ? (-2147483647 - 1) : (arr_5 [i_1] [14])))) ? 12288 : (((arr_2 [i_1]) ? (arr_2 [i_1]) : (-32767 - 1)))))), (((((-4 ? (arr_4 [i_1] [8]) : (arr_4 [1] [i_1])))) ? (arr_4 [i_1] [0]) : (arr_4 [17] [17])))));
        arr_7 [19] [19] = ((-(536870911 | 0)));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_2] [i_1] [i_1] = 4294967289;
            var_22 = (min((((((0 ? -8 : (-2147483647 - 1)))) ? ((0 * (arr_8 [i_2]))) : 1)), (arr_8 [i_1])));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_14 [i_1] = (((((arr_12 [i_3] [i_1]) * (arr_12 [i_1] [i_1]))) + (arr_8 [i_3])));
            arr_15 [6] [i_3] = (max((((!(arr_3 [i_1] [i_3])))), 36028797018931200));
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_23 = (max((((min((-2147483647 - 1), 246)))), (max(127, 2147483647))));
        var_24 = (((arr_0 [i_4]) * ((((min((arr_4 [10] [7]), (-9223372036854775807 - 1)))) ? -32767 : (((arr_10 [i_4]) ? (arr_5 [5] [i_4]) : 0))))));
        var_25 = (min(var_25, (((!((min((((arr_9 [1] [11] [i_4]) ? 10 : (arr_0 [i_4]))), ((((arr_4 [3] [1]) || (arr_0 [i_4]))))))))))));
        var_26 = (((arr_10 [i_4]) | (max(65535, ((-2 ? 0 : -117))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_27 -= (min((32751 * -1), ((((1 - 102) ? 17 : 53248)))));
        arr_21 [i_5] = 15;
        var_28 *= -9223371899415822336;
    }
    var_29 = (-2147483647 - 1);
    #pragma endscop
}
