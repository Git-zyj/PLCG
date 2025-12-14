/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = ((((!(arr_0 [i_0] [17]))) ? (arr_1 [i_0]) : ((var_11 ? (arr_0 [1] [11]) : (arr_0 [18] [14])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 *= ((((min(1, 1))) ? (((arr_0 [16] [1]) ? 1 : (arr_0 [i_0] [i_0]))) : var_10));
            arr_4 [16] [19] [11] = ((+((-var_13 ? (arr_2 [12] [i_0] [i_0]) : ((var_17 / (arr_1 [10])))))));
            arr_5 [23] = ((((1 + ((1 ? (arr_0 [11] [1]) : var_7)))) >= (arr_3 [21])));
            var_20 = (min((((((4 ? var_13 : 80))) ? (!-97) : (max(0, (arr_0 [15] [7]))))), ((min(var_8, ((1 ? var_12 : var_14)))))));
        }
        arr_6 [13] |= (((((var_2 & var_2) ? (!var_7) : var_10))) ? -35 : ((~((~(arr_3 [12]))))));
        arr_7 [11] [0] = ((-(((arr_1 [i_0]) ? 1 : (arr_2 [1] [8] [11])))));
    }
    var_21 = (var_15 & var_15);
    #pragma endscop
}
