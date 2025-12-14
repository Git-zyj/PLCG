/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_10, (((var_9 ? (var_2 <= var_11) : (-31 || 117))))));
    var_17 = (min(((((var_11 == 1705159441) ? var_5 : (~-127)))), (min(var_8, var_11))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_18 = ((((((((arr_0 [i_0] [i_0]) + var_11))) ? 7 : 2438436785)) + (min(((var_6 ? 183235317 : (arr_0 [i_0] [i_0]))), (((108 ? 110 : -72)))))));
        var_19 = ((2 % (((((16 + (arr_0 [i_0] [i_0])))) ? (arr_3 [i_0 + 1]) : 2620660288))));

        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            var_20 = (min(var_20, 64));
            var_21 = (((~121) ? ((~(max(4294967290, 103)))) : ((311162432 | (var_14 | var_15)))));
            arr_8 [5] [7] [i_1] = ((4294967291 ? (max((arr_0 [i_0] [i_0]), ((~(-127 - 1))))) : ((~(127 != -50)))));
        }
        arr_9 [5] [0] = (((93 || -120) << (((arr_6 [i_0] [i_0] [i_0]) - 394217663))));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_22 = (max(4018705481, (((arr_7 [0] [i_2]) & (1392713533 | -37)))));
        var_23 = (min(var_23, (((((~(arr_5 [6]))) >= ((~((max(-6, var_11))))))))));
        var_24 = min((arr_0 [i_2] [i_2]), (min(4294967289, 3)));
    }
    #pragma endscop
}
