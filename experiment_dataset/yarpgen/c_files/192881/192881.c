/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (min((!var_8), (!var_4)));
                    var_10 -= (max((max(126, 0)), var_3));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_14 [i_0] [i_3] = (((var_8 ? -var_3 : ((var_8 ? var_6 : var_9)))));
                        var_11 = (((((0 ? 0 : 0))) || (!var_8)));
                        arr_15 [i_0] [i_1] [i_0] [20] [i_1] = ((((var_0 << (var_9 - 2410168640)))) ? var_0 : (min(var_2, var_7)));
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_12 = -var_6;
                        var_13 = (max(var_13, 457591456));
                        arr_18 [i_0] [i_0] [i_0] = ((var_4 ? (~var_4) : (!var_1)));
                        arr_19 [i_0] [i_0] [i_0] [i_0] = (((~var_6) > ((var_8 ? var_4 : var_4))));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        var_14 = ((var_3 ? ((var_6 ? var_1 : var_9)) : (~var_4)));
                        var_15 = -var_6;

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_16 = (~var_1);
                            arr_24 [i_0] [i_1] [i_0] = ((~(!var_4)));
                            var_17 = (max(var_17, var_4));
                            var_18 |= var_6;
                        }
                        var_19 -= (~var_8);
                    }
                    var_20 *= (!1);
                }
            }
        }
    }
    var_21 = (max(var_21, -var_5));
    #pragma endscop
}
