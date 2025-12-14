/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((1470214875 ? var_4 : var_11)) >> (104 - 71))), ((((((var_3 ? var_0 : 1536659104))) ? var_12 : (-111 && 12126555016853479634))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = 4294967288;
                var_17 ^= ((max((max(var_8, 6320189056856071982)), ((14843294734956728520 ? 12126555016853479634 : 49636)))));
                var_18 = ((((12126555016853479634 ? ((6320189056856071983 ? 422586314 : 17391038767375886436)) : 14057))) || ((!(((4294967292 ? 18446744073709551615 : 3))))));
            }
        }
    }
    var_19 |= 1;
    #pragma endscop
}
