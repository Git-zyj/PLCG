/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_8 == ((min(var_0, var_14))))))) <= -var_4));
    var_17 = -var_4;
    var_18 -= ((max(9223372036854775807, -var_2)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, (((min(var_7, 0))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = 0;
                    var_21 ^= ((((max((-9223372036854775807 - 1), var_4))) ? ((((arr_3 [i_0] [i_0]) ? 0 : (arr_6 [i_1 - 3] [i_1] [i_1])))) : 65532));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_12 [i_3] = (max(((((!3) >= var_3))), (((arr_0 [i_3]) ? (-9223372036854775807 - 1) : 20))));
        var_22 -= ((!(((((arr_6 [i_3] [i_3] [i_3]) ? var_1 : 20))))));
    }
    #pragma endscop
}
