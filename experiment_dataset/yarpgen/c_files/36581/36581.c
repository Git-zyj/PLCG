/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [1] = (((((((arr_1 [i_0] [i_0]) >= (arr_0 [i_0]))))) ? ((((arr_0 [i_0]) || (arr_0 [0])))) : (((var_8 ^ ((((arr_1 [i_0] [i_0]) ? var_4 : var_5))))))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] [8] [6] = 8132285544777942193;
            var_13 *= ((((arr_1 [i_1 - 1] [i_1 - 2]) ? (((max((arr_3 [i_0] [i_0] [i_0]), var_5)))) : (min((arr_1 [i_1] [i_1]), 502535377)))) - ((max((((arr_0 [i_0]) ? -43 : (arr_0 [i_0]))), -var_10))));
            var_14 = (max(var_14, ((max(((min((!var_11), var_5))), ((~(arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))))));
            arr_6 [i_1] = ((((max(((0 ? var_9 : (arr_1 [i_0] [i_1]))), (~var_11)))) ? var_12 : 8132285544777942175));
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_15 *= (arr_7 [i_2]);
        arr_10 [i_2] = ((~(arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_16 = ((((((arr_0 [i_3]) ? (arr_4 [i_3] [0] [i_3]) : (arr_4 [i_3] [i_3] [i_3])))) ? (((arr_4 [i_3] [i_3] [i_3]) ? (arr_1 [i_3] [i_3]) : (arr_1 [10] [i_3]))) : (((arr_4 [0] [i_3] [i_3]) ? (arr_4 [i_3] [i_3] [0]) : (arr_0 [i_3])))));
        arr_13 [i_3] [i_3] = (((((1796 ? -50 : (arr_8 [i_3])))) ? ((((-119 >= ((var_1 ? 1 : var_0)))))) : (min(255, (((arr_7 [i_3]) ? (arr_8 [i_3]) : (-2147483647 - 1)))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        var_17 = (((arr_7 [i_4 + 4]) ? (arr_0 [i_4 + 3]) : -var_4));
        var_18 = (min(var_18, 1490233579));
    }
    var_19 = var_0;
    #pragma endscop
}
