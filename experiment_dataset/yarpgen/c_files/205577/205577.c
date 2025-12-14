/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((((((9460820982478072167 & 9460820982478072167) ? (min(var_11, (arr_1 [i_0]))) : var_8)) + 9223372036854775807)) << ((((((((((arr_2 [12] [i_0]) ? (arr_2 [0] [19]) : (arr_2 [1] [i_0])))) ? -var_0 : (arr_0 [i_0] [i_0]))) + 12248)) - 41))));
        arr_3 [i_0] [i_0] = (((((-9460820982478072191 && (~var_8)))) > (((arr_0 [i_0] [i_0]) + (((arr_0 [22] [i_0]) ? var_10 : (arr_0 [i_0] [i_0])))))));
        var_18 = ((((8985923091231479449 - (((arr_0 [i_0] [i_0]) ? (arr_2 [12] [i_0]) : (arr_0 [i_0] [i_0]))))) >> ((((var_5 < var_4) > 8985923091231479449)))));
    }
    var_19 ^= var_9;
    var_20 = ((2570030495650914900 ? var_1 : (9460820982478072167 & 109)));
    #pragma endscop
}
