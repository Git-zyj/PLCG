/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_0 ? ((-((62621 ? -4318 : 2147483647)))) : (~var_13)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_0] [i_1] = arr_6 [i_0] [i_0] [i_1];
                        var_21 -= var_4;
                        arr_11 [i_1] [i_1] [i_1] [i_3] = max(((((((-2147483647 - 1) ? 16383 : -4318))) * (min(var_19, var_16)))), (max((var_19 % 2147483647), 2708054322)));
                        var_22 |= ((max((((1 ? 2708054322 : var_0))), (arr_7 [i_0] [i_0]))));
                    }
                    var_23 = (min(var_23, (((-6748013932932316051 ? (((((var_6 << (((var_10 + 952060914) - 50))))))) : (arr_7 [14] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
