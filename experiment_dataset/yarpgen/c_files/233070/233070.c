/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 -= (!8069);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (max(255, (-256 - var_9)));
                        var_18 = (max(var_18, ((~(min(var_3, ((26050 ? 18 : var_9))))))));
                        arr_10 [14] [i_1] [i_2] [i_2] = ((512 && (-9166017463396566997 % 118)));
                        var_19 = var_3;
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_20 ^= (max((((var_14 ? var_4 : (var_8 < var_3)))), var_7));
                        var_21 += ((-((~(~var_10)))));
                    }
                    var_22 = (min((!var_5), ((-((354644408 ? var_9 : var_3))))));

                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((((~var_0) | ((((max(279784463, var_12))))))))));
                        arr_18 [i_5] [i_1] [i_5] [i_1] = (((((min(281474976710656, 2275578165))) ? var_9 : var_10)));
                        var_24 -= (max(((min(1, -14117))), (~24446)));
                        arr_19 [i_5] [i_5] = ((-14116 ? ((65535 ? var_7 : 27414)) : (var_12 - 281474976710656)));
                        var_25 += -var_7;
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, ((((((-(min(8886978403097619507, 21355))))) ? ((1 ? (((var_1 ? 6774 : 0))) : (min(0, var_3)))) : 18939)))));
                        var_27 = (max(var_27, var_7));
                        var_28 = (max(var_28, (((((max(var_9, var_9))) / 58677)))));
                    }
                }
            }
        }
    }
    var_29 = (max(var_29, ((((~(~var_7)))))));
    #pragma endscop
}
