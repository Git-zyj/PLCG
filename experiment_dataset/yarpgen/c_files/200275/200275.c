/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_15 ? var_10 : (18446744073709551611 / var_14))) * ((min(((-5653352576493557330 / (-32767 - 1))), -65535)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((var_0 / 5653352576493557330) != (min(var_1, 3807916268327269460)))))));
                arr_5 [i_0] [i_1] = ((~(((var_3 ? 23124 : var_15)))));
                var_18 ^= (min(((min((var_10 ^ var_9), (max(2640460651, var_5))))), (min((-6556637524679722472 | 18446744073709551615), (max(var_11, var_2))))));
                var_19 = ((((min(var_5, 194))) < ((min(var_11, (-32767 - 1))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [8] [i_1] &= ((!(((var_12 ? var_13 : var_5)))));
                        var_20 ^= ((65280 ? 116 : 243));
                        var_21 = var_9;
                        var_22 = (2874212659 >> ((((5653352576493557342 ? var_15 : var_3)) - 41606)));
                    }
                    arr_11 [i_0] [8] [i_0] [i_2] = (~var_4);
                    arr_12 [i_0] [i_1] [i_2] [i_0] = -var_14;

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_23 = (max(var_23, 4));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_24 = ((-8956228743556746418 & 2874212659) ? (var_10 > 1654506637) : var_10);
                            var_25 = 245;
                            var_26 &= ((!((!(-9223372036854775807 - 1)))));
                            var_27 = ((20304 ? 5653352576493557319 : ((var_5 ? 0 : 25))));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((255 ? 3 : 32760));
                        var_28 = ((var_7 % (var_14 / 11292)));
                    }
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_29 = (max(var_29, ((((((!17) * (min(0, var_4)))) * (18446744073709551615 <= var_5))))));
                    var_30 += 130;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_31 ^= ((((var_2 ? (!439829369) : ((max(255, 2))))) | ((~(var_1 > var_14)))));
                        var_32 = (min(var_32, 8863448774465185000));
                        var_33 = (max((max(2640460651, -5672601221194969265)), (((((4967515805076294508 ? var_4 : var_9)) < (-1120456776 >= var_12))))));
                        arr_25 [0] [i_0] = (!5653352576493557319);
                        var_34 = ((((((min(65535, var_0)) | (!var_14)))) ? ((~(min(var_0, var_13)))) : (((((min(0, 24))) ? ((min(var_12, var_7))) : 16776192)))));
                    }
                    var_35 *= ((((min((var_14 || var_2), (min(898093939, 255))))) > (((min(var_4, var_3)) << (364487215559600651 - 364487215559600640)))));
                    var_36 &= -8863448774465185000;
                }
            }
        }
    }
    #pragma endscop
}
