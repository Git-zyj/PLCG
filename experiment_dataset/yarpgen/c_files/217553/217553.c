/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, var_9));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_17 *= (var_1 ? var_11 : (min(var_9, (var_2 + var_9))));
                        arr_11 [0] [i_1] [i_1] [i_0 + 1] = var_11;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_18 = (min(var_18, var_4));
                        var_19 = min((((4016313635 + 278653671) ? (min(3935390435, var_6)) : (((4294967269 ? var_11 : var_5))))), (min(((var_0 ? 4016313635 : -27)), var_1)));
                    }
                }
            }
        }
    }
    var_20 = (min(-4016313628, ((((var_14 && var_3) != (var_4 <= var_7))))));
    #pragma endscop
}
