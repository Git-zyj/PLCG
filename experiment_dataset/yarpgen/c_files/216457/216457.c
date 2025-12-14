/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = ((((min(65, var_3))) ? ((((((var_10 ? 144044819331678208 : 4294967290)) == 18383)))) : (max((max(var_9, -1631717548)), ((max(-1, 88)))))));
                            arr_12 [i_3] [i_1] [i_2] [i_3] = (max((max(var_7, -566550415)), ((((((115 >> (134184960 - 134184949)))) != (-9223372036854775807 - 1))))));

                            for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_1] [i_3] [i_2] [i_3] = ((((((((126 ? var_10 : 58))) ? (max(2147483647, 798341448697539618)) : ((min(var_4, var_0)))))) ? ((-114 ? ((var_11 ? var_9 : var_7)) : -1817222634)) : (((var_5 & 0) ? (((var_9 ? var_3 : var_7))) : (2147483649 | var_9)))));
                                arr_17 [i_1] [i_1] = (((0 / var_1) ? (min(((var_12 ? var_9 : var_9)), (18886 != var_10))) : (((max(var_4, 14))))));
                            }
                            for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                var_15 = (min(var_15, (((((min((min(1, 2147483625)), (var_12 <= 1)))) ? ((var_1 ? 120 : -1728537164)) : ((max(1, var_2))))))));
                                var_16 += ((((min(var_2, var_3))) ? (!1) : (~var_7)));
                            }
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_1] [i_7] = var_7;
                            var_17 = (((~var_3) & (~2407)));
                        }
                        var_18 = ((((((((var_11 ? -1728537164 : 179))) ? ((-2408 ? 159 : 1)) : ((5358540439547049759 ? 2407 : 60970))))) != ((var_10 ? var_5 : var_12))));
                        var_19 ^= var_0;
                        arr_30 [i_0] [i_1] [i_6] [i_1] [i_0] = (((1725889817 - -114) == (min(var_5, 1))));
                    }
                    arr_31 [i_1] [i_6] = ((((min(2147483643, var_8))) && ((min(-12, var_2)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            {
                var_20 = (max(((max(-32645, (!169)))), 65535));
                var_21 = ((((((((4550 ? 1 : var_10)) >= 4294967294)))) + (((((0 ? var_12 : (-2147483647 - 1)))) ? -87 : ((var_4 ? 1 : var_12))))));

                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 23;i_13 += 1)
                        {
                            {
                                arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = (min(((-2414 ? var_5 : var_1)), (~4)));
                                var_22 -= ((-71 ? (((((20002 ? 11 : var_1))) ? 142989288169013248 : 65535)) : (((((var_6 & 663930246) == -98))))));
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_23 = (min(var_23, ((((max(var_13, -9223372036854775790)) >= ((min(var_5, var_4))))))));
                        var_24 = ((var_5 > (((((18446744073709551601 ? var_10 : var_11))) ? ((min(var_10, var_3))) : (~var_7)))));
                    }
                }
                for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                {
                    arr_48 [i_9] = (((((var_11 && (-1 && -4))))) + (((~-709365007) ? 2147483643 : (70 % 2724231531220193857))));
                    var_25 = (min(var_25, ((min(var_0, (var_5 % var_13))))));
                }
            }
        }
    }
    var_26 = ((~((var_10 | (min(var_12, 5820766174329460006))))));

    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        arr_53 [i_16] [i_16] = ((((min((~2143), ((var_6 ? 0 : 664105901))))) ? (((max(167, var_7)) | var_10)) : (((var_0 > var_4) >> 1))));
        var_27 = ((-((var_6 | (var_2 * 0)))));
    }
    #pragma endscop
}
