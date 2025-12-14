/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_7;
    var_13 |= (98 % -13884);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_6;
                var_14 ^= 4294967295;

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = 1;
                                var_15 = ((var_1 >= ((255 - (arr_3 [i_0] [i_0] [i_2])))));
                                arr_17 [i_0] [i_1 - 3] [10] [10] [10] = ((~(arr_0 [i_1 + 2] [i_2 + 3])));
                                var_16 = ((var_9 >> ((((var_7 << (1321764691345282344 - 1321764691345282342))) - 127153))));
                                arr_18 [i_0] [i_0] [i_0] [1] [i_4] = (((arr_9 [i_1 + 3] [i_1 - 1] [i_1 - 1]) >> (((!(arr_11 [i_3] [i_3]))))));
                            }
                        }
                    }
                    arr_19 [0] [i_1 + 4] = (2090784241395298530 ? 13903 : -13905);
                }
                for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] [i_1 + 4] = (max(var_5, (((var_11 + var_11) + (-2147483630 - 786432)))));
                    var_17 = (((1 ? 13884 : 1)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6 - 1] [i_5] [i_6] [i_5] = ((-((var_4 ? (arr_2 [i_1 - 1] [i_1 - 1] [i_5 + 1]) : var_3))));
                                var_18 = (min(-13884, (~13873)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((min((min((arr_12 [i_1 - 3] [i_5] [i_5] [i_5 - 1]), (arr_12 [i_1 - 2] [i_1 + 1] [15] [i_5 + 3]))), (!var_3))))));
                                var_20 = ((((min((arr_25 [i_8] [i_5] [i_5] [i_1 + 3]), ((10 ? var_10 : var_4))))) ? var_1 : (max((arr_8 [i_1 + 4] [i_5 - 1] [i_1 + 4]), (arr_25 [i_1 + 4] [i_5] [i_5] [i_8])))));
                                arr_36 [i_0] [i_1 + 1] [i_5] [15] [i_5] [i_9] [i_9] = (2147483629 || 157);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    var_21 = 63;
                    var_22 = ((!((((arr_5 [1] [i_1 + 2] [1]) & 33488896)))));

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_23 = (18446744073709551615 - 1493439498);

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_24 = (!63);
                            var_25 ^= 241;
                        }
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_26 = (((arr_47 [i_1] [i_1 + 3] [i_1 - 3] [i_10]) & (arr_47 [i_1] [i_1 + 4] [i_1 + 2] [i_10])));
                        var_27 = ((47 ? 33488896 : 236));
                        var_28 = (min(var_28, (arr_15 [i_1 + 2] [1] [i_1 + 2] [3] [i_13])));
                    }
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        var_29 = 5498683264685768374;
                        arr_51 [i_10] [i_10] [i_10] = (2147483647 + 4611686018427387904);
                    }
                }
            }
        }
    }
    #pragma endscop
}
