/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((15 ^ -1775676290) + 2147483647)) << 0));
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = var_6;
                var_16 |= (((-4168 ? (arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3]) : (arr_3 [i_1] [i_1] [i_0 - 1]))));
            }
        }
    }
    #pragma endscop
}
