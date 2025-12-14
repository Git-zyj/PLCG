/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 32767;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = var_1;
                var_14 ^= var_4;
                var_15 = (min(var_15, (((32767 ? ((((max(65280, 3858))) ? (var_10 == var_8) : ((576460752302899200 ? var_5 : var_0)))) : ((((var_5 ? 1 : 2922805890)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                var_16 = ((var_4 == ((var_9 ? (min(var_4, 11837884994047083417)) : 2153669381942759946))));
                var_17 = (!4193792);
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_18 = ((255 ? var_9 : var_5));
                                var_19 = -16777088;
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_20 = ((-((-2153669381942759947 ? 64 : 13608514101472999015))));
                                arr_24 [i_2] [i_2] [i_4 + 3] [i_2] [i_7] [i_7] = 47;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 13;i_8 += 1)
                            {
                                arr_27 [i_3] [i_2] [i_3] [i_8] = ((-261503132 ? 8051697696282998619 : 3176775822420670539));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_8] = 8544047999129367567;
                            }
                            arr_29 [i_5] [i_2] [i_2] [i_2] = ((-((var_7 ? -1 : 32256))));
                            var_21 = (((12288 == -12288) ? (max(var_4, var_1)) : (((((((max(-31744, var_0)))) == 4503599627370495))))));
                            var_22 = -var_5;
                            var_23 = ((1760143678 ? 275353596 : 4095));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
