/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [15] = (((((3713679704317059210 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))) ? (~var_4) : ((((var_10 && (arr_0 [i_0] [i_0]))) ? ((var_4 ? (arr_1 [3]) : var_8)) : ((~(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((var_7 ? ((-29915 ? (((688133177 ? 1 : 0))) : -1)) : ((((40 >= 6413008414893361678) ? -419636608 : 1)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_13 = (((arr_5 [i_1]) * (1 != var_12)));
        var_14 = ((((((min(1, (arr_5 [13]))) ? (arr_4 [12]) : -65535))) ? (((-10726652142681153316 == (((var_6 ? var_3 : var_3)))))) : (((((-(arr_1 [i_1]))) >= (((var_1 == (arr_1 [i_1])))))))));
        var_15 = ((var_8 ? ((7 ? (!1) : ((16383 ^ (arr_5 [i_1]))))) : ((var_11 + (arr_5 [i_1])))));
    }
    var_16 = var_6;
    #pragma endscop
}
