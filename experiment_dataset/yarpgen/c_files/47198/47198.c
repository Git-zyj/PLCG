/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((((var_10 * var_4) ? ((var_5 ? 4192256 : -1832536557)) : var_8)) + ((min(7283, (min(var_18, 1334366029)))))));
    var_20 |= (255 >= -1071099956);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 ^= (((((((arr_1 [i_2]) ? (arr_4 [0] [i_1 + 2] [i_2]) : 3059968227)) >> (((~var_7) + 9428)))) <= ((+(((arr_4 [i_0] [i_0] [i_2]) ^ (arr_4 [i_2] [i_1] [i_2])))))));
                    arr_8 [i_2] [i_2] &= (((((((arr_7 [i_0] [i_0] [i_1] [i_2]) ? var_15 : (arr_4 [i_0] [i_0] [i_2]))) >= (max((arr_4 [i_0] [i_1 + 3] [i_2]), 3059968227)))) ? (arr_2 [i_0] [i_0]) : ((((min((arr_5 [20] [i_1] [2] [i_2]), -20812))) ? (arr_4 [i_2] [i_0] [i_2]) : (((((arr_5 [i_0] [i_0] [i_0] [i_2]) >= (arr_2 [i_0] [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
