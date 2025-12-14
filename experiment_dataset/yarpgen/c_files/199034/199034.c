/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) == (arr_2 [i_0] [i_0])));
        var_13 = (((arr_0 [i_0]) * (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_14 ^= (min((47199 != var_6), (arr_1 [6])));
        var_15 = 15856850999799161272;
        var_16 = (((!166) * var_9));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 = (((((arr_4 [i_2]) ? var_8 : (arr_4 [i_2]))) <= ((((arr_4 [i_2]) != (arr_4 [i_2]))))));
        var_18 |= (arr_7 [i_2] [i_2]);
        var_19 = (((max(var_5, var_2)) << (((((-(arr_6 [11] [i_2]))) != ((((arr_2 [i_2] [i_2]) & var_7))))))));
        arr_9 [i_2] = (((max((arr_1 [i_2]), ((~(arr_8 [i_2] [i_2]))))) != (arr_0 [i_2])));
    }
    var_20 |= (((!(((var_2 << (1407183003400296327 - 1407183003400296311)))))));
    var_21 |= (max((min(-7599573244044318128, (var_10 / var_0))), ((var_2 ? (var_3 / var_6) : var_0))));
    #pragma endscop
}
