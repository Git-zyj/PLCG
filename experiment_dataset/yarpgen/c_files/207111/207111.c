/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((14993085679355807240 ? 16383 : 63)) ^ 0));
        arr_3 [i_0] = (((((arr_1 [i_0]) + 9223372036854775807)) >> 23));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [i_1 + 2] = (((max((arr_4 [i_1 + 1]), (arr_4 [i_1])))) & (((arr_4 [i_1 - 2]) ? 1180384782 : (arr_4 [i_1 - 2]))));
        arr_9 [i_1] = (((((arr_6 [i_1 - 2]) <= (arr_7 [i_1 - 2]))) ? ((min((arr_4 [i_1 + 4]), (arr_4 [i_1 + 2])))) : (arr_4 [i_1 + 1])));
        arr_10 [i_1 + 3] = (((-1180384760 > 1) ? (max((((arr_7 [i_1 - 1]) ? var_11 : 0)), (arr_4 [i_1 + 1]))) : (((((((arr_0 [i_1]) ? (arr_5 [i_1]) : -5732))) ? 30352 : var_14)))));
    }
    var_19 = -8720823928496083895;
    #pragma endscop
}
