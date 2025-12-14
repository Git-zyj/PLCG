/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ? ((var_13 ? ((var_11 ? var_0 : var_12)) : (((-2147483647 - 1) / var_2)))) : ((((var_10 ? var_12 : var_3)) * 3705947709))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 ^= ((223 / (arr_1 [i_0 - 1])));
            var_17 = (((arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]) / 23));
            var_18 = (((((var_0 ? var_13 : (arr_2 [i_0] [i_0])))) ? (((arr_2 [i_0] [1]) ? var_0 : var_6)) : (((var_7 ? var_12 : (arr_1 [i_0]))))));
            arr_6 [i_0] [i_1] [i_1] = (((arr_3 [i_0 + 1] [i_1] [10]) ^ ((((arr_2 [i_1] [i_0]) / (arr_0 [i_1]))))));
            arr_7 [i_0] [i_1] = (((33 & 242) ? var_13 : (((-127 - 1) & var_11))));
        }
        var_19 ^= ((((var_8 ? (arr_2 [i_0] [1]) : (arr_5 [i_0] [i_0] [i_0]))) | (((227 ? (arr_1 [i_0 - 1]) : (arr_2 [i_0] [i_0]))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_20 = (((((!(arr_9 [i_2]))))));
        arr_10 [i_2] = (((min((arr_8 [i_2]), (((0 ? 232 : (arr_9 [i_2])))))) ^ 29));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_21 = ((!(arr_12 [15])));
        var_22 |= ((0 & ((((((arr_13 [i_3]) / (arr_13 [i_3 - 1])))) ? 0 : (arr_12 [i_3 - 1])))));
        arr_14 [i_3] = ((!((max((arr_9 [i_3 - 1]), (~var_3))))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        arr_18 [i_4] = (min(((min((arr_8 [i_4 + 2]), (arr_8 [i_4 + 1])))), (((arr_8 [i_4 - 1]) | 6266031827675022948))));
        arr_19 [i_4] [i_4] = 28672;
        var_23 = (max(var_23, var_5));
        var_24 = 1;
    }
    var_25 ^= 1;
    #pragma endscop
}
