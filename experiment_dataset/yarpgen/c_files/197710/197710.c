/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((~((((var_0 | var_4) >= ((167 ? var_6 : var_5)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = var_8;

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_15 = (arr_5 [i_0] [i_0]);
            var_16 ^= (min((max((arr_5 [i_0] [2]), ((((arr_3 [3] [0]) || 99))))), (((arr_5 [i_0] [6]) | (((min(73, 50))))))));
        }
        var_17 = 172;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [14] [i_0] = ((var_10 ? (((((arr_1 [i_2]) * (arr_7 [i_0] [i_0]))) * ((((arr_4 [i_2]) / var_1))))) : (((((var_12 ? (arr_0 [i_0] [i_2]) : 1))) ? (arr_7 [i_0] [1]) : (((min(var_6, (arr_4 [i_2])))))))));
            var_18 = (min(var_18, 75571675));
            var_19 = var_11;
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_20 = (-(arr_12 [i_3]));
        var_21 = (max(var_21, (((var_11 ? ((((arr_12 [1]) ? (arr_11 [4]) : 23212))) : (((arr_11 [18]) ? var_12 : (arr_11 [18]))))))));
        var_22 = ((arr_12 [i_3]) ^ (arr_12 [i_3]));
        arr_13 [i_3] = var_7;
        var_23 ^= ((0 ? 39704 : -75571676));
    }
    var_24 = (max(var_24, var_8));
    var_25 = var_9;
    #pragma endscop
}
