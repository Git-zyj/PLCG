/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (~1073741823);
                    var_20 = ((-var_2 ? ((1 & (arr_0 [i_1]))) : (var_3 | 1073741812)));
                    var_21 = var_13;
                }
            }
        }
        var_22 = (min(var_22, (((-64 ? 0 : -2161)))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 *= ((-((min(var_8, var_2)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_19 [i_3] [i_4] [i_5] [i_6] [i_7] = ((~((1 ? 1073741823 : -2181))));
                                var_24 = (var_16 ? ((min((arr_15 [7] [i_5] [i_4] [i_3]), (~var_14)))) : (((((var_2 ? var_11 : -2159))) | ((var_15 ? var_1 : var_17)))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_23 [i_4] = ((!((max((var_5 && var_3), (min(1073741823, (arr_22 [i_3] [12] [i_3] [i_3] [i_3]))))))));
                        var_25 = ((var_10 ? 35237 : ((~((-(arr_22 [i_3] [i_4] [i_4] [i_4] [1])))))));
                        var_26 ^= var_2;
                    }
                    var_27 |= 30306;
                }
            }
        }
        arr_24 [i_3] = (((min(2160, 1870565016)) <= 15429));
        arr_25 [10] = (((631586975673972759 / -392) && (30283 / 113)));
        var_28 = arr_0 [i_3];
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        var_29 = arr_27 [i_9] [i_9];
        arr_28 [i_9] = 2159;
    }
    #pragma endscop
}
