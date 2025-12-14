/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = var_9;
        var_16 = (min(var_16, (((!(!var_3))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_17 = (var_1 % -1063399995);
        var_18 = var_13;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 *= (!-6);
        var_20 |= -281230103758672998;
        var_21 = (max(var_21, (~var_9)));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_22 *= var_4;
                                var_23 = (max(var_23, (var_10 + var_4)));
                                var_24 *= (~var_7);
                                var_25 = -7083598664353169745;
                                var_26 = 11704;
                            }
                        }
                    }
                    var_27 = var_13;
                    var_28 = 9;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_29 = (min(var_29, ((max((max(var_0, var_2)), 32346)))));
        var_30 = var_1;
    }
    #pragma endscop
}
