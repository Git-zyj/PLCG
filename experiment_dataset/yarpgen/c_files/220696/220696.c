/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((min(((var_7 >> (var_3 - 34287)), var_5))));

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_12 |= var_0;
            arr_6 [i_1] = (min(1073741824, 4674185083202374229));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_13 = (((((var_4 ? 2147483647 : var_8))) ? 3221225471 : var_8));
            arr_9 [i_2] = ((~(4674185083202374229 - var_11)));
            var_14 ^= (((max(var_7, var_1)) | ((((12 | -7807) / 1923951962)))));
            arr_10 [i_2] [i_2] = var_8;
        }

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                arr_15 [i_4] [i_4] = var_10;

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_18 [i_4] [i_4] [1] [1] = (((((!var_3) || ((max(var_7, (arr_13 [i_4])))))) ? (min((!65535), (max((arr_16 [4] [i_4] [i_4] [i_5]), (arr_13 [i_4]))))) : var_9));
                    var_15 = (3221225471 ? (!61) : 1073741824);
                }
                arr_19 [i_4] [i_3] [i_4 - 1] = ((!(!11672811844466233912)));
                var_16 |= (((var_6 >= var_3) ? (min((arr_12 [i_3 + 1] [i_4 + 2]), var_8)) : (!var_0)));

                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    var_17 = (max(var_17, (((+((-(max((arr_2 [i_0] [i_3 - 2]), var_4)))))))));
                    var_18 = ((((max((112 ^ var_6), var_5))) || (var_10 / var_0)));
                    arr_24 [i_0] [i_0] [i_4] [i_3] = ((((max((61 && -27678), 65535))) | (min(-var_5, (((!(arr_21 [i_0] [i_3 - 2] [i_4] [i_4]))))))));
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        var_19 = var_7;
                        var_20 = ((61 ? 1 : 3221225443));
                        arr_29 [i_4] [i_3] = (min(var_11, ((var_10 ? (arr_0 [i_3 - 1]) : var_3))));
                    }
                    arr_30 [i_4] = 3221225471;
                    arr_31 [i_0] [i_4] [i_0] = (-((-var_11 ^ (!var_2))));
                }
            }
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                arr_34 [1] [i_3] = var_11;
                arr_35 [i_9] [i_3] [i_0] = ((((var_0 >= (var_3 == var_8))) ? ((var_8 ? (((3221225473 ? var_4 : 560314219))) : var_1)) : 38104));
                var_21 = ((var_3 ? (max(((min(8663885712954291152, 1073741824))), 4674185083202374229)) : ((((!((max((arr_23 [i_0] [6] [i_3]), var_10)))))))));
            }
            var_22 = (arr_13 [i_3]);

            /* vectorizable */
            for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
            {
                arr_39 [i_0] [3] [i_10] = (var_6 ? 2309580 : (arr_32 [i_0] [i_10] [i_10] [i_3 - 2]));

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_23 = (arr_14 [i_11] [i_3] [i_11]);
                    var_24 = var_8;
                }
                arr_42 [i_0] [i_10] = (arr_14 [i_3] [i_3] [i_10]);
                arr_43 [i_10] [i_10] [i_3] [i_0] = var_10;
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
            {
                arr_46 [i_0] [i_3] [i_12] = (((((var_3 ? (~var_6) : var_10))) != (min(var_3, ((45 ? var_2 : var_1))))));
                var_25 *= ((((var_4 ? var_4 : var_4)) - (min(var_4, 107))));
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    arr_53 [i_0] [12] [i_13] [i_13] [i_14] = (((((~var_5) ? ((var_9 ? var_10 : var_6)) : (~var_0))) & (((((((min((arr_26 [i_3]), var_9))) + 2147483647)) << (((~var_8) - 2642275396)))))));
                    arr_54 [i_13] [i_14] = (min((arr_7 [i_3]), ((var_4 ? var_6 : (arr_44 [i_3 + 1] [i_3 - 1] [i_3 - 2])))));
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_26 = (((48 && 1834357872) ? (~var_4) : (((((74 ? var_6 : 3173327588338428129))) ? ((var_11 ? var_9 : var_8)) : (((max(var_11, var_6))))))));
                    var_27 = (var_1 / (max(-555991217, (arr_44 [i_3 - 1] [i_3 - 2] [i_13]))));
                    arr_57 [i_0] [i_0] [i_3 + 1] [i_15] [i_15] [i_3] = ((!(arr_47 [i_3 + 1] [i_3] [i_3 - 2] [i_3])));
                }

                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_28 = 3221225471;
                    arr_60 [i_0] [i_0] [i_13] [i_16] = ((-((4122 ? var_6 : var_9))));
                    arr_61 [i_16] [i_13] [i_3] [i_0] = (max(((5946317031806050699 ? var_10 : ((var_1 ? var_8 : var_6)))), var_4));
                    var_29 = ((((((arr_4 [i_3] [i_3 - 1]) ? var_9 : var_8))) ? (min(var_2, var_1)) : (max(var_7, var_1))));
                }
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    arr_65 [i_17] [i_17] [i_13] [i_17] = var_7;
                    var_30 = (0 || 113);
                    arr_66 [i_0] [i_17] [i_17] [18] [i_17] [i_17] = ((-(!var_3)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_31 *= (((((var_5 ? var_9 : var_11))) ? var_9 : ((var_2 ? 8013750501169691805 : var_6))));

        for (int i_19 = 2; i_19 < 12;i_19 += 1)
        {
            var_32 = arr_62 [i_19 + 1] [i_19] [i_19];
            /* LoopNest 2 */
            for (int i_20 = 3; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    {
                        var_33 = var_10;
                        var_34 = (min(var_34, (var_11 % 16487)));
                        arr_79 [i_21] [i_19] [i_19] [i_18] = (((arr_72 [i_20 - 1] [i_20 - 3] [i_19] [i_20 - 2]) % -var_7));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 2; i_22 < 10;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 11;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        {
                            arr_88 [i_18] [i_19 + 1] [11] [i_19] [4] = var_4;
                            var_35 = (~var_5);
                            arr_89 [i_18] [i_19] [i_24] [i_24] [i_24] [i_24] [i_23 + 1] = ((var_2 ? (arr_63 [i_19] [i_23 - 1] [i_23] [i_23] [i_23 + 1]) : var_1));
                        }
                    }
                }
            }
        }
    }
    var_36 = ((-6763482148974387463 ? ((91 ? -59509 : (var_0 * 438383733816094601))) : var_6));
    #pragma endscop
}
