/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (((((arr_1 [i_1]) ? ((max(var_4, (arr_0 [i_0] [i_1])))) : (((arr_1 [7]) / var_11)))) % (((-1085114010907921056 >= (max((arr_2 [i_1]), 4294967295)))))));
                arr_5 [i_1] [i_1] = var_4;
                var_14 ^= var_7;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_15 *= (arr_6 [i_2 + 1]);

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_12 [i_4] = (arr_9 [i_2] [i_2 - 1]);
                arr_13 [i_2 + 1] [i_3] [i_3] [i_4] = var_2;
                var_16 = var_1;
                var_17 ^= ((((-1 ? -33 : (arr_6 [1]))) - ((~(arr_6 [i_3])))));
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_18 ^= (((arr_19 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [10]) <= 9277221308677163610));
                        arr_21 [i_6] [i_6] = -8751337486897886714;
                    }
                }
            }
            var_19 &= ((((157 ? 2147483647 : 61515)) / var_1));
        }
        var_20 = (min(var_20, (arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1])));
        arr_22 [i_2 + 1] = var_7;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                {
                    arr_28 [i_2 - 1] = 9223372036854775807;
                    arr_29 [i_7] [10] [10] [10] |= (((arr_26 [i_8 - 1] [i_2 + 1] [0]) - var_7));
                    arr_30 [i_2] [i_2] [i_7] [i_8] = (var_8 || var_4);
                    var_21 = var_8;

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_22 = (((arr_33 [i_9] [i_8] [i_7] [i_2]) <= (arr_33 [i_2] [i_7] [i_8] [i_9])));
                        var_23 = (min(var_23, var_11));
                        var_24 &= ((!(~var_0)));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_25 = ((-(639 - 65535)));
                        var_26 = ((-(arr_35 [i_8 - 2] [i_2 - 1])));
                    }
                }
            }
        }
    }
    var_27 -= 134217727;
    var_28 ^= ((((((965570225 == -5273527365505372138) ? ((1 ? var_0 : var_7)) : (max(var_3, var_6))))) ? (((max(-32765, (var_10 < var_6))))) : ((65525 ? ((var_3 ? 0 : 511)) : (1 + -9097603547580713813)))));
    #pragma endscop
}
