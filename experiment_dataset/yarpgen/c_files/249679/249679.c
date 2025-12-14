/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = ((~(((~3) ? (arr_1 [i_0] [i_0]) : 0))));
        var_15 ^= (((arr_0 [i_0]) > ((-1 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = (max(var_16, ((((-1 + 48) ? 27059 : (506680892385347221 | 1))))));
        var_17 = var_3;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] = (((((27 ? 0 : -1))) ? 102 : (arr_7 [i_2] [i_2])));
        var_18 ^= ((((min((((arr_2 [i_2]) && 34593)), (arr_6 [i_2])))) - 8695));
        arr_9 [i_2] [i_2] = ((var_2 / (~34593)));
        arr_10 [i_2] = (1 - 0);
    }
    var_19 = var_4;
    #pragma endscop
}
