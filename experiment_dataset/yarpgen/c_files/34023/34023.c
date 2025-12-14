/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -8;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0 - 1] = ((~(arr_0 [i_0 - 2])));
        var_13 = (max(var_13, (arr_1 [12] [12])));
        arr_5 [i_0] = (1103 ^ -1334750738);
    }
    var_14 = (max(var_14, var_7));
    var_15 = ((-((max(var_4, var_2)))));
    var_16 = ((-1334750733 ? ((((max(var_11, 15392193259159499026)) == (((max(var_11, 0))))))) : var_1));
    #pragma endscop
}
