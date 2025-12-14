/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = ((var_3 ? ((~(~var_7))) : (((~var_10) ? var_7 : 23034))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = ((((((((var_3 ? -1545950875 : 5679601736104396931))) ? (max(1, 1545950875)) : 1))) ? ((((((-1545950876 ? var_5 : 1545950881))) && ((max(var_7, var_9)))))) : (((var_3 ? 1545950886 : -1545950903)))));
                                var_14 *= ((((((-4079962260792357245 ? 1 : 5679601736104396943)) ? 1545950881 : 2073440671))));
                                var_15 = (1 < ((((var_4 + -2070475365) <= (!var_9)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((arr_11 [i_6] [i_6 + 1] [i_1] [i_1]) / (arr_11 [i_6] [i_6 - 1] [i_6 + 1] [i_0]))) - var_11))));
                            var_17 = (((var_8 % (arr_8 [i_5 - 1] [i_5] [i_6 + 1] [i_6 + 1]))));
                            var_18 = (min((~18446744073709551615), var_4));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_18 [i_7] [i_1] [i_1] [i_0] = ((((((1 | (arr_9 [i_0]))) <= 65534)) ? (18446744073709551615 - var_2) : (((-5679601736104396943 + 9223372036854775807) >> 10))));
                    var_19 -= 231;
                    arr_19 [i_0] [i_0] [i_1] = (((((!((max(var_1, var_3)))))) & 20981));
                    arr_20 [i_1] = (max(((((((254 ? var_10 : 18446744073709551605))) ? (var_8 <= -1545950880) : 175))), 5374519698204303288));
                }
            }
        }
    }
    var_20 = ((((((1 < var_4) ? var_1 : var_4))) & ((-2098944256 ? var_7 : ((max(var_4, 12)))))));
    var_21 = var_8;
    #pragma endscop
}
