/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (~9237136725803067044);
                var_19 = (((((((var_18 ? var_3 : 60)) * (!var_6)))) ? (8734647 <= -60) : -14534));
                var_20 = ((((((min(var_17, 1))) && var_14)) ? 60 : ((~((var_13 ? 13755485286200335571 : 8734648))))));
                arr_7 [i_0] [i_1] = var_16;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = (((-50 ? -2147483628 : var_9)));
        arr_11 [i_2] = (((18243254991774035393 > 2147483628) | (arr_4 [i_2])));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_2] [i_3] [i_3] = ((!(~-6551968869423564446)));
            arr_16 [i_2] [i_3] = var_15;
        }
        var_21 = (min(var_21, ((((-50 % -395148820) ? var_1 : (arr_8 [16]))))));
        arr_17 [i_2] = ((-(arr_12 [i_2])));
    }
    #pragma endscop
}
