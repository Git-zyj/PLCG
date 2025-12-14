/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])));
        var_13 &= (((var_1 | var_11) ^ ((var_4 ? (arr_2 [i_0]) : (arr_0 [i_0])))));
        var_14 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        var_15 = 127;
        var_16 = (((var_3 < 0) >= (~var_3)));
        var_17 = (min(var_17, 0));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_18 = (max(var_18, ((var_0 ? (arr_4 [i_2 - 1]) : (var_2 >= var_1)))));
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((((var_5 ? var_0 : 0))) ? 17269813975394349362 : 368674291505432843)))));
                            var_20 = (((((arr_14 [i_2] [i_3]) / 1)) | 2147483647));
                            var_21 = (arr_7 [i_2]);
                            var_22 *= 4;
                        }
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
            {
                var_23 = var_3;
                var_24 = var_10;
                var_25 = var_2;
                var_26 ^= (30810 | -66);
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_27 *= (arr_30 [i_7 - 1] [i_10] [i_9] [i_2 - 1]);
                            var_28 = (arr_18 [i_2] [i_10] [i_9] [i_7] [16] [i_2] [i_2]);
                        }
                    }
                }
                var_29 = ((arr_25 [i_2] [i_2 - 1]) == var_3);
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
            {
                var_30 = (((((arr_36 [i_2 - 1] [4] [i_2] [4] [i_2]) ? var_11 : var_7)) ^ ((((arr_36 [i_2] [i_2] [i_7] [i_2] [6]) == var_4)))));
                var_31 = var_11;
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                var_32 = (arr_31 [i_2]);
                var_33 = ((var_2 ? var_8 : (arr_9 [i_2])));
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_34 = var_8;
                            var_35 = (((arr_36 [i_2] [i_2] [i_15 - 3] [i_15 + 2] [i_15]) ? (((0 ? 9 : var_3))) : (arr_13 [i_13] [14] [i_2 - 1])));
                            var_36 = (arr_15 [i_2 - 1] [i_2] [5] [i_14] [i_15]);
                        }
                    }
                }
            }
            var_37 = 0;
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
        {
            var_38 = 0;
            var_39 = (min(var_39, ((var_11 ? ((((arr_3 [22]) & (arr_33 [i_2 - 1] [i_16] [i_2 - 1] [i_16] [i_16])))) : ((1679142003184249237 / (arr_49 [i_2])))))));
            var_40 &= (((!var_4) ? ((127 ? var_2 : var_1)) : (var_1 != var_4)));
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
        {
            var_41 &= ((368674291505432843 << (!65526)));
            var_42 = (((((arr_48 [1] [i_17]) ? (arr_25 [i_17] [i_2]) : var_9)) | ((((arr_29 [i_2] [i_2] [i_2]) << (((arr_51 [i_2] [i_2]) - 15)))))));
            /* LoopNest 3 */
            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_43 = ((((var_3 == (arr_23 [i_17] [i_20]))) || (23 & var_4)));
                            var_44 = (min(var_44, (((41173 ? 7057301146181230625 : -4)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 20;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                {

                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        var_45 = ((var_10 ? var_8 : (((arr_63 [i_2]) | (arr_58 [i_2])))));
                        var_46 = (min(var_46, (arr_4 [i_22])));
                        var_47 = (max(var_47, (((var_1 ? var_7 : (((arr_36 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [3]) ? var_5 : var_2)))))));
                        var_48 = (arr_39 [i_23] [i_21] [i_21] [17]);
                    }
                    var_49 = ((((arr_55 [16] [16] [13] [i_2]) ? var_4 : var_9)));
                    var_50 = (((-1 + 2147483647) >> 0));
                    var_51 &= -7;
                }
            }
        }

        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            var_52 = (((arr_27 [i_2] [i_24] [i_24] [i_2]) ^ var_9));

            for (int i_25 = 1; i_25 < 18;i_25 += 1) /* same iter space */
            {
                var_53 = ((var_3 ? 1 : (!-1)));
                var_54 = (max(var_54, (arr_14 [i_24] [i_24])));
                /* LoopNest 2 */
                for (int i_26 = 4; i_26 < 18;i_26 += 1)
                {
                    for (int i_27 = 1; i_27 < 18;i_27 += 1)
                    {
                        {
                            var_55 = var_7;
                            var_56 = var_10;
                            var_57 = (arr_59 [i_27] [i_27 + 1] [i_27] [i_26] [i_24]);
                            var_58 = (((arr_16 [i_27 + 2] [12] [i_25 + 2] [i_24] [12]) || (((24366 ? var_5 : (arr_59 [i_27] [i_26] [i_25 + 1] [i_24] [i_2 - 1]))))));
                        }
                    }
                }
            }
            for (int i_28 = 1; i_28 < 18;i_28 += 1) /* same iter space */
            {
                var_59 = var_1;
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 20;i_30 += 1)
                    {
                        {
                            var_60 = ((((var_6 << (var_0 - 2302867585))) >> 2));
                            var_61 = var_7;
                            var_62 = var_1;
                            var_63 = (var_11 ^ (((arr_32 [i_2] [i_24] [i_2] [i_2]) ? (arr_57 [17] [17] [i_2] [i_30]) : var_6)));
                        }
                    }
                }
                var_64 = ((var_3 ? var_1 : (arr_66 [i_2 - 1] [i_24] [i_2] [i_2] [i_24])));
            }
            for (int i_31 = 2; i_31 < 18;i_31 += 1)
            {
                var_65 = ((((((arr_23 [i_2] [i_2]) ^ (arr_66 [i_2 - 1] [i_24] [i_2] [i_24] [i_31])))) ? -7 : var_10));
                var_66 = ((0 ? 4294967272 : 7057301146181230625));
            }
            var_67 = (i_2 % 2 == zero) ? (((((((var_8 + 2147483647) >> (((arr_81 [i_2] [i_2] [i_24] [i_2] [1]) - 6837642075218098559))))) < (((arr_31 [i_24]) >> (((arr_55 [i_2 - 1] [i_24] [i_2 - 1] [11]) - 1586765134))))))) : (((((((var_8 + 2147483647) >> (((((arr_81 [i_2] [i_2] [i_24] [i_2] [1]) - 6837642075218098559)) - 18028223236466050386))))) < (((arr_31 [i_24]) >> (((arr_55 [i_2 - 1] [i_24] [i_2 - 1] [11]) - 1586765134)))))));
        }
        for (int i_32 = 0; i_32 < 20;i_32 += 1)
        {

            for (int i_33 = 0; i_33 < 20;i_33 += 1) /* same iter space */
            {
                var_68 *= (((((-32750 ? 4856350883319528732 : 1))) ? var_6 : var_1));
                var_69 *= ((var_10 ? (arr_88 [9] [i_2 - 1] [6]) : (arr_63 [i_33])));
                var_70 = ((0 ? -5 : 8));
            }
            for (int i_34 = 0; i_34 < 20;i_34 += 1) /* same iter space */
            {
                var_71 &= (((((var_7 ? (arr_49 [i_2 - 1]) : 6))) ? (arr_40 [i_2] [i_2] [i_2] [i_34]) : (((var_6 << (((arr_73 [i_2] [i_2] [i_2] [i_34]) - 112)))))));
                var_72 = var_0;
            }
            var_73 = ((0 ? -9032387475675108515 : 1354586985));
            var_74 = (((1 ^ var_0) ? ((var_11 ? -109 : (arr_33 [i_2] [i_2] [i_2] [9] [i_32]))) : (var_1 & var_11)));
            var_75 = (arr_52 [i_2] [i_2]);
        }
        for (int i_35 = 0; i_35 < 20;i_35 += 1)
        {
            var_76 = ((17 ? (arr_61 [i_2] [i_2] [i_2]) : (((arr_25 [i_35] [i_35]) ? var_11 : (arr_30 [i_35] [i_2] [i_2] [i_2])))));
            var_77 = (max(var_77, (arr_29 [i_2 - 1] [i_35] [i_35])));
        }
    }
    var_78 = (min(var_78, (0 ^ 18446744073709551613)));
    var_79 = ((-64 ? 11389442927528320991 : 1276413983));
    var_80 = ((var_0 ? var_10 : (var_0 || var_0)));
    #pragma endscop
}
