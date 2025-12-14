/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(max((~var_6), -2124184587))));
    var_12 = (~var_5);
    var_13 = (max((((((min(31164, 2170782698))) ? 2170782727 : 2170782708))), 23602));
    var_14 = ((2170782687 ? var_10 : (var_6 * 2124184605)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [7] [i_0] = 2170782703;
        arr_5 [i_0] = ((var_9 ? -2170782704 : (arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = 2170782687;
        var_15 = (((arr_7 [i_1]) ? var_7 : (min(-8723124723878182898, (min(-26, (-9223372036854775807 - 1)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_16 &= 57108;
        arr_13 [i_2] [i_2] = -26;
        var_17 += 15909928260957379854;
    }
    #pragma endscop
}
