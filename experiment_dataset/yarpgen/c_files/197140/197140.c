/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0]) ? 182 : var_9))) ? var_7 : var_3));
        arr_3 [i_0] = (((((var_2 ? ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : 0))) ? ((-(((arr_1 [10] [10]) ? (arr_1 [i_0] [13]) : (arr_1 [i_0] [i_0]))))) : -1621921952));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = ((var_9 ? (arr_7 [9] [i_1]) : ((5866 ? (arr_7 [i_1] [i_1]) : 57332800))));
        var_10 *= ((((((arr_1 [0] [i_1]) ? (arr_7 [i_1] [4]) : (((0 ? var_7 : (arr_4 [i_1]))))))) ? (arr_1 [1] [i_1]) : ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_11 [4] = (arr_6 [12] [i_2]);
        arr_12 [i_2] &= (((((57332800 ? (arr_0 [i_2]) : 35))) ? 1 : (min(var_1, 144))));
        var_11 |= var_3;
    }
    var_12 ^= ((((min((min(var_4, var_8)), var_8))) ? var_8 : (((-4590440139590307382 ? var_1 : (~var_3))))));
    #pragma endscop
}
