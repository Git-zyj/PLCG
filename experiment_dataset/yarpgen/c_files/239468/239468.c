/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] [6] |= ((+((-1807627393 ? (arr_4 [i_1 - 1] [i_1] [i_1 - 2]) : 6066))));
                    var_12 -= (max(((~((var_10 ? (arr_6 [i_2] [i_2] [i_0] [i_2]) : var_9)))), (arr_6 [i_1] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    var_13 = (max((((((var_11 ? -18510 : var_0))) ? var_0 : 55518)), ((var_11 ? ((524160 ? 16383 : 8755)) : 945951611))));
    var_14 = -28992;
    var_15 = ((((((var_2 ? var_10 : 68719476608)) ? 56888 : var_5))));
    #pragma endscop
}
