/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= ((!((max((~89), ((1 ? 18446744073709551615 : 69787961)))))));
        arr_5 [i_0 + 1] = (~0);
    }
    var_20 = (((66 && 1) * ((var_10 ? ((var_5 ? var_7 : 7535349017821746931)) : (var_7 % var_11)))));
    #pragma endscop
}
