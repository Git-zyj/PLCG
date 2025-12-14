/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                arr_6 [i_0] = ((~var_9) | (!var_16));

                for (int i_3 = 4; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_18 -= ((var_8 >> (-10272 + 10300)));
                    arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] = (((!var_17) != var_17));
                }
                for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_1] [i_2] [i_4 + 1] = -3969783541282262498;
                    var_19 = var_16;
                    var_20 = 29721;
                }
                var_21 = 1649263557;
                var_22 = 12734;
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_23 = var_12;
                arr_19 [i_0] = -4190;
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] = (((((~(arr_10 [i_0] [i_0] [i_1] [i_1] [i_6])))) ? (((-2040750365 ? 35 : 1557949933))) : (-3969783541282262512 % 436719912)));
                arr_23 [i_0] [i_1] [i_0] [i_0] = ((-1 ? -42 : var_12));
            }
            arr_24 [i_0] = 14;
            var_24 = (18446744073709551615 % 4201405929);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_31 [i_0] [7] [i_0] = (((32755 >= 1) % var_5));
                        var_25 = (arr_18 [i_0]);
                    }
                }
            }
        }
        arr_32 [i_0] [i_0] = arr_4 [i_0] [i_0];
    }
    var_26 = ((321259925 ? var_4 : (((!(((93561367 ? -1413557354 : var_17))))))));

    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {
        var_27 = -1413557357;
        var_28 = -419960570560642253;
        arr_35 [i_9] [i_9] = (arr_34 [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    arr_46 [i_11] [i_11 + 1] [9] [i_12] = (max((((max(31022, 32753)))), ((((var_12 | 136) || (!-321259913))))));
                    var_29 = 0;
                    arr_47 [i_10] [i_11] = 1413557354;

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        arr_51 [i_10] [i_11] [i_11] [i_13] = var_9;
                        arr_52 [i_13] [i_11] [i_11] [i_10] = (23162 ? 110 : 87);
                        arr_53 [i_11] = 127;
                    }
                    var_30 = ((-(var_13 % 22)));
                }
            }
        }
        arr_54 [i_10] [i_10] = ((((((min(2737017363, 1758498383))) ? 1413557354 : 15117901941640678207)) >> (var_7 + 4293170967055912424)));
        arr_55 [14] [i_10] = ((~((-(var_8 - 0)))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_31 -= (min(-766807231, ((((arr_57 [i_14] [i_15]) || -455726669)))));
                    var_32 = arr_39 [i_10];
                    arr_60 [i_15] [i_15] = (((0 <= 93561367) ? ((21 ? -8410101904054083267 : (((458752 ? -458752 : 5482))))) : ((2659 ? (642497357 / var_17) : 65502))));
                    var_33 = (max(var_4, ((127 ? 5348841833460299688 : 37755))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 10;i_17 += 1)
        {
            {
                var_34 = ((!(-3238398 | 8992644318039227043)));
                var_35 = ((((~((-463952252 ? -45 : (arr_26 [i_16] [i_16] [i_16]))))) >> 0));
                arr_67 [i_16] [i_17] = (((((+(max((arr_30 [i_16] [1]), 127))))) ? var_8 : ((max((min(-458750, (arr_50 [i_16] [i_16] [i_17 - 3] [i_17 + 1] [i_17]))), 1)))));
                var_36 = (min(((min(var_0, -738333362))), ((91 ? -27017 : 1073741823))));
            }
        }
    }
    var_37 = var_12;
    #pragma endscop
}
