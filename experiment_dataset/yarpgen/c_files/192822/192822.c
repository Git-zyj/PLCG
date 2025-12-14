/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 += (arr_1 [i_0]);
        arr_2 [i_0] = ((+((+(((arr_1 [i_0]) ? 10980091915170911734 : var_11))))));
        arr_3 [i_0] = ((var_4 ? (arr_1 [i_0]) : 1));
        arr_4 [i_0] [i_0] = (var_11 / var_11);
        arr_5 [i_0] = ((max((((10472 >> (233143212 - 233143185)))), (arr_0 [i_0]))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (min((((~((10472 ? (arr_7 [i_1 - 3] [i_1]) : 65535))))), ((var_12 ? ((((!(arr_7 [i_1] [i_1]))))) : ((-10472 ? var_13 : var_3))))));
        var_15 = ((((((min(32767, var_13))) ? ((281474976710655 ? -10473 : 18446462598732840981)) : ((max(4294967295, var_7)))))) ? var_13 : ((min(((18446744073709551615 ? -10472 : 7628084330075909173)), (arr_7 [i_1] [i_1])))));
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2 - 1] = (arr_9 [i_2 + 2] [i_2 - 1]);
        var_16 = var_2;
        var_17 |= (arr_9 [i_2 - 1] [i_2]);
        arr_12 [i_2] [i_2] = ((33176 ? -1519333367 : 65535));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_18 = ((-1464387076 ? (max(0, var_10)) : 0));
        var_19 = var_5;
        var_20 ^= var_5;
        arr_16 [i_3] = 1421823672579674980;
    }
    #pragma endscop
}
