/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 ^= (!18446744073709551615);
        arr_2 [i_0] [i_0] = 55;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_13 = (max(((((var_1 ? (arr_3 [8]) : (arr_6 [i_1] [i_1]))) == ((max(-50, var_0))))), (((arr_6 [i_1 - 1] [i_1 - 1]) || (arr_6 [i_1] [i_1])))));
        var_14 = (max(var_14, ((((-109 ^ 492876317) ? (-22104 == 108) : var_9)))));
        arr_7 [i_1] [i_1] = ((-25 ? (116 * 0) : 4227604781316844024));
    }

    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        var_15 -= (!(arr_9 [i_2 - 3]));
        var_16 = 255;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_17 = (max(var_17, ((((arr_9 [i_3 - 1]) ? (arr_10 [i_3 - 1]) : (arr_10 [i_3 + 1]))))));
        var_18 ^= ((-86 ? (var_4 <= 4253984204649973587) : (~109)));
    }
    var_19 = (max(var_19, var_10));
    var_20 *= var_5;
    #pragma endscop
}
