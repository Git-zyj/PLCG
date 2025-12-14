/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (var_0 ? var_11 : var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [4] [i_2] = (((((~var_2) + 2147483647)) << (arr_3 [i_1 + 2] [i_2 + 1])));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = 243;
                }
            }
        }
    }
    var_14 = ((!(((var_5 | ((var_10 ? var_6 : var_5)))))));
    var_15 = var_4;
    #pragma endscop
}
