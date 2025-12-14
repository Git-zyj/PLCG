/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_16 &= -var_5;
        var_17 |= (((arr_0 [i_0]) ? (((((min(-16118, 0))) <= 25430))) : 0));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    var_18 = ((var_8 && (!99)));
                    var_19 -= (((((((-(arr_4 [i_3]))) / (arr_8 [i_2] [i_1 - 1] [i_1 + 1] [i_1])))) ? ((max((arr_4 [i_3]), (arr_4 [i_3])))) : (((var_0 <= 116) ? ((max(-99, -87))) : -99))));
                }
            }
        }
    }
    var_20 ^= (min((((((var_7 ? var_2 : var_4))) ? var_14 : var_11)), ((((max(-111, -98))) ? -96 : var_0))));
    #pragma endscop
}
