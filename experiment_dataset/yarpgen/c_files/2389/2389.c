/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [6] = ((-(arr_1 [i_0])));
        var_10 = ((((((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0])))) ? (arr_0 [13] [i_0]) : (arr_0 [11] [11])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_11 *= ((+((min((arr_6 [i_1]), (arr_6 [i_1]))))));
        var_12 = min(((~(arr_5 [i_1]))), (((~(arr_6 [i_1])))));
    }
    var_13 = var_5;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_14 = ((9090227283075885726 ? 508472345 : 8990019819204717901));
        arr_11 [i_2] = (arr_1 [i_2]);
        var_15 = (arr_7 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (((arr_1 [i_3 - 2]) << (((arr_1 [i_3 - 2]) - 31047))));
        arr_16 [i_3] = ((((((arr_2 [i_3]) ? (arr_12 [i_3 - 2]) : (arr_12 [i_3])))) || (arr_2 [i_3 - 2])));
    }
    var_16 = ((var_7 ? var_4 : ((22 ? 9090227283075885726 : 18446744073709551585))));
    var_17 = ((var_8 ? var_0 : ((-(max(18446744073709551615, 142))))));
    #pragma endscop
}
