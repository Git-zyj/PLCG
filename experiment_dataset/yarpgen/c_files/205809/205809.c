/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = -4461161205120843584;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 |= ((var_10 ? ((-(!0))) : ((-var_1 * ((var_2 ? -14913 : var_8))))));
                                var_18 = (min(var_8, var_6));
                                var_19 = (max(var_1, var_13));
                            }
                        }
                    }
                    var_20 ^= var_2;
                }
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    var_21 = (~14924);
                    var_22 ^= var_15;
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_23 *= ((-((-(!var_9)))));
                                arr_25 [i_0] [i_0] [i_6] [i_7] [i_8] &= ((((max(268435455, (var_2 / var_15)))) ? ((max(var_5, -14913))) : ((-(max(var_8, 15066576832088295702))))));
                                arr_26 [i_1] [i_6] [i_7] [i_8] = ((!-9223372036854775807) ? var_2 : ((((!(((2016 ? var_9 : var_4))))))));
                                var_24 = (max(var_24, -2390247223728230731));
                            }
                        }
                    }
                    var_25 = (min((!var_9), var_3));
                    var_26 += (min((var_5 * var_2), (!0)));
                    arr_27 [13] [11] [i_6] [i_6] = -2017;
                }
                var_27 &= (!var_1);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_28 = ((-(((!-268435456) / ((-268435447 ? var_5 : var_14))))));
                            var_29 = (max(var_13, (-1127840822541881681 & var_11)));
                            var_30 = ((!((max(-12, ((var_1 ? 9223372036854775807 : 0)))))));
                            arr_33 [i_0] [i_0] [i_10] [i_10] = ((((((14913 ? var_4 : var_15)) | (!var_0))) & ((((((1127840822541881691 ? var_10 : 8359060658031567374))) ? var_15 : var_1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_31 = -var_8;
                            var_32 = (max(var_32, var_9));
                            arr_38 [i_11] [i_11] [i_1] [i_0] &= (max(((-(var_1 <= 1115926411686605277))), (min(-268435447, var_1))));
                            var_33 = ((!((!((max(var_6, 268435455)))))));
                        }
                    }
                }
                arr_39 [i_0] = ((504 ? var_15 : ((((max(var_3, var_15))) ? (!-90) : (max(var_9, var_13))))));
            }
        }
    }
    var_34 = ((!((min(var_11, (min(var_15, 60621)))))));
    #pragma endscop
}
