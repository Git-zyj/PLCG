/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = ((2 / (arr_0 [i_0])));
        var_15 = (((((~(arr_0 [i_0])))) && (144 + var_0)));
        arr_2 [i_0] [i_0] |= (((arr_0 [i_0]) ? (arr_0 [i_0]) : (!var_8)));
        var_16 = ((-(arr_1 [i_0])));
        arr_3 [i_0] |= (254 + var_12);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_17 = (max(((((((arr_4 [i_1]) || 72))) << ((((~(arr_4 [i_1]))) + 257)))), (((arr_5 [i_1 - 1] [i_1 - 1]) + (arr_5 [i_1 - 2] [i_1])))));
        arr_7 [i_1] = ((((!(arr_4 [i_1]))) ? (251 && 168) : (arr_4 [10])));
        arr_8 [i_1 + 1] = (((arr_4 [i_1 + 1]) > (arr_4 [i_1 - 2])));
        arr_9 [i_1] [i_1] = 255;
        arr_10 [i_1] [i_1 + 1] = ((!((((!(arr_4 [i_1])))))));
    }
    var_18 = var_7;
    #pragma endscop
}
