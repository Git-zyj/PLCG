/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_19 = var_13;
        arr_3 [i_0] = var_18;
        arr_4 [i_0] = ((~(max((arr_1 [i_0] [i_0]), ((~(arr_1 [i_0] [i_0])))))));
        arr_5 [i_0] = (max(((((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0])))), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 6;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_6 [i_1 + 4]);
        arr_8 [i_1] = (((arr_6 [i_1 + 2]) ? (arr_6 [i_1]) : (((arr_6 [i_1]) ? (arr_1 [i_1] [i_1 - 1]) : var_3))));
        var_21 = ((-(((4294967287 < (arr_1 [i_1] [i_1]))))));
    }
    for (int i_2 = 3; i_2 < 6;i_2 += 1) /* same iter space */
    {
        var_22 -= ((((70 ? (arr_9 [8]) : (arr_9 [0])))) ? (arr_9 [6]) : (((arr_9 [6]) - (arr_9 [8]))));
        arr_11 [i_2] = (min(((((((arr_7 [i_2]) - var_4)) & var_6))), (((arr_0 [i_2 - 3]) ? (max(2867266588, (arr_9 [i_2]))) : -var_10))));
        var_23 = var_0;
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_24 += (((!((min(-4, 160))))));
        var_25 = (min(var_25, (((-(arr_13 [i_3]))))));
        var_26 -= ((-(((arr_12 [i_3]) ? var_14 : ((18446744073709551615 ? 18446744073709551615 : (arr_12 [i_3])))))));
    }
    var_27 |= var_11;
    var_28 = ((var_9 ? ((-(24248 - 1427700709))) : ((((var_4 % var_10) ? var_11 : var_2)))));
    #pragma endscop
}
