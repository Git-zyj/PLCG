/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((2064150067292382825 ? (min((34932 || var_10), ((3 ? 4769133740752665368 : -46)))) : (max(var_2, (((var_2 ? 3355366194 : var_6)))))));
                var_12 = (min(((((~(-9223372036854775807 - 1))) | (((-44 ? var_9 : 1391156117))))), (((((max((-127 - 1), (arr_2 [18] [18])))) ? 23575 : (arr_0 [i_0]))))));
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
