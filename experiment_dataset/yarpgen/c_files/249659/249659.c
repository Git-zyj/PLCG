/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? 1 : 3597168222));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (min(((min(0, (!1)))), ((1 ? ((1 ? 15402 : 1)) : 1))));
                var_17 = (((((50116 ? ((((arr_0 [i_0] [15]) == 15416))) : ((min(1, 1)))))) || (((((1073741823 ? 48776597 : 19952))) || ((min(0, var_8)))))));
            }
        }
    }
    var_18 = ((min(((4574 ? 4294967295 : 1)), 3221225476)));
    #pragma endscop
}
