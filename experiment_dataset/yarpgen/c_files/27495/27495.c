/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((min(369924628, 123))), (var_2 >= var_11)));
    var_15 = 124;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((~(arr_0 [i_0])));
        var_17 = (((-30550 ? 147 : 65535)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 = (arr_7 [9]);
            arr_8 [12] [i_2] = (arr_4 [i_1]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_11 [13] [i_1] = 2147483647;
            arr_12 [i_1] [i_1] [1] = ((~((112 ? (arr_5 [i_1]) : -var_0))));
        }
        var_19 = (((-(arr_5 [i_1]))));
        var_20 *= ((min(2147483647, 140)));
        var_21 = (arr_6 [22] [i_1]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (arr_4 [i_4])));
        var_23 = (((((arr_6 [i_4] [15]) || (arr_3 [i_4]))) ? (arr_9 [i_4] [i_4] [i_4]) : (arr_10 [i_4] [i_4])));
        var_24 *= ((+((((-127 - 1) || 130)))));
        var_25 = (max(var_25, (arr_13 [i_4] [i_4])));
        arr_17 [i_4] = (((arr_5 [i_4]) / (arr_10 [i_4] [i_4])));
    }
    #pragma endscop
}
