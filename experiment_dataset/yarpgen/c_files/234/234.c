/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((~-1) ? (((arr_5 [i_1 + 1] [i_1 + 1]) ? -2070364971 : (arr_5 [i_1 - 2] [i_1 - 2]))) : (((((arr_3 [i_0]) != (((var_6 ? -1075138709 : 1075138719))))))));
                var_14 = (max(var_14, ((var_6 + ((609579593 ? ((1075138715 ? -1562351539 : var_10)) : var_10))))));
                arr_7 [i_1] = (min((((arr_0 [i_0] [i_1]) ^ (1729105598 - var_0))), 609579593));
                var_15 = (min(2629293368, (2147483647 ^ var_1)));
            }
        }
    }
    #pragma endscop
}
