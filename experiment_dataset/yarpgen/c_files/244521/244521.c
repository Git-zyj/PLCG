/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (max(var_2, (max((arr_1 [i_0] [i_0]), 692744692908810365))));
        var_18 += (((arr_2 [i_0]) ? var_10 : (min(var_8, 32767))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = ((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_20 = (min(var_20, -0));
            arr_10 [i_1] [i_1] [i_1] = (arr_6 [i_1]);
            arr_11 [i_1] [14] [i_1] = (arr_1 [i_1] [i_1]);
            var_21 += ((((((arr_4 [11]) >> (var_3 - 459047927)))) < (~17753999380800741271)));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_22 = (arr_7 [i_1] [i_1]);
                var_23 = (!23);
                arr_15 [i_1] = var_14;
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_24 &= 692744692908810344;
                var_25 = ((var_11 | (var_8 || var_11)));
                var_26 = var_8;
            }
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_27 &= var_5;
            var_28 = ((-(((arr_19 [i_1]) ? var_7 : var_5))));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_25 [i_1] = (arr_19 [i_1]);
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_29 += (arr_20 [3]);
                            var_30 = ((~(arr_16 [i_1])));
                            arr_30 [i_1] [1] [i_6] [i_7 + 1] [i_6] [1] = (((arr_29 [i_7 + 1] [i_7 + 1] [6] [i_7 - 2] [i_5]) / (arr_17 [i_1] [i_7] [i_7 - 2] [i_1])));
                            var_31 = (max(var_31, (((32767 ? 0 : (var_7 * -1200235016))))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            arr_35 [i_1] [i_9] = (((arr_12 [i_9] [i_1]) ? ((var_9 ? var_0 : var_4)) : (-32767 - 1)));
            arr_36 [i_1] [1] = (arr_7 [i_1] [i_9]);
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_43 [i_1] [i_1] = var_5;
                        var_32 = ((-5478592820472956614 ? 17753999380800741283 : 17753999380800741272));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        arr_47 [12] [i_12] &= (((arr_6 [1]) ? (max((((var_10 ? var_14 : (arr_34 [i_12])))), ((1 ? 1 : 7245716566619778916)))) : ((var_10 ? (((min((arr_45 [i_12]), (arr_13 [i_12] [i_12] [1]))))) : -5478592820472956614))));
        var_33 = max(((max(var_6, (arr_4 [i_12])))), var_5);
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {
        var_34 = (((!(arr_38 [i_13] [i_13] [i_13] [i_13]))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                {
                    arr_55 [i_14] [i_14] [i_14] [i_14] = ((!((max((arr_23 [i_13] [i_15 + 1] [i_15]), (732174803 && -1286157040))))));
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 22;i_17 += 1)
                        {
                            {
                                var_35 = (min(var_35, (arr_46 [i_14])));
                                var_36 += var_13;
                                arr_61 [i_13] [i_17] [i_17] [i_13] = ((((min(((max(1, 32767))), (((arr_2 [i_13]) - var_11))))) || (((var_9 ? var_0 : ((-(arr_0 [i_13] [i_13]))))))));
                            }
                        }
                    }
                    var_37 = arr_17 [i_14] [i_14] [i_14] [i_14];
                    arr_62 [i_13] [i_13] [i_13] [i_13] = (((!var_0) - ((~(min(62849, 1769278990))))));
                }
            }
        }
    }
    var_38 = -58;
    /* LoopNest 2 */
    for (int i_18 = 2; i_18 < 20;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            {
                arr_67 [i_18] = 32767;
                var_39 = (max(var_39, ((((min(-1769051861, -58)) != (((max((arr_34 [i_18 + 1]), (var_5 != var_9))))))))));
            }
        }
    }
    var_40 &= var_8;
    #pragma endscop
}
