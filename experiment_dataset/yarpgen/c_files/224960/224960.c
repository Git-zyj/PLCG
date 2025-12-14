/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_11 += ((max((~var_10), 2255974835)));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_1] [i_1] [i_0] [i_0] = -var_0;
                    var_12 = ((var_7 ? var_0 : var_2));
                    arr_7 [i_2 + 2] [9] [i_1] [9] = (!var_9);
                    var_13 = -48204;
                }
                for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_14 = (min(var_8, (((~(max(-32754, (arr_5 [i_0] [i_1] [i_3] [i_3]))))))));
                    var_15 = var_0;
                    var_16 |= ((max(var_4, ((var_6 ? var_6 : var_2)))));
                    var_17 &= (~(((var_6 || (arr_1 [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_18 = ((!(arr_2 [i_0] [1])));
                                var_19 ^= -2038992442;
                                var_20 = ((~((~(arr_14 [i_4 - 2])))));
                                var_21 = (((arr_2 [i_0] [2]) ? ((-var_8 ? (arr_3 [i_4] [i_3]) : (min((arr_8 [i_0] [9] [11] [11]), -32765)))) : 23789));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_22 = (~(min((arr_17 [i_1 + 3]), var_10)));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_23 *= (arr_12 [i_8] [i_1] [7] [i_1]);
                                var_24 = max(var_5, 31);
                                var_25 = (((min(58531, var_2)) < var_9));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_33 [i_0] [16] [i_9] [i_9] = ((-((var_7 ? (arr_20 [i_0] [1] [1]) : (arr_21 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 3])))));
                            var_26 = (min(var_26, ((max(var_7, ((((((-32767 - 1) * (arr_0 [i_9]))) < (38796 | var_0)))))))));
                            var_27 = 532676608;
                            var_28 ^= -24;
                        }
                    }
                }
                arr_34 [i_0] = (arr_28 [i_0]);
            }
        }
    }
    var_29 = ((-((var_7 ? var_7 : 41746))));
    #pragma endscop
}
