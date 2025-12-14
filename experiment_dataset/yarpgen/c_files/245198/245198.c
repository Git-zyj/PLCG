/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = ((((((~(arr_0 [11] [8]))) + 2147483647)) >> ((((var_1 ? var_13 : var_7)) + 132))));
        var_15 = ((-((var_0 ? var_2 : var_0))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 = (max(((min(((min(var_11, var_7))), (max((arr_1 [i_1] [i_1]), (arr_1 [4] [1])))))), ((var_8 ? (arr_3 [i_1]) : ((var_2 ? var_5 : (arr_0 [i_1] [i_1])))))));
        var_17 &= ((!((max(var_5, var_8)))));
        var_18 -= ((((max((((arr_4 [i_1] [8]) ? var_3 : var_10)), var_13))) ? ((((~var_9) ? (arr_1 [i_1] [i_1]) : ((max(var_4, (arr_3 [i_1]))))))) : (((max(var_2, var_12)) - var_13))));
        var_19 = ((!((max(((70 >> (45690 - 45665))), (((arr_4 [i_1] [i_1]) ? (arr_3 [9]) : var_9)))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_20 *= (((((((max(var_3, var_13))) ? var_5 : ((max(var_6, 94)))))) ? (min(((max(var_6, (arr_6 [i_2])))), (arr_4 [i_2] [4]))) : (min(var_10, (arr_4 [i_2] [10])))));
        var_21 += var_10;
        var_22 = (min(((19127 ? 109 : 5144716910863513061)), ((((arr_6 [i_2]) ? var_2 : (arr_6 [i_2]))))));
        var_23 = ((!(((((min(var_10, var_11))) ? (min(var_8, (arr_5 [i_2] [i_2]))) : (max(var_8, var_8)))))));
        var_24 = (max(var_13, (max((var_6 >> var_11), ((max((arr_1 [i_2] [i_2]), var_5)))))));
    }
    var_25 = (max(((((max(var_6, var_1))) ? var_8 : (var_1 >> var_11))), (((var_6 >> ((((var_10 ? var_6 : var_4)) - 26452)))))));
    #pragma endscop
}
