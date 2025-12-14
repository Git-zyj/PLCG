/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = ((((~(min(4003017352334372959, var_1))))) ? (((!((min(var_0, (arr_0 [i_0 + 1] [i_0 + 1]))))))) : var_3);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 = (((arr_2 [i_1]) >= ((var_2 ? (max(1168263324, 4003017352334372959)) : (((arr_2 [i_1]) ^ 4003017352334372967))))));
            var_14 = arr_0 [i_0] [14];
        }
        arr_7 [i_0 + 1] [i_0 + 1] = ((((((var_11 ? (arr_4 [i_0]) : var_3)))) ? (arr_5 [i_0 + 1] [i_0 + 1]) : ((var_1 ? 69 : (min((arr_0 [i_0] [i_0]), 4003017352334372959))))));
        var_15 = (arr_5 [i_0] [i_0]);
    }
    var_16 = (var_6 ? 29025 : ((((!-4003017352334372950) > 41662))));
    var_17 += (((((((41664 ? -4003017352334372919 : 23897))) || 41662)) ? ((var_2 ? var_4 : (var_5 == var_1))) : (var_6 * var_2)));
    var_18 = (-var_0 == ((var_6 ? var_4 : (((var_7 ? var_2 : var_3))))));
    #pragma endscop
}
