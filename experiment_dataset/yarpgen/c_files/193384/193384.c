/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = (min(-var_11, (((!var_3) + (max(var_9, var_6))))));
                            var_15 = (max(var_15, ((((var_8 ? var_4 : var_8))))));
                            arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2 + 2] |= (((((var_8 << (var_0 - 30645)))) ? ((var_7 ? var_8 : var_11)) : 65527));
                            var_16 &= ((((var_5 ? var_4 : var_5)) <= -2912513298));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] = (((max(var_0, var_12))) ? (min(var_0, var_4)) : var_6);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_17 *= (((~var_4) ? (~155) : ((8935141660703064064 ? 22 : 2667128566492235906))));
                                arr_21 [i_6] [i_5] [i_6] [i_1] [8] &= ((-(((var_10 ? var_7 : var_6)))));
                                var_18 = (((min((!9), ((228 ? 65531 : var_5)))) | (((var_9 | 8678992620659204106) | var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_19 = ((!((min(2212871198648416166, 254)))));
                            arr_34 [i_8] = (!1);
                            arr_35 [i_7] [i_8] [i_9] [i_8] [i_7] = (((((min(var_12, var_3))) % var_6)));
                        }
                        var_20 = (max(var_20, (((max(-2493001105366271955, (0 - var_3)))))));
                        var_21 = ((var_10 ? var_4 : (((~(var_12 | var_12))))));
                        var_22 = ((((((var_4 ? var_10 : var_5) < (min(var_5, -4392507368444825581)))))));
                        arr_36 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8] = ((-78 ? -19236 : ((((-2147483647 - 1) <= var_4)))));
                    }
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        var_23 = (max((max(((var_5 ? var_12 : var_13)), (min(var_13, var_12)))), (min(var_6, (~var_5)))));

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_24 = (min(var_24, var_3));
                            var_25 = var_2;
                            var_26 = (max(var_26, (((((max(var_13, var_12))) ? (max(var_2, var_6)) : var_9)))));
                            var_27 = (max(var_27, (((-((var_8 ? var_10 : var_12)))))));
                            var_28 ^= ((255 ? 15 : 147));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_29 = (((~var_0) ? var_4 : var_2));
                            arr_44 [i_7 - 1] [i_12] [i_8] [i_8] [i_7 - 1] = (1 >= -85);
                        }
                        arr_45 [i_8] [i_8] [i_9] [i_12] [i_12] = ((((max((min(-1, var_4)), 56113))) ? var_7 : (((((var_0 ? var_1 : 42))) ? var_0 : var_9))));
                    }
                    arr_46 [i_7] [i_9] [i_7] [i_8] = (max((((((var_6 ? var_3 : var_2))) ? var_10 : (min(var_9, var_13)))), (((max(var_1, var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
