/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 |= (arr_1 [i_0 + 1]);
        arr_2 [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_1));
        arr_5 [i_1] = ((var_2 ? 94 : var_8));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_3] [i_1] |= (!var_9);
                    arr_13 [i_2] [i_2] [i_2] [i_3] = (-6944000472833979948 || 1);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (max((arr_9 [i_4]), -23834));

        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_20 [i_4] [i_5] = (max(((min((arr_3 [i_4]), 56120))), -6944000472833979949));
            arr_21 [i_4] = (!-6944000472833979948);

            /* vectorizable */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                var_14 = arr_15 [i_4] [i_4];
                arr_25 [i_6] [8] [8] [i_5] = (1 || var_3);
            }
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_15 = -6944000472833979936;
            var_16 = (((arr_27 [i_4]) ^ -6944000472833979918));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    {
                        var_17 = ((((-9 ? 0 : -91)) > (((8 || var_5) ? (1 && 130) : (var_10 < var_6)))));
                        var_18 = (min(var_18, ((max((min(var_5, var_3)), 28167)))));
                        arr_36 [i_4] [i_7] = ((-(max(var_11, (arr_33 [i_4] [i_4] [i_4] [i_4])))));
                    }
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_19 = (((((((max(1, 49)))) & (max(6944000472833979917, var_1)))) & (((max(var_3, var_4))))));
                            arr_44 [i_4] [i_7] [i_10] [i_10] [i_7] [i_10] = var_6;
                            var_20 = (((min(-1584088749243957308, var_3)) - -1));
                        }
                    }
                }
                arr_45 [i_4] = ((((8225342294030587310 == 51381) < 0)));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                var_21 = ((!((max((arr_14 [i_4]), var_5)))));
                var_22 = var_9;
                var_23 = ((-(-34572 >= var_5)));

                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    arr_52 [i_7] [i_13] [8] [i_7] &= (max((6944000472833979970 / var_8), 16776194848879694054));
                    var_24 = var_11;
                }
                for (int i_15 = 3; i_15 < 19;i_15 += 1)
                {
                    var_25 = 6856152415029466841;
                    var_26 = 4444;
                    var_27 = (!var_5);
                    arr_57 [i_4] [i_4] |= 96;
                    arr_58 [i_4] [i_4] [i_13] [i_15] [i_7] [i_15] = var_11;
                }
            }
            var_28 = (max(var_28, (((+(((arr_27 [i_4]) ? (arr_27 [i_7]) : (arr_27 [i_7]))))))));
        }
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
    {
        var_29 = (min(var_29, var_1));
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 17;i_19 += 1)
                {
                    {
                        arr_70 [9] [9] [i_19] = var_2;
                        var_30 = ((!((max(34565, 28561)))));
                    }
                }
            }
        }
    }
    var_31 = var_0;
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 15;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 12;i_21 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 12;i_23 += 1)
                    {
                        for (int i_24 = 3; i_24 < 12;i_24 += 1)
                        {
                            {
                                var_32 &= (!72);
                                arr_87 [i_22] [i_22] [i_23] [i_22] [i_22] [i_20] = (!1);
                            }
                        }
                    }
                }
                arr_88 [5] [i_21 - 2] [i_21 + 3] = (min((!6944000472833979970), 16776194848879694079));

                for (int i_25 = 1; i_25 < 1;i_25 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_26 = 4; i_26 < 12;i_26 += 1)
                    {
                        for (int i_27 = 2; i_27 < 14;i_27 += 1)
                        {
                            {
                                arr_97 [i_20] [14] [12] [i_20] [i_20] [i_26 - 3] [i_27 - 2] &= ((((1 ? var_6 : var_4))));
                                var_33 = (((((arr_34 [i_25 - 1] [i_27 + 1] [i_21 + 3]) % 26245)) >= (((arr_34 [i_25 - 1] [i_27 + 1] [i_21 + 3]) ? var_3 : -9022762000772109490))));
                                arr_98 [i_20] [i_21] [i_25] [i_26] [i_26] [i_26] = -2632888669350829551;
                                arr_99 [i_20] [i_20] [i_21 + 3] [i_20] [i_26 - 1] [10] [i_27 - 2] = var_8;
                                arr_100 [i_20] [12] [i_25] = ((var_1 | (arr_27 [i_21 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 15;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 15;i_29 += 1)
                        {
                            {
                                var_34 = (max(((min(-9022762000772109490, var_9))), ((min(9022762000772109489, ((max(952527814, 65509))))))));
                                var_35 = (min(var_35, ((((max((arr_42 [i_20] [i_20] [14] [i_20] [i_21 + 2]), (arr_42 [i_20] [i_21] [3] [i_21 - 2] [i_21 + 1]))) ? var_8 : (-127 - 1))))));
                                var_36 = (max(var_36, var_1));
                            }
                        }
                    }
                    arr_105 [i_25] [i_21] [i_21] = -var_9;
                    var_37 = 7785014786248691516;
                }

                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    var_38 = 28683;

                    /* vectorizable */
                    for (int i_31 = 1; i_31 < 1;i_31 += 1)
                    {
                        arr_111 [14] [8] [i_30] [i_30] = (arr_53 [i_21 + 2] [i_30] [i_31 - 1] [i_21]);
                        arr_112 [6] = arr_6 [i_21];
                    }
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        var_39 = (((((arr_4 [i_20]) - var_7)) >= ((min(var_0, (var_9 >> 0))))));
                        arr_116 [i_20] [i_21] [i_21] [i_32] = (min((~1968813343), 10661729287460860091));
                    }
                    arr_117 [i_20] [i_21] [i_21] [i_30] = (((-12604 > (!94))));
                    var_40 = (min(var_40, 0));
                }
                /* vectorizable */
                for (int i_33 = 1; i_33 < 11;i_33 += 1)
                {

                    for (int i_34 = 2; i_34 < 14;i_34 += 1)
                    {
                        var_41 = (var_11 <= -38);
                        var_42 = (max(var_42, 6944000472833979934));
                        arr_126 [i_33] = ((var_0 % var_5) - 85);
                    }
                    /* LoopNest 2 */
                    for (int i_35 = 0; i_35 < 15;i_35 += 1)
                    {
                        for (int i_36 = 2; i_36 < 11;i_36 += 1)
                        {
                            {
                                arr_131 [i_20] [i_33] = 2249132587440894193;
                                var_43 = -5363170226252848357;
                            }
                        }
                    }
                }
                arr_132 [i_20] = var_6;
            }
        }
    }
    #pragma endscop
}
