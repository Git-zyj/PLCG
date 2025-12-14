/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (11369216962153919180 + 29048);
    var_17 = (max(-var_4, (((~(max(7680, 4294967295)))))));
    var_18 *= (!var_5);

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_19 &= (--94);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = 0;
        arr_6 [i_1] = -4509792527803724192;
        var_21 = (min(var_21, (!29027)));
    }
    var_22 = ((var_1 ? (-2579832653816168931 * 0) : var_13));
    #pragma endscop
}
