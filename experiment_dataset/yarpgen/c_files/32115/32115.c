/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 &= (((~var_7) ? (116 | -2821) : ((~(arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = 2066650284;
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_11 = (((arr_0 [i_0] [i_0]) ? (var_2 && -2800) : (!var_3)));
            var_12 = var_0;
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_2 - 2] = var_5;
            var_13 |= ((((((arr_7 [2] [i_2 - 1] [i_2]) ? var_3 : (arr_1 [i_0] [i_2])))) ? (arr_8 [i_2 + 2] [i_2] [i_2]) : (((arr_7 [i_2] [i_0] [i_0]) * (arr_8 [i_0] [i_2 - 2] [i_2])))));
            var_14 = (arr_0 [i_2 + 1] [i_2 + 1]);
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_15 = (-2147483647 - 1);
            arr_13 [i_0] [i_0] [i_0] = 2066650284;
            var_16 &= (((arr_7 [i_3 + 2] [i_3 + 1] [i_3 + 1]) ? (arr_7 [i_3 + 2] [5] [i_3 + 1]) : (arr_7 [i_3 + 2] [i_3] [i_3 + 1])));
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_0] [i_0] [0] |= (arr_11 [i_0]);
            var_17 = var_4;
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_18 = (((((-(arr_17 [i_5]))) ? (arr_12 [4] [i_5]) : (arr_6 [i_5] [i_5]))));
        arr_20 [i_5] |= 2066650283;
    }
    var_19 = ((var_6 <= (-32767 - 1)));
    #pragma endscop
}
