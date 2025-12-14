/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((47402 ? var_7 : var_1)) + ((var_5 ? var_4 : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, var_3));
                    arr_6 [i_0] [i_0] = var_4;
                    var_18 = ((-(min(2886, (((arr_1 [i_2] [i_1]) ? 18135 : var_0))))));
                    arr_7 [i_2] [i_0] = arr_5 [i_0] [i_0] [i_2] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
