/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((-(((!(14 >> 1)))))))));
    var_18 += var_14;
    var_19 = (~1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (116 || 1);
                    var_21 = (max(var_21, (((((!(!var_8))) ? (max(((var_16 ? var_9 : var_5)), -var_9)) : ((max(var_10, (~var_0)))))))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_8 [i_0] [i_0] [i_2] [4] = 11;
                        var_22 = (min(var_5, var_11));
                        var_23 = ((((max(-var_3, -var_9))) ? (~-13) : ((max((!var_12), -var_2)))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_15 [i_0] = ((!(4294967295 + 529886218)));
                            var_24 = ((23 ? 0 : 0));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_25 += var_5;
                            var_26 = (~var_7);
                            var_27 = (max(var_27, (((!var_5) + var_9))));
                            var_28 = (min(var_28, -var_6));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_29 = (max(var_29, (((var_16 && ((!((min(var_15, var_12))))))))));
                            arr_24 [i_0 - 1] [i_1] [i_0] [15] [0] = (var_4 || var_7);
                        }
                        var_30 &= var_11;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_31 = var_12;
                        var_32 ^= (~var_2);
                        var_33 = (max(var_33, (((-((((max(var_13, var_14))) ? var_15 : ((max(var_6, var_16))))))))));
                    }
                    var_34 = (min(var_34, (((((~(~var_13))) - (var_7 - var_1))))));
                }
            }
        }
    }
    var_35 *= (!-1);
    #pragma endscop
}
