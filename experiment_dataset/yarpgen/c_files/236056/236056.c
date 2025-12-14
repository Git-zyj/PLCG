/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_18 *= (((-9223372036854775807 - 1) ? var_4 : 36));
        var_19 = ((4611686018427387904 ? 58 : (arr_0 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = (max(var_20, ((-(((arr_3 [12]) ? -1 : (arr_2 [i_1])))))));
        var_21 = (((((arr_2 [i_1]) ? 9 : (arr_4 [i_1]))) > var_0));
        arr_6 [i_1] [i_1] = arr_2 [i_1];
    }
    var_22 = (max(((-(max(var_6, -15)))), ((7037468846257273880 ? ((227 ? 34 : -4735605838726957274)) : var_6))));

    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = 10;
        var_23 += ((((max((!var_11), (var_11 + 0)))) ? 78 : (max((~-6866621769991501623), (24 & 7639024124883781315)))));
        arr_10 [i_2 + 1] = -16;
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (arr_7 [i_3])));
        arr_13 [i_3] [i_3] = ((((-1 ? (!29) : 76)) & ((((9 != 255) == (arr_1 [i_3 + 1] [i_3]))))));
        arr_14 [i_3 + 1] [i_3] = ((((((~234) ? var_15 : (max(8845211051722887116, -2025495290700600178))))) ? (((max(11, var_4)) / 1018829740080015462)) : (~41)));
    }
    #pragma endscop
}
