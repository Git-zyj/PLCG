/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 ? var_11 : ((((min(-11362, var_7))) ? -8990516258106080880 : var_1))));
    var_20 = ((max((var_8 <= 71), 43371)));
    var_21 = (max(var_8, (max(4275459838163859430, 34030))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_22 = (arr_1 [i_0]);
        var_23 = (!19157);
        var_24 *= (((((-21443 ? 21444 : (arr_2 [i_0])))) ? 32476 : (arr_0 [i_0])));
    }
    #pragma endscop
}
