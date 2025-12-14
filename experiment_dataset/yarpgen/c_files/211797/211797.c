/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, ((((65535 ? var_3 : -3))))));
        var_17 &= (550993095 << 0);
        var_18 = (max(var_18, ((((((var_4 ? 54149 : -6383924765914723250))) ? (var_13 || var_14) : ((((arr_0 [2]) || (arr_2 [8] [i_0])))))))));
    }
    var_19 = ((~(~var_15)));
    #pragma endscop
}
