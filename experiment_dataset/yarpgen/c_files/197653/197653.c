/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_0;
    var_17 ^= ((((max(var_10, (~var_12)))) ? var_5 : (~var_14)));
    var_18 = var_9;
    var_19 = ((((((max(288230376151711743, var_1)) <= (9054 <= 15544901699855635131)))) <= -13912));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] [i_1] |= (13893 ^ var_15);
                var_20 *= (((13907 != 4095) ? 29892 : (!1526411916860055816)));
                var_21 = (13907 - 1757780950232084133);
            }
        }
    }
    #pragma endscop
}
