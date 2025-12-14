/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_7;
    var_17 = ((max((~var_2), 18222376650878257526)));
    var_18 += ((4288861525 * (!var_8)));
    var_19 = (~var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 |= ((!((((!var_7) ? var_13 : ((min((arr_4 [i_3] [i_3] [i_3]), var_2))))))));
                            arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((((var_3 << (var_11 - 110)))) ? var_11 : (min(var_6, var_0)))) + var_11));
                            arr_11 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_9 [i_2 + 1] [i_2 + 1] [i_3 - 1] [i_2 + 1]);
                            arr_12 [i_2] = (arr_6 [i_0] [i_0] [i_0] [i_0]);

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_21 = var_13;
                                var_22 = (max(var_22, 224367422831294097));
                                arr_15 [i_2] [i_1] [i_4] = (min((((((var_0 >> (-1166 + 1189)))) ? (((((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) && (arr_6 [i_0] [i_0] [i_0] [i_0]))))) : (~16805522759905754489))), 1641221313803797127));
                                arr_16 [i_4] [i_2] [i_2] [i_2] [i_0] = (((arr_4 [i_3 - 1] [i_2 + 1] [i_2 + 1]) && ((min((arr_4 [i_3 - 3] [i_2 - 1] [i_2 - 1]), (arr_4 [i_3 + 3] [i_2 - 2] [i_2 - 2]))))));
                            }
                            for (int i_5 = 3; i_5 < 14;i_5 += 1)
                            {
                                var_23 = var_3;
                                var_24 = (max(var_24, 16805522759905754481));
                                arr_19 [i_0] [i_2] [i_2] [i_2] = (arr_7 [i_3]);
                            }
                        }
                    }
                }
                var_25 = (arr_2 [i_0]);

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] [i_1] = var_4;
                    var_26 -= (!224367422831294085);
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    arr_28 [i_1] [i_0] [i_1] [i_0] = ((-14 - (arr_0 [i_7] [i_1])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_27 = (~-3163);
                                arr_33 [i_0] [i_0] [i_7] [i_0] [i_9] = ((-32767 - 1) + (((((var_1 ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : 126))) ? (arr_0 [i_0] [i_0]) : (~-32766))));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 3696328514;
                            }
                        }
                    }
                    arr_35 [i_0] [i_0] [i_0] = ((+(max((arr_8 [i_0] [i_0] [i_0] [i_7]), 156))));
                    var_28 = ((((-(arr_18 [i_7 + 1] [i_1] [i_7 + 1] [i_1] [i_7 + 1]))) - ((~(((var_12 + 2147483647) >> (-29057 + 29081)))))));
                }
                var_29 ^= ((((-(arr_4 [i_0] [i_0] [i_1]))) - var_9));
            }
        }
    }
    #pragma endscop
}
