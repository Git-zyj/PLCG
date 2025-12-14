/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((0 & var_3) ? ((var_6 ? var_10 : var_8)) : var_3))) + var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : 2235288786)))) - ((((max(var_0, var_8))) ? ((-62 % (arr_1 [i_0]))) : (arr_2 [i_0])))));
        var_13 = 2582850565;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1 - 3]) + (~var_9)));
        arr_6 [i_1 + 1] [i_1 + 2] = ((((arr_4 [i_1 - 1]) ? (arr_4 [i_1 + 1]) : -101)));
        var_14 = (arr_2 [i_1]);

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 -= (min((((max(2, (arr_3 [i_2]))) % -101)), ((max((arr_1 [4]), (~var_3))))));
            var_16 = (max(var_16, (((-((((min((arr_0 [i_1]), var_3))) ? (((arr_7 [i_1]) * var_4)) : (arr_3 [i_2]))))))));
            var_17 = (arr_4 [i_2]);
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_18 += var_3;
            var_19 = ((((((arr_7 [i_3 - 2]) + -126))) ? (((max(100, var_1)))) : (((((arr_4 [2]) << (var_1 - 105)))))));
        }
        arr_11 [i_1] [i_1 + 1] = (arr_3 [i_1]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (min((((!((max(63785, var_0)))))), (((((0 ? 2883895162 : (arr_4 [i_4])))) ? var_10 : (((arr_7 [i_4]) * 1751))))));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_20 = ((!((((1 ? 4294967282 : var_9)) > var_6))));

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_21 = (max(var_21, ((min((((arr_15 [10]) * ((var_9 ? 9390116757709549390 : (arr_7 [i_4]))))), (!-11530))))));
                var_22 = ((!((min(-109, ((44319 ? var_7 : var_4)))))));
            }
            var_23 = (max((((!(var_5 > var_0)))), (((((arr_10 [i_4] [8]) < 72553766)) ? (min(var_4, 1)) : 1213089106))));
        }
    }
    #pragma endscop
}
