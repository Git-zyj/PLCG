/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(((min(var_9, var_8))), (((min(var_1, var_6))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = (min(((var_2 >> ((min(2962, 24))))), ((min((var_0 >= var_6), (var_6 < var_2))))));
            arr_4 [i_0] = ((((min(var_4, (max((arr_1 [i_0]), var_5))))) & (((((var_5 >> (var_7 - 3785832107)))) ^ var_3))));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_12 -= var_7;

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [i_2] [i_2] [1] [i_4] [10] = (arr_1 [i_4]);
                            var_13 = (((30 / 5677473151343951271) << (-32024 + 32038)));
                            arr_19 [i_0] [i_4] [i_3] [i_4] [i_2] = ((((((arr_8 [i_4] [i_4]) * var_8))) ? (var_2 && var_2) : var_7));
                        }
                        var_14 = (min(var_14, ((max(((((arr_17 [i_0] [12] [12] [i_0] [i_0] [14] [i_0]) >> (var_5 <= var_0)))), (min(-30684, 9223372036854775807)))))));
                    }
                }
            }

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_26 [i_2] = ((((min(var_3, var_1))) & (arr_8 [i_0 + 1] [i_0])));
                    arr_27 [i_2] [i_2] [i_2] [i_7] = (min(((min(var_0, (30685 * 39830)))), (((var_6 * var_5) >> (((arr_16 [i_7] [i_0] [i_6] [i_2] [i_0] [i_0] [i_0]) - 2947123559))))));
                    var_15 = (min(var_1, (min((arr_16 [i_0 - 1] [i_0 - 1] [i_6] [i_2 + 1] [i_6] [i_0 - 1] [i_2 + 1]), (arr_16 [i_0 + 1] [i_2 - 1] [5] [i_2 + 1] [i_2] [i_2 - 1] [i_0])))));
                    arr_28 [i_2] [i_2] [i_2] [i_0 + 1] = (max((max(13835058055282163712, 3077511220)), 4523));
                    var_16 = (((min((arr_7 [i_7] [i_0] [i_0]), ((min(var_0, var_8))))) - var_1));
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_17 = ((((((arr_21 [i_0] [i_0] [i_2 - 1] [i_0 - 1]) / (arr_21 [i_6] [5] [i_2 + 1] [i_0 + 2])))) ? (max(var_6, (arr_21 [5] [i_2 + 1] [i_2 + 1] [i_0 - 2]))) : ((var_6 ? (arr_21 [i_6] [11] [i_2 + 1] [i_0 - 2]) : var_6))));
                    arr_31 [i_2] [i_2] [i_6] [i_8] [i_6] = ((((7849694492642192843 & (min(2147483636, 4503599627370495)))) < ((min(var_2, var_3)))));
                    arr_32 [i_8] [i_2] [i_2] [i_2] [i_2] [i_0] = (max((arr_1 [i_2 + 1]), var_6));
                    var_18 = (min((((var_9 - (var_3 + var_4)))), ((((max(var_5, (arr_0 [0])))) ? (((arr_29 [i_2] [i_8] [4] [i_8]) * var_1)) : (min(var_5, var_2))))));
                }
                var_19 *= ((min((((arr_29 [i_0] [1] [i_6] [i_2]) ? var_1 : (arr_12 [i_0 + 2]))), ((min(91, 62555))))));
                var_20 = ((~(max((((arr_8 [i_2] [i_0]) / var_9)), var_0))));
                arr_33 [i_0] [i_2] [i_6] = (max(4294967294, (min(((min(var_2, var_0))), ((var_7 >> (var_6 - 98)))))));
            }
        }
        arr_34 [i_0] = (arr_29 [i_0] [i_0] [i_0] [i_0]);
        arr_35 [i_0] = (min((((arr_2 [i_0 + 1] [i_0 - 2]) + var_3)), (arr_2 [i_0 + 1] [i_0 - 2])));
    }
    #pragma endscop
}
