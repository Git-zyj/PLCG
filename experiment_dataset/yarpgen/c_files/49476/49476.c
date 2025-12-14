/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((min(21403207, -21403213))) || (21403224 == -1790700978)))));
    var_13 = (((var_2 + 2147483647) << ((((((~(max(2147483629, var_1)))) - -2147483641)) - 10))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((((max(((-116 != (arr_3 [i_0]))), (!-1)))) != (max((min(1790700981, -21403219)), (max(-1790700982, (arr_5 [i_0] [i_0])))))));
                var_15 = (min(var_15, (((-((-(min((arr_1 [i_0] [i_0]), 21403210)))))))));
            }
        }
    }
    var_16 = (max(((-((-65 ? -5 : 116)))), -7));
    #pragma endscop
}
