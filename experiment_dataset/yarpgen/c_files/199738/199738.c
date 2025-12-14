/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 - 1] |= 9965;
                                var_18 = ((-21087 ? ((838187642 ? -9966 : 0)) : (~114)));
                            }
                        }
                    }
                    var_19 = (min(var_19, -21221));
                    var_20 *= -1;
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_21 = (~-9986);
                    var_22 = ((~((((2361624591 ? var_3 : -1))))));
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    arr_18 [i_6] [i_1] [i_6] = ((4294967286 ? 28672 : 27499));
                    var_23 = (((4 ? 175 : (((75 ? 186 : 165))))) / -1);
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_21 [i_7] [i_1] [i_7] = var_11;
                    var_24 = ((-9965 || ((((((var_6 ? 5 : 9970))) ? ((6485059180198941851 ? 0 : 2446661388)) : (((-3329042868789598559 ? 0 : -9967))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_25 = ((((-9960 ? -1944903271 : var_9))) + -9980);
                                arr_27 [i_7] [11] [i_1] [i_7] [i_8] [i_8] [i_9] = ((547608330240 ? (!9) : 9994));
                                arr_28 [i_0] [i_7] [1] [12] [i_9] [i_7] [i_7] = 96;
                                arr_29 [i_8] [i_8] [i_7] [i_8] [i_8] [13] = ((((var_10 || (793512803 >= -2))) ? ((-(12 / 90))) : 63));
                            }
                        }
                    }
                }
                var_26 -= ((((((((-3786 ? var_16 : 1))) ? (((-9994 ? 160 : 0))) : ((var_16 ? var_13 : -4301476360216747601))))) ? -175 : ((((-1 ? 18446744073709551615 : var_7))))));
            }
        }
    }
    var_27 = (min(var_27, (((((((14818352578442021923 + 6) ? -22 : ((0 ? var_4 : 165))))) - ((-((var_2 ? 13089 : var_10)))))))));
    var_28 = (max(var_28, 18216));
    #pragma endscop
}
