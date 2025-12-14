/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = ((-(arr_1 [i_0 + 2] [i_0])));
        arr_2 [i_0] [i_0] = (arr_0 [i_0 + 2]);
        arr_3 [i_0] = var_3;
        arr_4 [i_0] [i_0] &= (arr_0 [i_0 + 2]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((var_7 + (((arr_1 [i_1] [i_1]) - -13962))));
        arr_8 [i_1] [i_1] = ((~(!var_12)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_15 *= ((((~(arr_6 [i_2]))) & (((arr_10 [i_2] [i_2]) ? 199 : 184))));
        arr_11 [i_2] = (~var_12);
    }
    var_16 = var_5;
    #pragma endscop
}
