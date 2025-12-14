/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 -= var_3;
        arr_4 [i_0] = ((!(((min(13, 18))))));
        arr_5 [i_0] = min(3639328649, (((!((min(var_6, (arr_3 [i_0] [i_0]))))))));
        arr_6 [i_0] = ((-var_2 ? (((min((arr_3 [i_0] [i_0]), 214)))) : ((((max(var_7, (arr_2 [i_0])))) ? (((20 ? 243 : 21))) : ((182 ? var_0 : 0))))));
    }
    var_14 = (min(var_14, var_11));

    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_15 = (max(var_15, ((((((var_2 ? 97314602 : -var_8))) ? ((-4294967289 ? 151 : 534773760)) : var_8)))));
        arr_9 [i_1] [i_1] &= (188 && 187809041);
        arr_10 [i_1] = ((-((((77 ? (arr_7 [i_1]) : var_2)) * 3702573509))));
        arr_11 [6] = 2750394521;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_16 += (max(((~(arr_12 [i_2] [i_2]))), ((min(131, (arr_12 [i_2] [i_2]))))));
        var_17 = (~((var_2 ? (!var_12) : 4294967293)));
        arr_16 [i_2] = 2093056;
        arr_17 [i_2] &= (min(119, 0));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_22 [i_3] = 122;
            arr_23 [4] [4] = 219;
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_18 = (max(var_18, 28));
            arr_26 [14] [i_4] = var_5;
            arr_27 [i_2] [i_2] [i_2] = ((~(((((63 ? var_6 : var_8)) >= (arr_25 [i_2] [i_4] [i_4]))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            arr_34 [i_5] [i_6] [i_6] = ((var_12 ? (var_7 != 238) : ((var_10 ? var_7 : 268435455))));
            arr_35 [i_6] = ((var_10 - (arr_12 [i_6 - 1] [i_6])));
            arr_36 [i_6] = ((var_7 ? (arr_8 [i_6 - 1]) : var_3));

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_19 -= var_10;

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_42 [i_8] [i_6] [12] [i_8] &= ((2018311078 < (arr_1 [i_5 + 1] [i_8])));
                    arr_43 [i_6] = 1295840720;
                    var_20 *= (var_8 ? var_1 : var_1);
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_21 *= (0 ? 0 : 33554431);
                    arr_48 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6] = 939524096;
                    var_22 -= 128;
                    arr_49 [i_6] [i_6] [i_6] [i_6] = (5 % 183);
                }
                arr_50 [i_5] [i_6] [i_5] [i_5] = (arr_3 [i_6 + 1] [i_6]);
            }
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_53 [i_5] [i_10] = (var_3 ? (~254) : ((387031115 << (var_2 - 51))));
            var_23 = var_9;

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_24 = (min(var_24, ((((var_3 || var_6) > var_5)))));
                var_25 |= ((!(arr_20 [i_11] [i_11] [i_11])));
                var_26 = (!255);
            }
            arr_57 [i_5] [12] [i_10] = 3625120661;
            arr_58 [i_5] [i_5] = 323243198;
        }
        for (int i_12 = 2; i_12 < 13;i_12 += 1)
        {
            var_27 = var_6;
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        {
                            arr_71 [i_12] [i_5] [i_13] = ((var_2 >> (60520228 - 60520210)));
                            arr_72 [i_5] [i_12] [i_12 - 2] [11] [i_12] [i_12 - 2] [4] = (var_12 ? var_8 : var_5);
                            arr_73 [i_12] = (var_8 ? var_9 : var_0);
                            var_28 = (arr_59 [i_5 + 1]);
                        }
                    }
                }
            }
        }
        arr_74 [i_5] [i_5] = ((~(5 & var_11)));
        arr_75 [i_5] [i_5] = ((-(var_6 >= var_4)));
    }
    #pragma endscop
}
