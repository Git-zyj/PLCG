/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_12));
    var_17 = (((((max(var_11, 10663)))) / var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 *= ((!(((1 ? (max(var_7, var_1)) : ((1 ? var_0 : var_6)))))));
                    arr_8 [i_0] [i_1] [i_2] [1] = -var_7;
                    var_19 = ((var_13 ? -var_11 : var_11));
                    arr_9 [i_0] [i_0] [i_0] |= var_5;
                    var_20 = max(var_13, ((2653712143 ? -5680 : (arr_7 [i_2]))));
                }
            }
        }
    }
    var_21 = -8002;
    #pragma endscop
}
