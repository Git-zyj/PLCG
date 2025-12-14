/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = (max(var_11, (arr_3 [i_0])));
        var_12 = ((((17529 * ((216 ? var_8 : 3144133801)))) >> (31 <= 4294967284)));
        var_13 = (max(var_13, (((((~(arr_3 [i_0])))) ? ((min(var_0, 31806))) : ((((arr_3 [i_0]) || (arr_3 [i_0]))))))));
    }
    var_14 |= ((2147483628 ? ((3577154183 ? 188 : 112)) : var_9));
    var_15 ^= max(var_0, ((15 << (((max(-772763315, 33)) - 14)))));
    #pragma endscop
}
