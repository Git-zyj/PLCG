/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max(var_8, (min(var_5, 238)))) ^ ((min(var_8, (var_3 - 3513637425)))));
    var_12 = ((var_8 == (((min(var_10, var_9)) * var_0))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = var_0;
        arr_3 [i_0] [i_0] = ((((var_2 ? 30836 : ((var_9 ? var_9 : var_4)))) < ((((!(((var_8 ? 781329865 : var_0)))))))));
        arr_4 [i_0] = 7750727057028974669;
        var_14 = ((min(((var_7 ? var_9 : var_6)), var_8)));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_15 = (var_2 ^ var_9);
        arr_7 [i_1] = (((~((var_5 ? var_10 : var_2)))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_16 = 38578;
        var_17 += var_8;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_18 = (var_0 ^ var_3);
            arr_20 [i_3] [i_3] = (((-1356 < ((var_3 ? var_2 : var_4)))));

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                arr_24 [i_5] [i_4] [i_4] = (min((var_4 >= var_10), (((!var_2) <= 781329879))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_30 [i_3] [i_5] [6] [i_6] [i_6] [i_6] [i_7 + 1] = var_5;
                            var_19 = ((((min((min(var_6, var_0)), var_2))) ? ((((!var_8) >> (1 || var_2)))) : (min((((var_7 ? 1 : 204))), ((781329843 ? var_2 : var_8))))));
                            arr_31 [8] [i_5] [i_5] [i_5] [i_7] [i_7] = (((((var_7 % var_2) ^ (var_3 == var_7))) - 3513637432));
                            var_20 = (var_2 >= var_0);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                var_21 = var_0;
                var_22 = 781329863;
                var_23 = (~var_4);
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_24 = (max(var_24, var_9));
                arr_39 [i_3] [i_3] [i_3] [i_9] = 3154946159;
                var_25 = (max(var_25, ((min((((((var_2 ? var_9 : var_5))) && (5114184788604048481 || var_7))), var_3)))));
                arr_40 [i_9] [i_4] [4] [i_9] = (((((var_8 + (var_6 - var_5)))) ? ((~(var_5 >> var_3))) : (((((var_9 ? var_5 : 69))) ? (var_9 ^ var_10) : (((var_0 ? var_10 : var_8)))))));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_47 [i_3] [11] [11] [i_3] = var_4;

                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_26 = 745469424;
                        var_27 = (max(var_27, 1902951676));
                    }
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        var_28 = (max(var_28, var_4));
                        var_29 = var_0;
                        var_30 -= (var_2 < var_10);
                    }
                    for (int i_14 = 1; i_14 < 10;i_14 += 1)
                    {
                        arr_57 [i_3] [i_4] [i_14] [i_11] [i_14] = var_1;
                        var_31 -= (var_0 ^ var_4);
                        var_32 = (var_5 != var_4);
                        var_33 ^= (((var_0 ? var_10 : var_10)));
                    }
                    arr_58 [i_3] [i_4] [i_10] [i_11] [i_10] [i_4] = ((var_6 ? -1902951688 : var_9));
                    var_34 = var_1;
                    arr_59 [i_3] [8] [i_10] [i_11] = (((var_4 & var_4) ? var_0 : ((var_7 ? var_8 : var_9))));
                }
                var_35 = ((((min((var_5 / 3513637414), (max(var_1, var_5))))) ? (min((min(var_4, var_6)), ((min(var_3, var_10))))) : ((var_5 | (min(var_7, var_5))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_64 [i_3] [i_15] = ((min(var_5, var_0)));
                            var_36 = (max(var_36, var_6));
                            arr_65 [i_3] [i_4] [i_10] [i_15] [i_4] |= (min(((var_6 ? 75 : var_4)), (var_9 || var_5)));
                        }
                    }
                }
                var_37 |= 1022973247;
            }
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 12;i_17 += 1)
        {
            var_38 = var_5;
            arr_69 [i_17] = var_10;
        }
        var_39 = (max(var_39, (((((((-745469424 * var_2) ? (min(var_7, var_1)) : var_2))) ? var_9 : (((var_0 - -745469436) * var_1)))))));
        var_40 = 745469419;
    }
    #pragma endscop
}
