/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min(((~((14995117645508101371 ? 14995117645508101374 : var_8)))), var_4));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_7 ? (((23 ? 27698 : 14995117645508101374))) : (min(var_17, ((var_2 ? -8 : 10704928563171385832))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = 3451626428201450218;
                    arr_7 [i_0] = 3451626428201450267;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_21 = (~var_2);
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (~var_8);
                        arr_12 [i_0] = var_11;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_0] [i_4] = var_10;
                        arr_17 [i_0] = ((((((((3451626428201450265 ? 14995117645508101375 : var_16))) ? ((var_18 ? 2113929216 : 14995117645508101371)) : 3451626428201450244))) ? (~3451626428201450242) : ((((((var_2 ? 3451626428201450216 : var_4))) ? -var_0 : var_9)))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_22 = (((~953809849) ? (~var_8) : 3451626428201450241));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [8] [i_0] = var_1;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_23 = var_18;
                            arr_23 [i_0] = (-2147483647 - 1);
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_24 = var_5;
                            var_25 = (((~var_1) ? 3451626428201450216 : (((var_13 ? var_14 : 7741815510538165783)))));
                            var_26 = (min(3451626428201450248, 14995117645508101398));
                            var_27 -= -77;
                            arr_26 [i_0] [i_7] [i_7] [i_7] [i_7] = var_17;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_2] [i_2] [i_2] [10] [i_0] [i_2] [i_2] = (~82);
                            var_28 = (max(var_28, -478740597));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
