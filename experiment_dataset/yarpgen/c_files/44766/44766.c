/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((!(!65280)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_14 = (~-154);
        var_15 = -var_0;
        var_16 = 34139030;
        var_17 *= (~-15975);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = (~(((!(-32767 - 1)))));
        var_19 = ((~(!15977)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_20 *= (!var_0);
                    var_21 = (max(var_21, (((((-(arr_2 [i_1]))))))));
                    var_22 = (!34139032);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_5 + 1] [i_5 - 1] [i_4] [2] = -100;
                                var_23 *= 15977;
                                arr_20 [i_4] = (~170);
                            }
                        }
                    }
                }
            }
        }
        var_24 = (max(var_24, (~1185660347)));
        var_25 = (!-var_9);
    }
    #pragma endscop
}
