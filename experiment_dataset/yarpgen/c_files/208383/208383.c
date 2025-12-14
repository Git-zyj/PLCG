/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 ^= (((((min(var_8, var_2)))) ? (((arr_1 [i_0]) / 1164439144295525918)) : var_3));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 -= (max((((arr_1 [i_0]) ? (min((arr_2 [i_1] [3]), 4611123068473966592)) : (((arr_3 [0]) ? (arr_2 [i_1] [5]) : var_5)))), (((arr_1 [i_0]) | (arr_2 [i_0] [i_0])))));
            arr_4 [8] [8] [i_1] = 31;
            var_14 = arr_0 [i_0];
            arr_5 [i_0] [i_1] = (~-92);
            var_15 -= 8192;
        }
        var_16 = -1164439144295525918;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 += ((((min((((arr_6 [i_2]) ? -1164439144295525918 : (arr_7 [i_2] [14]))), (var_8 / 16965)))) ? (((min((arr_6 [i_2]), 2048)))) : (min(((31085 ? (arr_7 [i_2] [10]) : (arr_7 [16] [18]))), ((min((arr_7 [i_2] [2]), (arr_6 [i_2]))))))));
        arr_8 [i_2] [i_2] = ((((min((arr_6 [i_2]), (max((arr_7 [i_2] [i_2]), 6956843485803892927))))) ? ((min(24193, 34468))) : ((min(1164439144295525931, (arr_6 [i_2]))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_11 [i_2] = (((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_3])));
            arr_12 [i_2] [i_2] [i_2] = (arr_7 [i_2] [i_2]);
            var_18 = (((-1164439144295525930 < (arr_10 [i_2] [i_2]))) ? (arr_10 [i_2] [i_2]) : -1164439144295525931);
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            var_19 = min((((((-(arr_10 [i_2] [i_2])))) / var_3)), (arr_6 [i_2]));
            var_20 += ((!((((arr_6 [i_2]) & 8796093022207)))));
        }
        arr_15 [i_2] [i_2] = (min(31085, (arr_14 [i_2] [i_2] [i_2])));
        var_21 = (max(var_21, (arr_10 [i_2] [16])));
    }
    var_22 -= var_9;
    var_23 = var_5;
    #pragma endscop
}
