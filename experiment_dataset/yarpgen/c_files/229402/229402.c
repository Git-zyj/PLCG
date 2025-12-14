/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = -231;
                    var_21 = (!-4482);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = -34;
                                var_23 = 2184446628;
                                var_24 = (~(!91));
                            }
                        }
                    }
                    var_25 = 3;
                    var_26 = 0;
                }
            }
        }
        var_27 = (!0);
        var_28 = -1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_29 = 975558512;
        var_30 = 27766;
    }
    var_31 = var_8;
    var_32 = ((~(~var_16)));
    #pragma endscop
}
