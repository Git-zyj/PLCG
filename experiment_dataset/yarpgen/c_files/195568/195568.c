/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2295009404118226721;
    var_12 += (min((min(2155152871140395848, (max(-127, (-9223372036854775807 - 1))))), ((min(((min(139, 15))), var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((min((min(9223372036854775782, ((min(9794, 65535))))), var_3)))));
                var_14 = 55741;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_15 = 15475324555630836426;
                    arr_8 [i_0] [i_0] [i_1] = (((var_9 * 8291385510893109233) < -230224252));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_16 = -9223372036854775780;
                        arr_11 [i_0] [i_0] [i_1] [i_0 + 1] [i_0] [i_0] = var_2;
                        var_17 += -1;
                        arr_12 [i_0] [i_1] [i_2] &= 2413635376;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_18 = (15475324555630836426 || 15475324555630836449);
                        var_19 = 11289496597340932948;
                        var_20 = var_6;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 = var_10;
                        arr_18 [i_5] [i_1] [i_1] [i_5] = 127;
                        var_22 &= ((139 ^ (2413635376 == 1356103470)));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_23 -= 7;
                        var_24 += ((9799 << (var_3 - 48)));
                        arr_22 [i_1] [6] [i_2] = var_1;
                    }
                    var_25 = (min(var_25, 144115188075855871));
                    arr_23 [i_1] [i_1] = var_1;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_26 += 127;
                                arr_32 [i_1] [i_1] [i_7] [i_1] [i_1] = 1;
                                var_27 = 2155152871140395848;
                                arr_33 [i_0] [6] [i_7] [i_1] = 147;
                            }
                        }
                    }

                    for (int i_10 = 3; i_10 < 18;i_10 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] &= 40;
                        var_28 = var_8;
                        var_29 = 1;
                        var_30 = (min(var_30, 2971419518078715209));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_31 = (((117 ^ 21447) >> (-118 + 119)));

                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            var_32 = (min(var_32, 9223372036854775779));
                            var_33 = 36242;
                        }
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_46 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] = 8900564786924907728;
                        arr_47 [i_1] = 1;
                        var_34 = (min(var_34, -104));
                    }
                    arr_48 [i_7] [i_1] [i_1] = 122;
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            {
                                arr_58 [i_0 - 2] [i_1] = -25;
                                var_35 = -9223372036854775787;
                            }
                        }
                    }

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {

                        for (int i_18 = 2; i_18 < 18;i_18 += 1)
                        {
                            var_36 += var_3;
                            arr_65 [i_0] [i_0] [i_1] [i_14] [i_17] [9] = ((var_8 >= (9223372036854775807 / var_5)));
                            var_37 += var_7;
                            var_38 += var_2;
                        }
                        for (int i_19 = 2; i_19 < 17;i_19 += 1)
                        {
                            var_39 += 4294967288;
                            arr_69 [i_1] [i_1] [10] [i_17] [i_19] [i_19] = 32767;
                        }
                        var_40 = (max(var_40, 14598112073930168772));
                        arr_70 [i_0] [2] [i_0] [0] &= (14598112073930168772 * 0);

                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            var_41 = (var_6 ^ -2231);
                            arr_73 [i_1] [i_1] = 0;
                            var_42 = 70368207306752;
                            var_43 = (var_7 * (28361 < 0));
                        }
                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            arr_78 [i_0 + 1] [i_1] [i_14] [i_0] [i_21] &= var_0;
                            var_44 = 18446744073709551615;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            {
                                var_45 = var_2;
                                var_46 += -32755;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_24 = 0; i_24 < 20;i_24 += 1)
                {
                    var_47 = (var_3 * -2236);
                    var_48 = (min(var_48, 121));
                }
            }
        }
    }
    var_49 = 27624;
    var_50 = (max(var_1, (min(32165, (80 - 4994977138287080788)))));
    #pragma endscop
}
