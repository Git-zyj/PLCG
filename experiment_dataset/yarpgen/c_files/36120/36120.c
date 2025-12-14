/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_17 && (((214 ? var_10 : var_10))))) ? ((((!(~var_1))))) : 384005154));
    var_21 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [1] = (101 && (((384005133 ? 1138612062 : 1905341362))));
        arr_4 [i_0] [i_0] = (+(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))));
        var_22 = (min(var_22, (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 += (arr_6 [i_1]);
        var_24 = ((((max(((max(32, 45))), (arr_5 [i_1])))) ? (((0 ? (max(27, 3982784456)) : (arr_7 [i_1] [i_1])))) : (max(((((arr_7 [i_1] [i_1]) ? 0 : var_2))), (min(64097, (arr_6 [i_1])))))));
        arr_8 [i_1] = (arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_25 = (1103427467 == var_10);
        arr_11 [i_2] = 45;
        var_26 = (max(var_26, (arr_1 [i_2])));
    }
    #pragma endscop
}
