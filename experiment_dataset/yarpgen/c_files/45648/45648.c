/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max((((var_7 >> (247563007 - 247562995)))), -8406076170276531797))) ? var_8 : (min(0, (min(var_10, -25100)))));
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 ^= -242798632835413116;
        var_14 *= 242798632835413116;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((~(((max(-30744, 2066937961575053742)) % (arr_2 [16])))));
        var_15 += (max(113, (arr_2 [i_1])));
    }
    #pragma endscop
}
