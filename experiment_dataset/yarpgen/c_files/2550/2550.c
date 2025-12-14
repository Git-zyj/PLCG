/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 = ((((((2049 ? var_13 : 1479930163)))) ? (~52579) : var_3));
        arr_2 [i_0] = (((var_9 << (var_6 + 6172))));
        arr_3 [i_0] [i_0 - 1] = (((var_10 <= -115) * ((var_6 ? ((-115 ? (arr_0 [i_0] [i_0 + 3]) : var_6)) : (arr_0 [i_0 - 1] [9])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = var_16;
        var_20 = (arr_4 [i_1] [i_1]);
    }
    var_21 = (max(115, ((((38230 ? var_7 : -10893)) - -var_9))));

    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = (806479377 >= -18214);

        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            var_22 = (32767 ? 1098856801 : 1098856810);
            arr_14 [i_2] = var_10;
            var_23 = (min(var_23, (!-var_4)));
            var_24 = (((((-116 ? 52 : 118))) ? (((((((arr_11 [i_2]) * var_12))) || var_1))) : -18215));
        }
        arr_15 [i_2] = (1 % var_10);
        var_25 = (((((var_15 ? (arr_0 [i_2] [i_2]) : (arr_1 [9])))) ? ((-(max(var_17, var_9)))) : var_11));
    }
    #pragma endscop
}
