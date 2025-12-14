/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = -8733289587702222326;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((min(var_2, (arr_5 [i_1]))))) ? ((((arr_1 [i_0 - 1] [0]) + (-2147483647 - 1)))) : ((min(-var_7, (arr_0 [i_0] [i_1 - 2])))))))));
                var_16 = var_9;
            }
        }
    }
    var_17 = (max(((var_2 ? var_10 : (~var_7))), ((var_0 ? -3074340140913843493 : -55))));
    #pragma endscop
}
