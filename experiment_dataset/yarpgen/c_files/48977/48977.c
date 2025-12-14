/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_11 = ((1762843365236523868 ? (min(0, (max((arr_0 [i_0]), var_8)))) : (((-((max(var_8, var_3))))))));
        arr_3 [i_0] = ((((((-1 ? var_8 : var_4)) >> (((max(7353396289921406827, 5511822381525992907)) - 7353396289921406822))))) ? (((~(arr_1 [i_0])))) : 18446744073709551615);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = ((((max(var_8, (arr_1 [20]))) ^ (((arr_1 [22]) + 1455013415)))) + ((((13 ? (arr_1 [14]) : 11)) ^ -6615)));
        var_12 = (min((min((arr_1 [8]), var_9)), ((var_0 ? var_2 : (arr_0 [0])))));
        arr_8 [i_1] [i_1] = (max((arr_1 [10]), (max(var_5, (2002031631 / 798110382601231027)))));
        var_13 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_14 ^= (max(232, (max(6503744285773277220, (!209054169)))));
        arr_12 [i_2] = ((!((var_1 && (arr_2 [i_2])))));
    }
    var_15 = max(798110382601231007, 2985537014);

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_16 *= ((31 > var_5) ? var_10 : (arr_10 [i_4 + 2] [i_4 - 1]));
            arr_17 [i_3] [i_3] [i_3] = (((arr_14 [11]) ? (81 + 179) : (2985537018 >= 1)));
            var_17 = 243;
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {

                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            var_18 = (max(var_18, 0));
                            var_19 = (((~255) - ((2154514586 ? 2154514593 : (arr_1 [i_3])))));
                            arr_27 [3] [3] [i_6] [i_6 - 2] [i_3] = ((-((var_0 ? -283562764 : (arr_2 [i_3])))));
                            var_20 = (((3425051649 ? 1421855250 : -8663939660768397017)));
                            arr_28 [i_8] [i_3] [i_3] [i_3] = (((-283562775 ? 13361397961896170137 : var_8)));
                        }
                        arr_29 [i_3] [i_5] [i_5] [i_6] [i_3] = ((-(((arr_19 [i_3] [i_3] [i_3]) - -16858))));
                    }
                }
            }
            var_21 = (arr_14 [i_3]);
            var_22 = (((arr_10 [i_5 - 1] [i_5 + 1]) ? 939524096 : var_0));

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_23 ^= 20698;
                var_24 -= -var_9;
                arr_32 [i_3] [i_3] = ((~(arr_25 [i_3] [i_5 + 1] [i_9] [i_3] [i_5] [i_9] [i_5 + 1])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_41 [i_3] [i_5] [i_5 - 2] [i_9] [i_9] [i_3] [i_11] = ((-7263183695502704063 ? -27299 : 8090153501998751569));
                            var_25 = var_0;
                            var_26 = (!82116855);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_27 *= (((arr_24 [i_5] [i_5 + 2] [i_5 + 2] [i_5]) ? (((arr_2 [20]) - (arr_30 [i_3] [i_3] [0]))) : -1));
                            var_28 = (max(var_28, (var_8 - -23796)));
                        }
                    }
                }
                arr_49 [i_3] [i_12] [i_5] [i_3] = var_5;
            }
        }
        arr_50 [i_3] [i_3] = (i_3 % 2 == zero) ? ((max((((((var_8 >> (((arr_40 [i_3] [i_3] [i_3] [i_3]) + 47))))) ? (max(var_10, var_10)) : (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))), ((var_7 + (min(var_6, var_9))))))) : ((max((((((var_8 >> (((((arr_40 [i_3] [i_3] [i_3] [i_3]) + 47)) + 46))))) ? (max(var_10, var_10)) : (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))), ((var_7 + (min(var_6, var_9)))))));
    }
    #pragma endscop
}
