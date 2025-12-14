/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (-32767 - 1);
    var_16 = ((((32767 ? 63488 : ((var_11 ? var_9 : -32757)))) + var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = (max((max(6199271302177502924, 6563340479259297674)), (((9223372036854775807 || (arr_5 [i_0 + 1] [i_1 + 1]))))));
                var_18 = (max((((((max(32756, -32734)))) + ((1240341091 % (arr_0 [i_1 + 1]))))), ((min(-5160, -741166998)))));
            }
        }
    }
    var_19 = var_7;
    var_20 = var_3;
    #pragma endscop
}
