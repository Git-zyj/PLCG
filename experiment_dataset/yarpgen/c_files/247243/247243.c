/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_8);
    var_19 = ((((min((max(var_0, var_10)), ((min(var_9, var_11)))))) ? ((min((min(var_17, var_15)), ((max(var_17, var_17)))))) : ((var_4 ? ((min(var_4, var_6))) : (~var_5)))));
    var_20 = (min(((max(33554176, -32759))), 144115188067467264));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] = (~-var_10);
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_21 = (var_3 ? var_6 : (~var_17));
                            arr_13 [0] [i_2] [i_2] [i_0] [i_0] |= 18387760521540193073;
                            var_22 ^= ((~((var_5 ? var_16 : var_14))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = (min(var_23, var_15));
                            arr_16 [0] [i_1] [i_2] [2] [i_5] [i_0] [i_3] &= (((var_2 ? var_10 : var_10)));
                            var_24 *= (((var_2 ? var_2 : var_15)));
                            var_25 = (min(var_25, (((var_3 ? var_8 : ((var_9 ? var_8 : var_2)))))));
                        }
                        var_26 = -var_17;
                        arr_17 [i_1] = ((var_7 ? var_0 : var_10));
                    }
                }
            }
            arr_18 [i_0] [i_1] = ((var_0 ? ((var_3 ? var_17 : var_0)) : (!var_9)));
        }
        var_27 = (max(var_27, ((min((((max(18387760521540193074, 3)))), 32767)))));
    }
    #pragma endscop
}
