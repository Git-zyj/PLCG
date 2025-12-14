/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_0] [i_1] = (!-396525138);
                            var_20 = ((~((var_19 ? var_19 : (~1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_21 &= (arr_9 [i_0] [i_0] [14] [i_0]);
                            var_22 = (arr_9 [i_0] [i_0 + 1] [23] [i_0 + 1]);
                            arr_16 [i_0] = (((((!var_15) > (!var_1))) ? var_1 : (((((58580 ? var_15 : 94))) ? (-9223372036854775807 - 1) : (!-685464209)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0 - 1] [i_0 - 1] [i_7] [i_8] [i_7] = ((-1 ? ((var_3 ? 59 : (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 2]))) : (!0)));
                                var_23 = ((+((196 ? (arr_23 [i_0] [i_1] [5] [i_0] [i_0 - 1] [i_0 - 1] [i_6]) : (arr_23 [i_0 - 1] [i_1] [i_6] [i_0] [i_0 + 1] [i_6] [i_0 + 1])))));
                                var_24 += ((((((((var_6 ? var_18 : (arr_22 [i_0] [i_0] [i_8] [i_7] [i_8])))) ? (!2503) : (arr_11 [i_8] [i_0 - 1] [i_0] [i_8])))) ? var_17 : (((~(arr_23 [i_0] [i_1] [1] [i_8] [i_8] [i_6] [i_8]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_25 *= (~((((arr_20 [i_0 - 2] [19] [i_0] [i_9 + 1] [i_11 - 1] [i_11]) == (arr_18 [i_0])))));
                                var_26 = 10938771628210829670;
                                arr_32 [i_11] [i_0] [6] [i_0] [i_0] = var_11;
                                var_27 = 1;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 4; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                var_28 += ((-(((59 ? var_18 : var_8)))));
                                arr_43 [i_14] [21] [i_13] [i_0] [i_1] [i_0 - 2] [i_0] = (7202931504949760357 && -var_14);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_2;
    #pragma endscop
}
