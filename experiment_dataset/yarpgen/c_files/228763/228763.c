/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 = -1;
        arr_3 [i_0] = (-(arr_0 [i_0]));
        var_17 = (arr_1 [i_0]);
        var_18 = (var_7 ? (arr_1 [i_0]) : var_1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 *= var_15;
        var_20 = (((arr_1 [i_1]) ? ((((arr_4 [0]) && (arr_6 [i_1])))) : (!2194160614)));
        arr_7 [2] = (arr_1 [i_1]);
        arr_8 [i_1] = ((((((arr_2 [17] [i_1]) ? var_0 : (arr_6 [i_1])))) ? (arr_5 [i_1]) : var_15));
        var_21 &= (((((arr_0 [i_1]) ? var_10 : var_6)) * (3694158468902388727 || 1)));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = (var_13 && (((((var_11 ? 9223372036854775803 : var_5)) | (((var_0 ? -18059 : 2100806699)))))));
        arr_13 [i_2] = ((-(-54 >= 1)));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_16 [i_3] = (-(min(var_10, (arr_4 [i_3 - 1]))));
        var_22 = (((arr_10 [6]) + 1));
        var_23 = (max(var_14, (min(0, 4294967295))));
        var_24 = (((var_0 | (arr_9 [i_3] [i_3]))));
        arr_17 [8] |= ((((((36028792723996672 ? 4 : 8))) ? (((arr_1 [i_3]) ? (arr_0 [i_3]) : (arr_14 [6] [i_3]))) : (((arr_6 [i_3]) ? (arr_14 [9] [7]) : var_2)))));
    }
    var_25 ^= (~2872447556);
    var_26 = var_4;
    #pragma endscop
}
