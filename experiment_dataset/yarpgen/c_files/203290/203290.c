/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = 255;
                        var_18 = 0;
                        var_19 = 3107819011765746000;
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_20 = 4824687324140615691;
                        var_21 *= 4824687324140615688;
                        var_22 = -35;
                        arr_14 [i_0] [0] [i_1] [i_0] [0] |= 1;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_23 = 54;
                        var_24 |= -21704;

                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_25 = (max(var_25, 40));
                            var_26 |= -32551;
                            var_27 += 0;
                        }
                    }
                    arr_20 [i_0] [i_1] [i_1] [i_1] |= -97;
                }
            }
        }
    }
    var_28 = var_8;
    #pragma endscop
}
