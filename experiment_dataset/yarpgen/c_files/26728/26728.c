/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((var_7 ? ((max(var_10, var_16))) : var_15))));
    var_20 -= (min((max(4294967295, var_14)), var_0));
    var_21 -= ((var_5 ? var_14 : var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_22 = ((12083 << (648701227235919360 - 648701227235919346)));
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_23 = (max(var_23, (~var_11)));
        arr_8 [i_1] = (~var_12);
        arr_9 [i_1] [18] |= (max(4582118535265210427, 18446744073709551604));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_14 [1] &= ((((((arr_12 [8] [i_2 + 1]) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2 + 1] [i_2 - 1])))) ? ((~(arr_7 [i_2 - 3] [i_2 + 3]))) : (arr_12 [16] [i_2 + 1])));
        arr_15 [i_2] [i_2 + 1] = (((((arr_12 [i_2] [i_2 - 1]) <= (arr_12 [i_2] [i_2 - 1]))) && ((min((arr_12 [i_2] [i_2 - 1]), (arr_12 [i_2] [i_2 - 1]))))));
        arr_16 [i_2] = (min(255, 26182));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        arr_19 [i_3 + 3] = (-30 <= 1557164054440146285);
        arr_20 [4] [4] = (arr_7 [i_3 + 1] [i_3 + 2]);
        var_24 = (max(var_24, (!35)));
    }
    var_25 -= var_6;
    #pragma endscop
}
