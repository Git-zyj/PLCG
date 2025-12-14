/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (arr_1 [i_1 + 3]);
            arr_7 [i_1] = (arr_5 [i_1 - 4] [i_1 + 3]);
        }

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] [i_2] = (((~1) ? var_11 : 6));
            arr_12 [i_0] [1] [i_0] = (((((var_6 ? 4294967292 : (arr_8 [i_0] [i_2] [i_0])))) ? 32765 : var_4));
            arr_13 [i_0] = (arr_1 [i_0]);
            arr_14 [i_2] = 1;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_19 [i_3] [i_0] [i_3] = ((~0) ? var_5 : (((arr_0 [i_0] [1]) / var_1)));
            arr_20 [0] [i_3] [i_0] = ((~(arr_2 [i_0] [i_3] [i_3])));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_24 [i_4] = ((var_11 ? (14409 ^ 800303805) : var_6));
        arr_25 [i_4] [7] = 28;
        arr_26 [1] = 0;
    }
    var_12 = 65529;
    var_13 = (min(var_7, var_5));
    #pragma endscop
}
