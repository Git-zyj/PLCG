/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_9))) ? (((14 / var_4) ? -11871 : (arr_0 [1]))) : (((var_10 ? (arr_1 [i_0]) : var_10)))));
        arr_4 [i_0] = (((arr_1 [i_0]) ? ((((var_7 > -11871) ? 2181708418 : ((var_1 >> (-45 + 60)))))) : (((-4653990897415956989 < -10665) ? (arr_1 [i_0]) : ((var_8 << (4294967295 - 4294967262)))))));
        arr_5 [i_0] [i_0] = 2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = 32752;
        var_15 = 245;
        var_16 = (((arr_6 [i_1] [i_1]) ? var_6 : ((var_11 ? 32752 : 65533))));
        var_17 = ((80 ? var_9 : var_0));
        var_18 = 1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_19 = arr_12 [i_2];
        arr_13 [i_2] = ((((var_9 ? var_9 : 6401386062471637723)) / (56 < 7914573973362265329)));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (min(var_20, 3007776507));
            var_21 = ((10 ? ((~(arr_7 [i_2] [i_3]))) : 11));
            var_22 = (arr_15 [i_3]);
            var_23 *= ((var_7 ? (-7914573973362265331 % 40) : (((var_4 ? 36 : 1)))));
            var_24 = ((-32752 ? (((-247238669024894538 + 9223372036854775807) >> 1)) : var_11));
        }
    }
    var_25 = var_12;
    #pragma endscop
}
