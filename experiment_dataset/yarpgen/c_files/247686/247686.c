/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 -= ((-(arr_0 [i_0] [i_0])));
        var_20 = 8388607;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] = (max(4660440381424232647, (((arr_1 [i_1]) ? var_3 : (arr_2 [i_1])))));
        var_21 = (min(var_21, (((!((max((arr_2 [i_1]), ((13786303692285318957 ? var_8 : (arr_2 [i_1])))))))))));
        var_22 = (arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (max((((min(6643191246236214401, (arr_5 [i_2] [i_2]))) >> (var_7 + 5705006587574031990))), (arr_5 [i_2] [i_2])));
        var_23 ^= ((((((((arr_7 [i_2] [i_2]) / var_9))) ? (arr_5 [i_2] [2]) : var_5)) >> (((max((arr_5 [i_2] [i_2]), (arr_7 [i_2] [i_2]))) - 31754))));
    }
    var_24 *= min(((((var_17 * var_1) % var_10))), (((!-9707) ? var_12 : (max(var_11, var_16)))));
    #pragma endscop
}
