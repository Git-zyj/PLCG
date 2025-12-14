/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (213 / var_14);
    var_18 = 255;
    var_19 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [3] [3] = arr_1 [i_0] [i_0];

        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            var_20 ^= (((arr_3 [i_1 - 2]) != (arr_3 [i_1 - 2])));
            arr_8 [i_0] [9] [1] = (-(arr_3 [i_1]));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_13 [i_2] [i_0] [i_0] = (220 != 11);
            arr_14 [i_2] = (((arr_11 [i_0]) != (!11)));
        }
        for (int i_3 = 2; i_3 < 6;i_3 += 1)
        {
            var_21 = (arr_3 [i_3 + 4]);
            var_22 = ((~(arr_15 [i_0])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_4] [i_4] = (arr_9 [i_4] [i_4]);
            arr_20 [i_4] = ((~(arr_17 [i_0] [i_0])));
            var_23 = (((((!(arr_1 [0] [0])))) != (arr_0 [i_0])));
            arr_21 [i_0] [i_4] [i_0] = ((var_3 / (arr_12 [i_4])));
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] = (((((~15) ^ (~21157))) | 211));
        var_24 = var_6;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_25 ^= ((((min(var_6, 247))) ? var_13 : ((~(arr_22 [i_6])))));
        var_26 = (arr_28 [i_6] [i_6]);
        arr_30 [i_6] = ((var_7 & (arr_22 [i_6])));
    }
    #pragma endscop
}
