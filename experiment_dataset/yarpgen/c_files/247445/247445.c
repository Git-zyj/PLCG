/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -1999189305;
    var_16 = (max(var_16, ((min((((((109 ? var_3 : var_1))) ? var_0 : var_1)), ((-1999189305 ? 1 : 1999189314)))))));
    var_17 ^= var_11;
    var_18 |= ((((min((max(1999189310, 12)), var_0))) && 242));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = 0;
                var_20 = (arr_0 [i_1]);
                var_21 = var_7;
                var_22 = (min((arr_6 [i_1 + 1] [i_1 - 2]), (min(-1907071479, -1907071492))));
            }
        }
    }
    #pragma endscop
}
