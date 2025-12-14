/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((~(((max(4893223462354241726, 63)) * (((var_6 >> (var_9 - 1203823236))))))));
    var_12 = (min(var_12, var_3));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 *= ((!((((var_7 < var_9) ? (max(var_6, var_8)) : var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 &= (var_2 * var_2);
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = var_8;
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_15 = ((((((var_6 ? var_6 : var_1)) >= (((var_8 ? var_8 : var_8))))) ? ((((!var_3) < var_3))) : (((var_0 && var_8) * (-1 > -1)))));
            arr_19 [3] [i_0] [i_5] = var_7;
            var_16 ^= (!var_8);
            arr_20 [i_0] = (((((((var_3 ? var_5 : var_4))) ? var_5 : (min(var_0, var_8)))) * ((-var_0 >> (((~var_0) - 16747803412694492568))))));
            var_17 ^= var_4;
        }
        arr_21 [i_0] &= ((~((((var_1 ? var_5 : var_3)) | (var_3 | var_5)))));
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_30 [i_0] [i_8] [i_7] [i_0] = var_9;
                        arr_31 [i_8] [i_7] [11] [i_8] = ((var_1 ? -var_6 : ((var_9 ? var_0 : var_10))));
                        arr_32 [24] [i_8] = ((var_10 ? var_1 : ((((!(((var_5 ? var_0 : var_8)))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_18 ^= var_7;
        var_19 = ((((var_4 ? var_4 : var_8)) ^ (~var_5)));

        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            arr_40 [i_9] [i_10] [i_9] = ((var_6 ? (!var_8) : var_6));
            arr_41 [i_10] = var_5;
        }
        arr_42 [i_9] = (var_1 != var_7);
    }
    #pragma endscop
}
