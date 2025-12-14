/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((1553033483 ? var_12 : ((2436848535 ? (var_4 - var_5) : ((var_12 >> (212 - 164)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 ^= (((((((74 || (arr_0 [i_0] [i_1])))) >> (((~var_11) + 14)))) << ((((var_4 ? (arr_2 [i_0]) : -var_2)) + 8248126559241206484))));
                    var_16 += ((~(((-9223372036854775807 - 1) & var_3))));
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
