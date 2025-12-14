/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_0;
                var_15 = (max((((((max((arr_0 [i_0]), var_8))) == var_3))), ((((62 < (arr_4 [i_1]))) ? var_7 : (arr_4 [i_0])))));
                arr_6 [i_0] [i_0] [i_0] = 17005560482264344144;
                var_16 ^= (max(((281474976710656 != (arr_1 [i_1 - 4] [i_1 + 1]))), (((var_9 * var_5) != var_7))));
            }
        }
    }
    var_17 = (-(max((281474976710680 - 647235477), (18446462598732840945 - 281474976710658))));
    var_18 += (max(var_5, (max(var_2, (var_8 - var_3)))));
    #pragma endscop
}
