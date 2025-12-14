/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((9223372036854775802 - var_12) ? (~-12134) : 18)));
    var_20 = (((~var_11) ? (((~180572334) ^ (~2147483647))) : 1695463007));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((11581369656378614655 > 80) ? 1 : (((((min(1, (arr_0 [i_0] [2])))) || (!9)))));
        var_21 ^= ((((((((~8887137571873757722) + 9223372036854775807)) << (62947 - 62947)))) ? ((32762 ? 9223372036854775794 : (!19))) : -1));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                var_22 = (~-10514);
                arr_8 [i_1] = (var_10 || 6865374417330936955);
            }
        }
    }
    #pragma endscop
}
