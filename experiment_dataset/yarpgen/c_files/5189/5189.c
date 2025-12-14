/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min((var_2 ^ -32755), (-33 > 7466908918286278945))))));
    var_14 -= var_8;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = 85;
        var_16 &= (!var_6);
        arr_2 [i_0] [i_0] = (max(var_0, ((min(-32755, (((arr_0 [i_0]) >> 0)))))));
        var_17 -= (((((arr_0 [i_0]) <= ((var_7 ? var_6 : (arr_1 [i_0] [i_0]))))) && 28148));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (min(var_18, ((min(var_6, ((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))))))));
        var_19 = ((((max(1, (arr_3 [i_1] [i_1])))) ? (arr_1 [i_1] [i_1]) : (arr_0 [i_1])));
    }
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        var_20 = (max(var_20, (((((max(var_10, (arr_9 [i_2 + 1])))) || (arr_9 [i_2 - 3]))))));
        arr_10 [i_2] = (max((min(var_5, (var_0 - var_2))), ((max(4019103446, 32754)))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 = (max(var_21, 33));
            var_22 = (arr_6 [i_2 - 3]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_23 *= ((((((arr_0 [i_2]) / var_3))) ? -85 : ((var_0 ? -85 : (arr_0 [i_4])))));
            var_24 = (((arr_16 [i_2 + 1]) && (arr_16 [i_2 - 1])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_25 = (((arr_0 [i_2]) >> ((((arr_15 [i_5] [i_5] [i_5]) && var_8)))));
            var_26 += (-32755 + 31);
            arr_22 [i_2] [i_5] = (((arr_15 [i_2 - 3] [i_2 - 3] [i_2]) & var_6));
            var_27 = (((var_0 + 9223372036854775807) << (var_11 - 3909134374)));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_28 = (((max((arr_14 [i_6] [i_6]), (arr_24 [i_2 - 4]))) << (189 - 185)));
            arr_25 [i_2] = ((-(~32743)));
            var_29 = (arr_9 [i_2 - 1]);
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                arr_30 [i_2] [i_7] [i_8] &= (-3843678990295571557 ^ 0);

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_33 [i_7] [i_9] [i_9] = (((arr_28 [i_2] [i_7] [i_7] [i_9]) - var_9));

                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_30 *= (arr_14 [i_8] [i_8]);
                        arr_36 [i_7] [i_9] [8] [8] [i_7] [i_7] |= var_0;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_2] [i_2] [i_9] [i_2] [i_2] [i_11] [i_11] = arr_6 [i_9];
                        arr_41 [i_9] = (arr_35 [i_2 - 2] [i_7] [i_8] [i_7] [i_2 - 2]);
                        arr_42 [i_9] [i_9] [i_8] [i_9] [i_9] [i_11] = (arr_13 [i_2] [i_2] [i_2]);
                        var_31 += (!120);
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_2] [i_9] [i_9] = (arr_35 [i_2] [i_7] [i_8] [i_9] [i_9]);
                        arr_47 [i_9] [i_8] = (1 & var_2);
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_32 = (min(var_32, (((var_1 >= (((~(arr_9 [i_13])))))))));
                        var_33 = (min(var_33, (arr_26 [i_2 - 3])));
                        var_34 = (((!978071635) - 17878141554371370190));
                    }
                    var_35 -= (((-98 * var_6) % -1579810695));
                    var_36 = (((arr_0 [i_2 - 2]) ? var_7 : (arr_0 [i_2 + 1])));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_37 = (max(var_37, (arr_35 [i_2] [i_7] [i_8] [i_2] [i_8])));
                    var_38 = var_3;
                    arr_55 [7] [i_7] [i_8] [7] = (!var_3);
                    var_39 = (arr_53 [i_2 - 4] [i_2 - 3] [i_2 - 3] [i_2 + 1]);
                    var_40 = var_9;
                }
            }
            var_41 = (min(var_41, ((((arr_44 [i_2] [i_2 + 1] [i_2] [i_2 - 3]) + (arr_19 [i_2] [i_2 - 3]))))));
            arr_56 [i_2] [i_7] [i_7] = (var_0 == 7180791103198345655);
            var_42 &= var_5;
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    {
                        var_43 = (min(var_43, var_5));
                        var_44 -= 12809045302813156484;
                        var_45 += (((arr_58 [i_2 + 1] [i_7]) + ((((arr_15 [i_2] [i_7] [i_16]) <= (arr_62 [i_2] [i_7] [i_15] [i_16] [i_7]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_46 = (max(var_46, (arr_6 [i_2])));
            arr_67 [i_2] [i_17] = (((arr_57 [i_2 - 4]) < -19124));
        }
        for (int i_18 = 3; i_18 < 13;i_18 += 1)
        {
            arr_72 [i_18] [i_2 - 3] [i_18] = (arr_59 [i_2] [i_18] [i_18]);

            /* vectorizable */
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                arr_75 [i_18] [i_18] = var_4;
                var_47 = (max(var_47, ((((arr_28 [i_18 - 1] [i_19] [i_2 - 3] [i_19]) ? var_10 : (((arr_11 [i_2] [i_2]) ? 82 : (arr_61 [i_19] [i_2] [i_2] [i_2] [i_2]))))))));
                arr_76 [i_2] [i_18] = 6917529027641081856;
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
            {
                var_48 *= 20;
                var_49 = 0;
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
            {

                for (int i_22 = 2; i_22 < 13;i_22 += 1)
                {

                    for (int i_23 = 2; i_23 < 13;i_23 += 1)
                    {
                        arr_86 [1] [1] [i_18] = (!32754);
                        var_50 = (max(var_50, (arr_21 [i_22])));
                    }
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        var_51 = var_9;
                        arr_89 [i_2] [i_18 - 3] [i_21] [i_22] [i_22] [i_18] [i_24] = (-32767 - 1);
                        arr_90 [i_2 + 1] [i_18] [i_2 + 1] [i_18] [i_18] [i_18] [i_21] = arr_62 [1] [1] [i_18 - 2] [i_22] [i_18];
                    }
                    var_52 ^= (arr_35 [i_22 - 1] [13] [i_21] [i_22 - 1] [i_22]);
                }

                for (int i_25 = 0; i_25 < 14;i_25 += 1) /* same iter space */
                {
                    arr_95 [i_21] [i_18] [i_18] [i_25] = ((0 < (arr_88 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_18 + 1] [i_21])));
                    var_53 = (max(var_53, (((arr_87 [i_25] [i_18] [i_18] [i_18 + 1] [i_25] [i_18 - 2]) ? var_5 : var_4))));
                    arr_96 [i_18] [i_25] = (((arr_54 [i_2] [i_18 - 1] [i_25] [i_2 - 4] [i_25]) != var_10));
                }
                for (int i_26 = 0; i_26 < 14;i_26 += 1) /* same iter space */
                {
                    var_54 = ((624574516 ? -27 : 18069));
                    var_55 = (arr_45 [i_2] [i_2] [i_18] [i_21] [i_21] [i_26] [i_18]);
                }
            }
            var_56 = var_8;
        }
        for (int i_27 = 3; i_27 < 12;i_27 += 1)
        {
            arr_102 [i_27] = var_11;
            var_57 = (max(var_57, ((((arr_8 [i_2] [i_27]) != (arr_50 [i_2] [i_2] [i_2] [i_2] [i_2] [i_27 + 2]))))));
            var_58 = (max(var_58, (((((((arr_48 [i_27] [i_27 - 1]) ? var_1 : (arr_48 [i_2 + 1] [i_27 - 1])))) ? (max((arr_1 [i_2] [i_27 - 1]), var_1)) : (arr_1 [i_2] [i_27 - 1]))))));
            var_59 = (((((arr_27 [i_2 - 3] [i_27 - 3]) ? (arr_27 [i_2 - 3] [i_27 - 3]) : (arr_27 [i_2 + 1] [i_27 - 1]))) <= ((~(arr_27 [i_2 - 4] [i_27 + 2])))));
        }
    }
    #pragma endscop
}
