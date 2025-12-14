/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~(~1));
    var_21 = ((~(!var_1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 += var_17;
        var_23 -= 31637;
        var_24 = (max(var_24, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_25 ^= (+-0);
                    var_26 = 11110848941741288008;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_27 -= (min(var_9, (min((arr_9 [i_3] [i_3 + 1]), 8176))));
        var_28 = ((var_12 ? ((max(50, (arr_10 [i_3 + 1])))) : ((max((arr_0 [i_3 + 1]), (arr_0 [i_3 + 1]))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_29 &= (arr_12 [i_4] [i_4]);
                            var_30 = ((-(arr_14 [i_4] [i_4] [i_4])));
                            var_31 = (arr_14 [i_4] [i_5 + 2] [i_6]);
                        }
                    }
                }
                var_32 &= 192;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_33 = arr_23 [i_5 + 1] [i_5] [i_5 - 1] [i_5];

                            /* vectorizable */
                            for (int i_10 = 4; i_10 < 21;i_10 += 1)
                            {
                                var_34 = var_18;
                                var_35 = -554826540;
                                var_36 = var_7;
                                var_37 = (max(var_37, (arr_23 [i_4] [i_10] [i_8] [i_9])));
                                var_38 |= (((arr_24 [i_4] [i_4] [i_4]) ? 1 : -554826540));
                            }
                            var_39 = (min(var_39, (~-554826540)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
