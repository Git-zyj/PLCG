/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 &= var_18;
        var_21 = (max(var_21, ((min((((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_3))) || ((var_1 > (arr_1 [11])))))), ((max(var_11, var_2))))))));
        arr_2 [i_0] = (arr_1 [7]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (max((((arr_0 [i_0 + 2]) ? 2837864196364614701 : (arr_0 [i_0 + 1]))), ((((arr_0 [i_1]) ? var_9 : var_19)))));
            arr_6 [i_0] [13] [13] = ((((((9223372036854775807 ? var_13 : (arr_1 [i_1]))))) ? ((min(var_11, (arr_1 [i_1])))) : ((-((13441164402543158639 ? (arr_0 [i_1]) : (arr_3 [i_1])))))));
            arr_7 [i_0] [i_0] = (min((((var_7 ? 1695104794 : var_16))), (((((var_10 ? 9223372036854775807 : var_0))) ? ((var_8 ? (arr_1 [i_0]) : -9223372036854775807)) : ((min((arr_0 [i_1]), 2477249804)))))));
        }
        var_22 = ((((((98 ^ 1400716996098122763) ? (((((arr_0 [i_0]) + 2147483647)) << (var_10 - 599135888))) : (arr_4 [i_0 + 2] [i_0 + 2])))) ? (arr_0 [i_0]) : (arr_0 [1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_23 = (((((arr_9 [i_2]) > (arr_9 [i_2]))) ? (arr_9 [i_2]) : (arr_8 [i_2])));
        var_24 = (((arr_8 [i_2]) ? -3693506044647356969 : ((((!(((244 ? -40 : var_13)))))))));
    }
    var_25 = (max(1400716996098122763, 534864025));
    var_26 = (max(var_26, (((((((!2044437060) ? 14 : -21))) ? var_8 : ((((var_19 ? var_7 : var_19)) - -var_6)))))));
    var_27 = (((((var_0 ? (min(15558914760173778562, var_2)) : var_14))) ? ((var_2 << (var_15 == var_1))) : (((((min(var_1, var_13)) == (((4 ? var_8 : var_8)))))))));
    #pragma endscop
}
