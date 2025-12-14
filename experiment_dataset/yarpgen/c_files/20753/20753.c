/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? ((var_5 ? var_12 : var_0)) : (((127 ? (-127 - 1) : -6479992311827593002)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 ^= ((((min(((var_5 ? var_0 : var_9)), var_0))) ? (min(var_15, var_8)) : ((((var_14 + var_10) + (((var_13 ? var_3 : var_4))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, -6479992311827593002));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_16 [i_4] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = (var_5 + var_12);
                                var_20 = var_9;
                                var_21 = (min(var_21, (((var_3 ? ((9223372036854775807 ? 0 : 214)) : ((var_10 ? var_13 : var_15)))))));
                                var_22 *= ((var_14 ? var_5 : var_8));
                            }
                            for (int i_5 = 3; i_5 < 11;i_5 += 1)
                            {
                                var_23 = (((((((var_13 ? var_15 : var_4))) ? var_4 : ((var_4 >> (var_6 - 3420))))) & ((var_13 ? ((var_6 ? var_12 : var_4)) : var_6))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_5 + 2] [i_2] = ((((max((((-26885 ? 16383 : (-127 - 1)))), var_14))) ? ((max(var_6, var_3))) : (max((var_5 || var_8), (min(var_2, var_5))))));
                                var_24 = (max((min(-6479992311827593002, (-127 - 1))), (((((max(var_5, var_4))) | (max(var_12, var_5)))))));
                                var_25 ^= (min(((-74 ? -28772 : -6479992311827593002)), ((((var_10 <= var_16) & (var_1 <= var_1))))));
                            }
                            var_26 = (min(var_26, (min(((((min(var_9, var_0))) ? (var_5 - var_14) : (((var_12 ? var_2 : var_3))))), (min(var_4, (min(var_13, var_1))))))));
                            arr_20 [i_0] = ((((((var_9 ? var_15 : var_15))) ? var_16 : (var_13 != var_14))));
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    arr_24 [i_6] [i_1] [i_0] = max(((max(196, ((8930574657532537018 ? 21334 : (-127 - 1)))))), 3003480468);
                    var_27 = (((var_0 / var_8) ? ((196 ? 1577 : ((((-127 - 1) ? 42 : -1))))) : (((var_15 / ((-36 ? 196 : 3727305315)))))));
                }
                for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_28 = (((min(var_1, var_3)) * ((min((var_8 > var_4), var_12)))));
                    arr_28 [i_7] = ((((((225 ? 127 : 0)))) ? (((-14909 ? 15307 : 32767))) : (min(var_1, (((var_1 ? var_5 : var_13)))))));
                }
                for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_35 [i_8] = ((80 ? -1090116039922004498 : 7476603901086999804));
                        var_29 = (min(var_29, ((min(((var_11 ? var_4 : var_9)), -15105)))));
                        var_30 = ((var_5 / ((var_0 ? var_2 : (((var_5 ? var_2 : var_7)))))));
                        var_31 = min(((((min(var_14, var_1))) ? (((max(var_5, var_13)))) : ((var_0 ? var_14 : var_2)))), ((max(var_7, var_6))));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_32 -= (min((-127 - 1), 3015800077));
                        var_33 = (((((var_8 ? ((var_2 ? var_5 : var_14)) : (var_1 | var_14)))) ? ((var_10 ? var_0 : (var_7 && var_7))) : (((var_10 ^ (min(var_9, var_11)))))));
                        var_34 = (min(((((min(var_1, var_0))) ? (min(var_13, var_8)) : ((var_6 ? var_12 : var_0)))), ((max((min(var_6, 2914907657)), (((123 ? -15105 : 185))))))));
                        arr_38 [i_0] [i_1] [i_8] [i_10] [i_10] [i_10] = (((((var_16 ? (((min((-127 - 1), 190)))) : (min(var_0, var_7))))) ? ((var_7 ? var_2 : var_9)) : ((((max(var_6, var_6))) ? ((var_12 ? var_4 : var_14)) : (var_3 != var_11)))));
                        var_35 = (max((((((2294 ? (-32767 - 1) : 991723042)) <= ((var_6 ? var_12 : var_4))))), ((((var_10 << (var_15 - 28487))) * (((var_16 ? var_15 : var_15)))))));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {

                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            var_36 -= ((150 ? 14890885815797328059 : -2980));
                            arr_46 [i_0] [i_1] [i_8] [i_8] [i_11] [i_12] = (min(0, ((8543 ? 8305001730492340923 : 460697288493725466))));
                            var_37 = ((((((((var_8 ? var_6 : var_0))) ? ((var_0 ? var_1 : var_11)) : var_0))) || ((((min(var_2, var_3))) || (var_13 % var_3)))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_38 = (max(var_38, (var_10 & var_16)));
                            arr_51 [i_0] [i_8] [i_0] [i_11] [i_13] = ((var_0 ? var_1 : var_6));
                            var_39 ^= ((((var_12 ? var_12 : var_8)) < (-8144 == 15595)));
                            var_40 = ((var_4 ? ((1538558500 ? 9464891003313272221 : -5915)) : var_1));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_41 = (3984 & -1);
                            var_42 = (var_0 - var_7);
                        }
                        var_43 = ((min(((max(var_6, var_12))), ((var_3 ? var_0 : var_13)))));

                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            arr_56 [i_0] [i_1] [i_8] [i_8] [i_11] [i_11] [i_15] = ((var_15 ? (min(((var_7 ? 0 : 124)), ((8543 ? (-32767 - 1) : var_2)))) : 31287));
                            var_44 = (((((var_6 ? var_15 : var_4))) || (((var_10 ? var_3 : var_1)))));
                        }
                    }
                    var_45 = ((((((((var_15 ? var_10 : var_0))) ? ((var_2 ? var_15 : var_8)) : var_0))) ? ((min((var_6 - var_2), var_14))) : (((((var_12 ? var_4 : var_7))) ? (var_14 + var_0) : (((var_6 ? var_6 : var_15)))))));
                    var_46 = (min((min(var_4, var_9)), ((min(15302, 92)))));
                }
                arr_57 [i_0] [i_0] = (((((var_14 | var_13) ? (((var_9 ? var_9 : var_10))) : (var_0 + var_3))) == (((var_10 ? var_7 : var_6)))));
            }
        }
    }
    var_47 = (min(var_47, (((((((4651344322994741334 ? 124 : 13795399750714810281)))) ? (var_16 | var_13) : var_10)))));

    for (int i_16 = 2; i_16 < 20;i_16 += 1)
    {
        var_48 = (min(var_48, ((max(((((var_3 + 2147483647) >> (var_10 - 3250456866)))), (((((var_7 ? var_3 : var_15))) ? (max(var_1, var_6)) : (((var_12 ? var_3 : var_12))))))))));
        var_49 = ((((((((var_12 ? var_1 : var_10))) ? ((max(var_10, var_4))) : var_9))) ? ((((min(var_14, var_9))) ? (((var_1 ? var_12 : var_10))) : (min(var_5, var_11)))) : (max((var_7 == var_1), (max(var_9, var_3))))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 20;i_20 += 1)
                        {
                            {
                                var_50 -= ((((max(var_4, var_12))) ? ((min(var_5, var_13))) : (((2641934692332463611 ? -1 : 72)))));
                                var_51 = ((((min((var_5 - var_2), var_2))) ? ((((max(var_11, var_9))) ? ((var_9 ? var_11 : var_8)) : (min(var_16, var_0)))) : (((var_6 ? (((var_11 ? var_13 : var_7))) : var_11)))));
                            }
                        }
                    }
                    var_52 = (min(var_2, (((var_9 - var_10) - (32767 - 28087)))));
                }
            }
        }
    }
    #pragma endscop
}
