/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = 6;
        var_15 = 46;

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_16 = var_0;
            var_17 = 287104476244869120;
            var_18 = (max(((((!1) && (131071 || var_5)))), (max(var_12, 46))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1] = ((!(4294967295 | 45)));
                            var_19 = ((((((~(arr_11 [i_0] [i_1] [i_3]))))) ? (((max(var_11, 640568066)))) : ((max(18446744073709551615, var_12)))));
                            arr_14 [i_1] [i_4] [i_2] = ((min(var_8, (var_6 & 4017220109255821859))));
                            arr_15 [i_4] [i_3] [i_4] [i_4] [i_1] [i_0] = var_12;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_20 = (1168262966 & 255);
            arr_18 [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_5]);

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_21 |= (~579804929);
                var_22 = ((9223372036854775789 | (var_4 || var_9)));
                var_23 = (arr_16 [i_0] [i_0]);
                var_24 = ((!(arr_12 [i_5] [i_5] [i_6] [i_6] [i_6] [i_5] [i_6])));
            }
            var_25 = (min(var_25, ((((!-1) ? var_2 : (13835058055282163712 && 2))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_26 = (210 != 4294967287);
                        var_27 = (min(var_27, (((1787800220 ? 9223372036854775806 : var_10)))));
                        var_28 &= (~0);
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        arr_31 [i_9] [i_9] = var_12;
        arr_32 [i_9 - 1] = (((!-var_11) == ((((max(var_2, 4049643067))) ? 242 : ((max(0, 31)))))));
        arr_33 [i_9 + 1] = var_9;
    }
    #pragma endscop
}
