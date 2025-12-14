/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = (min(var_17, var_13));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 = (min(var_18, (((-9223372036854775807 - 1) ? 0 : (arr_2 [i_0 + 1] [i_0 + 2])))));
        var_19 += var_2;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                var_20 += (arr_3 [i_1] [10]);
                var_21 += (((((arr_9 [i_1] [i_3 + 1] [4]) ? (arr_9 [5] [i_3 + 1] [i_3]) : (arr_9 [20] [i_3 + 1] [15])))) ? var_12 : (arr_9 [i_1] [i_3 + 1] [i_3]));
                arr_11 [i_1] [i_2] [8] [8] = ((((((arr_4 [i_2] [i_2]) ? (arr_7 [i_2] [16]) : (((42939 ? 31283 : 13483)))))) ? (arr_8 [i_1]) : (arr_4 [14] [i_2])));
            }
            var_22 += (((arr_9 [i_1] [i_2] [i_1]) ? ((((((arr_10 [i_1] [i_1]) ? (arr_10 [i_2] [0]) : var_3))) ? (arr_9 [i_1] [i_1] [i_2]) : (((arr_9 [i_1] [i_2] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_9 [18] [i_1] [i_2]))))) : var_14));
        }
        var_23 += ((((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : var_11))) ? (arr_3 [i_1] [i_1]) : (((arr_3 [i_1] [7]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))));
        arr_12 [18] [i_1] = ((var_9 ? var_7 : ((var_2 ? (((arr_8 [i_1]) ? (arr_6 [i_1] [i_1]) : var_1)) : (arr_6 [2] [11])))));
    }
    #pragma endscop
}
