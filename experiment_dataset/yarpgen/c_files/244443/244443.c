/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((((var_4 ? var_11 : var_10))), ((var_9 ? ((var_14 ? var_12 : var_7)) : (var_7 | 107))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = (((65529 && 111) ? -12143 : (max(((var_15 / (arr_1 [i_0 - 1] [i_0 + 2]))), ((min(29, var_9)))))));
        var_20 ^= (((!120) ? (((arr_0 [i_0 + 2]) ? var_4 : (arr_1 [i_0 + 2] [i_0 - 2]))) : ((max((arr_0 [i_0 - 1]), (arr_1 [i_0 + 1] [i_0 - 2]))))));
        var_21 -= (var_6 <= 23421);
        var_22 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((var_6 && var_10) || ((min((arr_2 [i_1]), (arr_3 [i_1 + 3] [i_1]))))));
        var_23 ^= 9697;
        var_24 = (max(var_24, (((-((((arr_2 [0]) > ((113 ? var_9 : var_5))))))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_25 = var_9;
            var_26 = (min(var_26, 4128768));
            arr_9 [i_1] [i_2] [i_2] = (var_3 % var_11);
            var_27 -= ((+(((var_3 * var_11) / (arr_3 [i_2] [i_2])))));
            var_28 = ((-(((((2795228299412816033 ? var_0 : -5788))) ? 98 : ((var_11 ? 1575186805 : var_15))))));
        }
        var_29 = (max(var_29, (min((((6398 ? 4047785825 : (((max((arr_7 [i_1] [i_1]), var_8))))))), (arr_2 [14])))));
    }
    #pragma endscop
}
