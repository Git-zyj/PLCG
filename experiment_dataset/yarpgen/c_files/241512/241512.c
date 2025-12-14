/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= -918029221664957224;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_16 = (~-0);
        arr_3 [i_0 + 1] = ((((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = ((918029221664957209 ? ((~(arr_5 [i_1] [i_1]))) : (((arr_5 [i_1] [i_1]) / var_9))));
        var_18 = (((arr_1 [i_1]) ? var_2 : (max((max((arr_4 [12] [i_1]), (arr_1 [i_1]))), (arr_0 [i_1])))));
        arr_6 [i_1] = ((!(arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_19 &= (arr_4 [i_2] [i_2]);
        arr_10 [i_2] = (arr_5 [i_2] [i_2]);
        arr_11 [i_2] = arr_5 [i_2] [i_2];
        arr_12 [i_2] [i_2] = ((~(max(1, (max(-7715163224003480333, (arr_0 [i_2])))))));
        var_20 = (max(var_20, ((((+(((arr_5 [i_2] [11]) ? (arr_1 [i_2]) : var_2))))))));
    }
    var_21 = ((min(-var_1, var_4)));

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_22 = (max(var_22, (arr_1 [i_3])));
        var_23 = (((arr_4 [i_3] [1]) ? (min(-16777216, var_5)) : ((((((((!(arr_5 [i_3] [i_3]))))) == (arr_0 [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] = ((-(((arr_9 [i_4]) ? 287829403 : (arr_9 [i_4])))));
        arr_18 [i_4] [i_4] |= ((18446744073709551591 | (~4294967295)));
        var_24 -= arr_14 [i_4] [i_4];
    }
    #pragma endscop
}
