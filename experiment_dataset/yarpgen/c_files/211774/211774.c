/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_19 |= (max((arr_3 [i_4 - 1] [i_4 + 1] [i_0]), ((max((max(var_6, var_0)), (((112 ? 133 : var_11))))))));
                                var_20 |= (!2892676611);
                                var_21 -= (((~(arr_10 [i_2] [i_2] [i_4 - 2] [i_2] [i_2]))));
                                var_22 = (((((-((68 + (arr_9 [i_1] [0] [9])))))) ? (~1416) : (((arr_8 [i_4 + 4] [i_4 - 1] [i_4 + 1] [i_1] [i_4 - 1] [i_4 + 1] [i_2]) ? (arr_10 [i_4] [i_4] [i_4 - 2] [i_4] [i_4 - 1]) : var_11))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] = 19559;
                        var_23 = (((~var_11) != (!2945038493)));
                        var_24 = (!37);
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_25 ^= var_10;

                        for (int i_8 = 4; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            var_26 = var_1;
                            var_27 = (!218);
                        }
                        for (int i_9 = 4; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            var_28 = (((3365657565 >= (arr_1 [i_5]))));
                            var_29 -= var_9;
                            arr_25 [i_0] [i_9 - 3] [i_1] = (arr_10 [i_9 - 1] [i_9 - 1] [i_9 - 4] [i_9] [i_9 + 2]);
                            var_30 &= ((var_0 ? 6858405915223014222 : (arr_17 [i_0])));
                        }
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            arr_28 [i_1] [1] [i_5] [i_7] [i_7] = (!39);
                            arr_29 [i_1] = (arr_15 [i_0] [i_1]);
                        }
                    }
                    var_31 = (min(var_31, (((352835802 ? var_1 : (arr_2 [i_5 - 2] [i_0] [i_5 - 2]))))));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_33 [i_1] [i_1] [i_1] = (~336162664);
                    arr_34 [i_0] [i_1] [i_1] [7] = ((~(((arr_12 [i_0]) ? (arr_21 [8] [i_1] [i_1] [i_1] [5]) : (arr_12 [i_0])))));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    var_32 += (max((arr_1 [i_0]), var_12));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_33 = 2517223847565444840;
                                var_34 = ((((max((arr_22 [i_14] [i_1] [i_12] [i_13] [i_13]), var_11))) ? var_7 : (((arr_9 [i_1] [i_13] [i_14]) ? (((max((arr_39 [i_0] [i_1] [i_0] [i_0]), var_11)))) : ((var_14 ? var_10 : 4161210447))))));
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        arr_45 [i_1] [i_1] [3] [i_15] [3] = (-18 & 17325376933567367435);
                        var_35 = (((((min((arr_11 [i_1] [i_1] [i_15] [i_15]), (arr_43 [i_0] [i_1] [i_0] [i_12] [i_1] [i_0]))))) % 27775));
                    }
                }
            }
        }
    }
    #pragma endscop
}
