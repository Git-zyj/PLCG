/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_0 ^ var_3) ? (((49 == ((-1 ? var_2 : 26830))))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 1] = (((((!((((arr_5 [i_0] [i_1]) ? 2452365918718457771 : (arr_2 [i_0]))))))) << 5));
                var_16 = (min(var_16, (arr_6 [i_1] [i_1 + 1] [i_1 + 1])));
                var_17 = (((((15994378154991093846 ? -3 : 13))) && ((min((arr_1 [i_1 - 1] [i_1 + 1]), 9)))));
            }
        }
    }
    var_18 ^= (max((((((min(var_6, 168))) ? (var_0 ^ var_9) : 1))), -var_13));
    var_19 = (max(var_19, -var_13));
    var_20 = var_7;
    #pragma endscop
}
