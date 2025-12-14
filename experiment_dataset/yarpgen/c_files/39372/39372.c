/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((var_9 ? var_7 : var_8))) ? ((((1 ? var_8 : -5230321692161215440)) | (((1933567546 >> (5230321692161215438 - 5230321692161215435)))))) : var_7)))));
    var_12 = (min(var_12, var_8));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_0] = var_4;
            var_13 = (min(var_13, ((((arr_4 [i_0 + 2]) || var_5)))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                var_14 |= (arr_9 [11] [13]);
                var_15 = (((arr_10 [i_3 - 2] [i_3] [i_0 + 2]) - var_1));
                var_16 = (((arr_8 [i_0 + 3] [i_3 + 1]) ? (((var_6 + 9223372036854775807) >> (((arr_4 [i_0 + 2]) - 192)))) : (((((!var_7) && (var_10 >> var_5)))))));
            }
            var_17 = (arr_2 [i_0]);
            var_18 = (((((!(arr_10 [i_2] [i_0 - 1] [i_0 + 1])))) <= ((((arr_10 [i_0] [i_0 - 1] [i_0]) <= var_6)))));
            arr_11 [10] [i_2] [i_0] = var_8;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_19 = (((2361399749 == var_8) - ((((min(var_6, var_8))) ? ((((arr_14 [i_2] [i_2]) || 5230321692161215459))) : ((((arr_14 [i_0] [i_6]) == 9221120237041090560)))))));
                            var_20 &= 1;
                            arr_21 [i_0] [i_0] [i_4] [i_5] [i_6 + 1] = (max(((((((arr_14 [i_0] [4]) ^ (arr_7 [i_0 + 3] [i_2] [i_2]))) >> (((((arr_14 [i_5] [i_4]) << (((arr_20 [i_0 + 1] [3] [i_4] [i_5] [i_0]) + 54826744592960538)))) - 256))))), (min((~var_9), 16776192))));
                        }
                    }
                }
            }
        }

        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            var_21 = (arr_12 [i_7 - 1]);
            var_22 = var_1;
            arr_25 [i_7] [i_7] [i_7 + 1] = (((((230 ? (arr_3 [i_0] [i_7 + 2] [i_7 - 1]) : var_7))) ? (arr_15 [i_0] [i_7 + 2] [i_0 + 1]) : var_4));
        }
    }
    var_23 -= (var_5 == (((var_1 > (var_6 <= 36)))));
    var_24 = var_0;
    #pragma endscop
}
