/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_20 = (arr_2 [i_0] [i_0 + 3]);
        var_21 -= (arr_0 [18]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_3 [i_1]);
        var_22 = (arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (arr_4 [8] [10]);
        var_23 = (arr_6 [i_2] [8]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_24 = ((-((-(arr_5 [i_3])))));
        arr_13 [i_3] = (((-(arr_6 [i_3] [1]))));
        arr_14 [i_3] = ((-(arr_9 [i_3])));
        arr_15 [i_3] &= (arr_8 [i_3] [i_3]);
        var_25 = -11;
    }
    var_26 = var_6;
    #pragma endscop
}
