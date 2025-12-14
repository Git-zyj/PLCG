/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((-907707244 ? 2294577958 : 907707243));
                var_19 = (max((max(4305195215399802500, (((-907707238 ? 524256 : -907707244))))), ((((arr_4 [i_1 - 1] [i_1]) ? (-907707243 / -907707243) : 60)))));
                var_20 = (~1);
                var_21 = (min(var_21, ((~((((min(0, (arr_2 [i_0])))) ? (((((arr_2 [i_0]) == (arr_5 [i_0] [i_0]))))) : (((arr_0 [i_0]) ? -78 : (arr_0 [0])))))))));
            }
        }
    }
    var_22 = -28148;
    var_23 = max(((907707243 ? 18446744073709551615 : -93)), 9223372036854775808);
    #pragma endscop
}
