/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 &= var_1;
        var_11 = (((arr_0 [i_0]) >> ((((var_1 ? 38 : var_0)) - 7))));
        arr_3 [i_0] = ((!(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_12 = ((var_2 ? (arr_1 [i_1]) : 29));
            arr_8 [i_1] [i_1] [i_0] = (arr_5 [i_0] [8] [i_0]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_13 = 84;
                            var_14 = ((1 ? var_1 : var_6));
                            var_15 *= (var_5 != var_2);
                        }
                    }
                }
                var_16 = (arr_0 [i_2]);
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_17 = var_5;
                var_18 *= ((arr_1 [i_0]) ? (arr_7 [i_0] [i_2]) : 33);
                var_19 = (var_7 <= var_3);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_20 += 235;
                arr_21 [10] [i_2] [10] &= (arr_16 [i_0]);
                arr_22 [3] [i_2] [i_2] [i_7] = (~2080374784);
                var_21 *= var_3;
            }
            var_22 ^= ((4 % (~1)));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_23 -= (arr_1 [i_0]);
            arr_26 [i_0] &= (-10 - 236);
            arr_27 [i_0] = (arr_19 [i_0] [i_0] [i_0]);

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_31 [i_0] [i_8] [i_9] = 2214592513;
                var_24 -= ((arr_20 [i_0] [i_8] [i_8]) ? 6 : 5491099350783837962);
                var_25 ^= var_1;
                var_26 = (var_7 || var_4);
            }
            var_27 &= (((arr_5 [i_0] [i_0] [i_0]) & 1539807595790414453));
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_28 -= ((var_0 ? (max(((44 ? -2204152058855032004 : (arr_23 [1] [i_10] [i_10]))), (var_3 - 1539807595790414459))) : ((((((var_4 ? var_3 : var_4)) <= (((!(arr_0 [i_10]))))))))));
        var_29 = var_2;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_30 -= (arr_24 [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_31 = ((var_7 ? ((255 ? 1 : 157)) : 8));
                    var_32 = ((((var_7 ? (arr_18 [i_13] [i_13] [i_13]) : 4611668426241343488)) - (1 + 1)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_33 = (~1597738197260583354);
        var_34 = ((var_5 ^ (arr_45 [i_14])));
    }
    var_35 = (1 ? var_3 : var_8);
    var_36 &= -8675397138507295305;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            {

                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    arr_55 [i_17] [i_16] [0] &= (max((((~1) ? (arr_28 [i_15] [i_15] [i_16] [7]) : (~4294967279))), (((~(arr_25 [i_15] [i_16]))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            {
                                var_37 = arr_15 [15] [i_15] [i_15];
                                var_38 = ((1 ? ((1 ? -11218693793399609 : var_2)) : -1539807595790414453));
                            }
                        }
                    }
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    var_39 *= (((arr_48 [i_16]) ? (arr_56 [i_15] [i_15] [i_15] [i_16] [i_20]) : (arr_11 [i_15] [i_16] [i_20])));
                    arr_62 [i_16] [i_16] = (((2963175860028842524 ? (arr_23 [i_15] [i_16] [i_20]) : 1)) * ((((arr_25 [i_15] [i_16]) * (arr_25 [4] [i_15])))));

                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        var_40 ^= 1;
                        var_41 &= min(1, ((~((-2963175860028842520 ? (arr_14 [i_15] [4] [6] [i_21]) : var_2)))));
                        var_42 = var_8;
                        var_43 &= var_7;
                    }
                    var_44 = ((((((arr_50 [i_16]) ? (arr_50 [i_16]) : (arr_50 [i_16])))) ? (((arr_50 [i_16]) + var_4)) : (((arr_50 [i_16]) ? var_4 : (arr_50 [i_16])))));
                }
                for (int i_22 = 0; i_22 < 12;i_22 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            {
                                arr_72 [i_16] [i_16] [i_16] [0] [1] = 3847524721;
                                arr_73 [i_16] [11] [i_23] [i_16] [i_16] [i_16] [i_16] = (arr_15 [i_15] [i_23] [i_15]);
                                arr_74 [9] [i_16] [i_16] [i_23] [i_24] = (((var_5 | 40) ? ((~((min(1, var_3))))) : 27));
                            }
                        }
                    }
                    var_45 = ((!((((((-2256555218565705892 ? (arr_48 [i_15]) : 1))) ? ((((arr_53 [i_16] [1] [i_22]) && -7901032480414210026))) : (((arr_50 [i_16]) >> 1)))))));
                }
                arr_75 [i_16] [i_16] = var_4;
                arr_76 [i_16] [i_16] [i_16] = (((((arr_71 [i_16] [i_16] [i_15] [i_16] [i_15]) || (arr_9 [i_15] [i_15] [i_15]))) && ((var_6 && (arr_66 [i_16] [i_16] [i_16] [i_15])))));
                arr_77 [i_16] = (min(-var_5, ((var_3 ? var_2 : (arr_53 [i_16] [i_16] [i_16])))));
                var_46 = var_9;
            }
        }
    }
    #pragma endscop
}
