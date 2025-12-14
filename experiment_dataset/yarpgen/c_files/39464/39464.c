/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = 1661800923447905665;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 |= max(((9739 ? 316229307485868880 : 0)), (((((var_9 - (arr_0 [i_0])))) ? ((min(var_9, var_8))) : (min(1650777685087410620, (arr_2 [i_0]))))));
            var_17 = 713903595;
            var_18 += (((max((-9223372036854775807 - 1), var_0))) ? 2673864813 : var_9);

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] [i_2] = (((~var_0) ? (min(var_3, (arr_8 [i_2 + 2] [i_2 + 2]))) : (((16329 ? 1 : 70)))));
                var_19 = arr_0 [i_2 + 2];
                var_20 = 1;
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 = 3399721303051882503;
        var_22 = (((0 + 11918) ? var_8 : ((((var_1 ? 70231305224192 : 543989443485978569)) & var_11))));
        arr_13 [10] [10] |= (var_13 % (((65515 ? var_4 : 22220))));
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_23 = min(var_13, var_13);
                    arr_23 [i_4] = ((var_9 ? var_6 : var_13));
                }
            }
        }
        var_24 = (min(var_24, var_8));
    }
    for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_25 = (~var_12);
            arr_30 [2] [2] [2] = ((var_4 - ((((var_6 - var_0) == var_10)))));
            var_26 = ((16194325952569186179 & 12365862044338468895) / (max(var_11, var_0)));
            var_27 = var_8;
            var_28 = 4096;
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_29 = var_3;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_30 += -4;
                        var_31 = var_0;
                        var_32 = (min(var_32, (23 > var_0)));
                        var_33 = (max(var_33, var_9));
                        arr_37 [i_7] [3] [3] [1] |= 1;
                    }
                }
            }
            var_34 = (((183 - var_2) ? (((0 ? 34 : 169))) : ((var_9 ? -15112 : (arr_28 [i_7] [i_7])))));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_35 = (((arr_21 [i_12]) - (((((var_0 ? var_9 : var_8))) ? var_14 : 2307397087))));
            var_36 = (max(var_36, var_10));
            var_37 = ((var_7 ? 27306 : 3936));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    {
                        var_38 = ((2160544960378936410 ? 1 : ((9423012052419961055 ? (var_8 | 255) : var_7))));
                        var_39 |= (max(var_3, (((17739751299259889627 / 8874) ? var_9 : (arr_31 [i_7 - 1] [i_7 - 1])))));
                        var_40 = (min(var_40, (((((min(((max((arr_40 [i_7 - 2] [6]), var_7))), 41568))) ? var_0 : var_4)))));
                    }
                }
            }
            var_41 ^= ((var_14 ? (min(var_1, -82)) : 3));
            var_42 += (var_9 && -var_12);
        }
        var_43 = (min(var_8, (arr_27 [1])));

        /* vectorizable */
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            var_44 = (min(var_44, (1 <= var_6)));
            var_45 = (min(var_45, 183));
            var_46 = (max(var_46, ((((var_1 ? 127 : var_1))))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_47 = ((-((-9161597924611595292 ? 54 : 65509))));
            var_48 = ((2254 ? var_6 : (arr_42 [i_7 + 1] [i_7])));

            for (int i_18 = 0; i_18 < 0;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_49 = (arr_7 [i_18] [i_18] [10] [1]);
                    arr_60 [i_7] [i_7] [i_18] [i_18] [5] = (var_12 >= 262143);
                }
                for (int i_20 = 2; i_20 < 6;i_20 += 1)
                {
                    arr_64 [i_18] [i_18] [i_18] [1] [i_18] = 0;
                    var_50 = (max(var_50, 1));
                }
                arr_65 [i_18] [i_18] [i_18] = (((((arr_7 [i_18] [i_18] [i_18] [i_18]) ? var_6 : 1)) + (arr_5 [i_7 - 2] [i_18 + 1] [i_18 + 1])));
            }
            var_51 ^= ((-271705782528975786 ? 114 : var_14));
        }
    }
    var_52 = (min(var_52, var_5));
    var_53 = (((~var_2) & var_0));
    #pragma endscop
}
