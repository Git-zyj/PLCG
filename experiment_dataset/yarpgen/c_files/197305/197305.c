/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_11 = (max(var_11, (((~(arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_12 &= (arr_3 [14]);
        var_13 = ((((((!(arr_3 [i_1]))))) / (arr_4 [i_1])));
        var_14 = (arr_4 [i_1]);
        var_15 = (max(var_15, ((((((arr_4 [10]) ? (arr_4 [16]) : -32761)) <= 1)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 += arr_5 [i_2];
        var_17 += (((!1720909306) ? (((var_9 && (arr_8 [i_2])))) : (((!(arr_8 [i_2]))))));
        var_18 = (((1514424580 ? 4294967295 : 4294967295)) <= (((((var_5 ? 32767 : (arr_7 [i_2])))) - (min(var_9, var_9)))));
        arr_9 [i_2] [i_2] = var_0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_19 = -5107;
        arr_13 [i_3] = -var_5;
        var_20 = (!(((32763 ? 255 : (-9223372036854775807 - 1)))));
        arr_14 [i_3] [i_3] = (arr_12 [i_3]);
    }
    var_21 = ((((min(var_9, (max(15565, var_9))))) ? (((max(var_7, 16701714653388291392)) | var_7)) : (((((var_0 ? var_9 : var_4))) | var_5))));
    var_22 = (((((var_4 ? var_7 : var_2))) ? (252 * var_7) : ((((var_2 ? var_3 : var_6))))));
    #pragma endscop
}
