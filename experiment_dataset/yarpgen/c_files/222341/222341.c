/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_17 ^= var_3;
        var_18 *= 65535;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_2] = -var_12;
                        var_19 = (arr_7 [i_3] [2] [i_1] [i_1] [2] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_20 -= (arr_9 [1]);
        arr_12 [i_4] = ((var_14 ? ((((arr_6 [i_4] [i_4] [i_4] [i_4]) == (arr_3 [i_4])))) : (!var_8)));
    }
    var_21 = var_7;
    var_22 = (~(~var_14));
    #pragma endscop
}
