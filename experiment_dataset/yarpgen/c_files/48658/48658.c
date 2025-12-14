/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_8 >> (-1 + 30)))) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) ? var_1 : -7))));
        var_12 ^= (((var_11 ^ -3) << (((arr_0 [i_0]) - 9623618979508594104))));
        arr_3 [i_0] = (((((-1 ? var_10 : -1))) ? ((((!(arr_1 [i_0]))))) : (arr_0 [i_0])));
        var_13 ^= (((((var_4 <= (arr_1 [i_0])))) >> (var_11 - 9885006135188953539)));
    }
    var_14 = (min(var_9, (var_3 == var_5)));
    var_15 = var_1;
    var_16 *= (((max((~var_1), ((13881141307543477106 ? 2 : var_11)))) > var_1));
    #pragma endscop
}
