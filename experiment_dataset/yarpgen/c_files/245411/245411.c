/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 ^= (min((arr_0 [i_1] [i_0]), (((((2623025094 ? var_5 : 0))) ? (((135 ? 2732952819 : var_7))) : (min(12191003789354628764, (arr_3 [i_0] [i_0])))))));
                var_14 = ((1 ? 0 : var_3));
            }
        }
    }
    var_15 = 32767;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_4] [i_3] [i_2] = ((-(arr_12 [i_4] [i_3])));
                    var_16 = (arr_11 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
