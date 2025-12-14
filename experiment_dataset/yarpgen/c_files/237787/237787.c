/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_0 ? (!var_0) : var_5);

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((((var_6 ? var_8 : var_9))) ? var_13 : var_2))) ? (!var_10) : (((((var_9 ? var_4 : var_10))) ? var_5 : ((var_9 ? var_9 : var_6)))))))));
        var_18 = ((-(((var_15 < var_2) ? var_0 : (~var_10)))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            var_19 = (((((((var_15 ? var_5 : var_8)) | (((var_2 ? var_3 : var_0)))))) ? ((((((var_1 ? var_0 : var_15))) > var_5))) : (!var_12)));
                            var_20 = ((var_7 | ((var_5 ? var_10 : var_4))));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_21 = ((var_13 + var_12) ? (((10413 ? -18824 : var_2))) : (var_2 * var_6));
                            var_22 ^= var_4;
                            var_23 = ((!(var_0 ^ var_8)));
                            var_24 = -var_6;
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_25 = ((var_4 ? var_2 : var_2));
                            arr_17 [i_2] = (((((var_10 ? var_15 : var_8))) ? var_7 : (var_14 || var_1)));
                            arr_18 [i_2] [i_3] [i_0] [i_1] [i_2] = ((((var_1 ? var_15 : var_14)) < var_1));
                        }
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (((~var_10) ? var_4 : (((((var_3 ? var_6 : var_14))) ? (((var_4 ? var_2 : var_15))) : var_14))));
                        arr_20 [i_2] [i_2] [i_2] [i_1] [i_2] = ((var_9 % var_12) | (((((-27662 ? 18823 : 21303))))));
                    }
                }
            }
            arr_21 [i_1] = ((var_15 ? ((var_11 ? var_6 : var_10)) : (((!(var_0 | var_10))))));
            var_26 = ((-((var_0 ? var_10 : ((var_4 ? var_14 : var_12))))));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_25 [i_0] = (((!var_12) ^ (((((var_3 ? var_12 : var_6))) ? -var_2 : (!var_13)))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_27 = (((((~((var_13 ? var_14 : var_10))))) ? var_14 : (((((var_11 << (var_0 - 16409)))) ? (((var_9 ? var_7 : var_11))) : var_14))));
                            arr_34 [i_10] [i_0] [i_0] [i_7] [i_7] [i_0] [i_0] = ((((44240 ? 102383567 : 10431))) ? (((((var_0 ? var_9 : var_3))) ? ((var_0 ? var_8 : var_13)) : -var_6)) : (~var_3));
                        }
                    }
                }
            }
            var_28 = ((((((((var_2 ? var_7 : var_8))) ? (var_2 || var_6) : var_4))) || ((((((var_9 ? var_9 : var_10))) ? ((var_5 ? var_15 : var_1)) : (!var_11))))));
            var_29 = (((-((var_4 ? var_15 : var_14)))));
        }
        arr_35 [i_0] = var_13;
    }
    #pragma endscop
}
