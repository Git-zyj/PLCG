/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = 4262132301507126909;
        var_20 = (max(var_20, ((((arr_1 [i_0 + 1]) && var_5)))));
        var_21 = (~var_9);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_22 |= var_7;
                        arr_15 [0] [0] [i_3] = (min(-502477559, ((min((arr_9 [i_3 + 1] [i_1 + 1] [i_1] [i_1]), (arr_9 [i_3 - 1] [i_1 + 1] [i_1] [i_1]))))));
                    }
                }
            }
        }
        arr_16 [i_1] = ((~(min(var_8, 31744))));
        var_23 |= 1480059257;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    var_24 *= (~28672);
                    var_25 = (min(var_25, (((((arr_5 [i_1 + 1]) && var_3))))));
                    arr_23 [i_6] [i_6] = ((5003526701581392078 ? 108 : var_18));
                    var_26 = (min(var_26, 18410));
                }
            }
        }
    }
    var_27 = (min(var_27, -2038569713));
    var_28 = var_3;
    var_29 &= (5336409002938517028 / var_13);
    #pragma endscop
}
