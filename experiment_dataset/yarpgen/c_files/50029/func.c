/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50029
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27223)) ? (((/* implicit */int) arr_2 [6] [i_0])) : (var_3)))) ? (((((/* implicit */_Bool) 134217727)) ? (1306485101) : (((/* implicit */int) (short)-27225)))) : (((/* implicit */int) ((short) (signed char)79))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_16))));
                    var_21 = ((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [(signed char)23] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_2] [i_0] [i_1])))) + (((/* implicit */int) ((signed char) arr_4 [i_0] [1] [1]))));
                    var_22 = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (1306485101) : (((/* implicit */int) (signed char)-96)));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 24; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_23 ^= (+(((/* implicit */int) arr_2 [i_4 + 1] [i_4 + 1])));
                var_24 += ((((/* implicit */_Bool) arr_7 [i_3] [i_5] [i_4 + 1])) ? (((/* implicit */int) arr_7 [i_3] [i_5] [i_4 + 1])) : (((/* implicit */int) arr_7 [i_4] [i_5] [i_4 - 1])));
            }
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                var_25 -= ((/* implicit */short) ((((/* implicit */int) arr_9 [i_6])) > (((/* implicit */int) arr_9 [i_6]))));
                var_26 = ((((/* implicit */_Bool) arr_9 [i_3])) ? (-1306485101) : (((/* implicit */int) arr_9 [i_3])));
                var_27 = ((/* implicit */int) var_6);
            }
            var_28 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [18LL] [i_4 + 1]))));
        }
        /* vectorizable */
        for (short i_7 = 2; i_7 < 22; i_7 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */short) arr_7 [i_7] [i_3] [i_3]);
            /* LoopSeq 4 */
            for (short i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                var_30 = arr_12 [i_7] [i_3];
                var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(short)16])) && (((/* implicit */_Bool) 283051830))));
                var_32 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6558114992692196770LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (0LL)))) ? (((/* implicit */long long int) ((int) -1LL))) : (((((/* implicit */_Bool) (signed char)-74)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                var_33 = ((/* implicit */short) -5968267204443740804LL);
                arr_21 [i_3] [(signed char)14] = ((/* implicit */short) arr_7 [i_3] [i_3] [i_8]);
            }
            for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                var_34 *= ((/* implicit */short) var_5);
                var_35 = ((/* implicit */signed char) arr_13 [i_3] [i_7 - 1] [i_9]);
                arr_26 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_7] [i_7 + 1]))) : (((((var_2) + (9223372036854775807LL))) >> (((/* implicit */int) var_16)))));
            }
            for (signed char i_10 = 2; i_10 < 24; i_10 += 4) 
            {
                var_36 = ((int) arr_23 [i_3] [i_10 + 1] [i_7 + 3] [i_3]);
                /* LoopSeq 4 */
                for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    arr_32 [i_3] [i_3] [i_3] [i_11] = ((/* implicit */short) (+(arr_28 [i_10 - 2] [i_3] [i_10])));
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 24; i_12 += 3) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) 6558114992692196770LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_13) >= (((/* implicit */int) arr_4 [i_3] [i_11] [i_12])))))));
                        var_38 ^= ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_10]))));
                    }
                    for (short i_13 = 2; i_13 < 22; i_13 += 2) 
                    {
                        arr_38 [i_3] [i_7 - 1] [i_3] [i_11] [i_11] [i_13] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_3] [i_7 + 3]))));
                        arr_39 [i_3] [i_7] [i_10] [i_11] [i_13] = ((/* implicit */short) arr_35 [i_3] [(signed char)9] [i_10] [i_11] [i_13]);
                    }
                    arr_40 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((signed char) arr_4 [i_3] [i_3] [i_10]));
                }
                for (short i_14 = 1; i_14 < 24; i_14 += 3) 
                {
                    arr_43 [i_3] [i_7 + 1] [i_3] [i_14] = ((/* implicit */long long int) arr_7 [i_3] [i_3] [i_14]);
                    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) 2049525805739766861LL)) ? (((((/* implicit */_Bool) -902622039)) ? (var_18) : (5968267204443740803LL))) : (arr_29 [i_14 + 1] [i_10 - 2] [i_7 + 3] [6LL] [i_3] [23])));
                    var_40 = (~(((long long int) 0)));
                }
                for (int i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
                {
                    arr_47 [i_3] [i_7] [i_3] [i_10] |= ((/* implicit */short) var_7);
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((arr_1 [i_15]) == (((/* implicit */int) arr_2 [i_7 + 1] [i_10 - 2])))))));
                    var_42 = ((/* implicit */int) (signed char)-127);
                    /* LoopSeq 1 */
                    for (signed char i_16 = 2; i_16 < 24; i_16 += 3) 
                    {
                        var_43 = ((/* implicit */int) arr_22 [(signed char)4] [(signed char)4] [i_10]);
                        arr_50 [8LL] [i_15] [i_3] [i_15] [i_16] [i_15] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3725746388717363003LL)) ? (((/* implicit */long long int) 2147483647)) : (arr_19 [18LL] [i_7 + 3] [i_3] [i_16]))))));
                        var_44 ^= ((/* implicit */long long int) 2147483647);
                        var_45 *= ((/* implicit */signed char) ((((/* implicit */int) (short)9067)) >= (1)));
                        var_46 = ((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)121)))));
                    }
                }
                for (int i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
                {
                    var_47 -= ((/* implicit */signed char) ((long long int) arr_12 [i_7 - 2] [i_17]));
                    var_48 = (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_41 [i_3] [i_7] [i_3] [i_17])) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_3])))));
                }
                /* LoopSeq 1 */
                for (long long int i_18 = 2; i_18 < 21; i_18 += 1) 
                {
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_3] [i_18 + 3] [i_18 + 3] [(signed char)10])) ? (arr_17 [i_3] [i_10 - 1]) : (((/* implicit */int) ((short) arr_17 [i_3] [i_7 + 1])))));
                    arr_57 [i_3] [i_7] [i_10] [(short)20] = arr_31 [i_3] [19LL];
                    var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (+(((/* implicit */int) arr_46 [i_7 - 1] [i_10 - 1] [i_18 - 1])))))));
                    /* LoopSeq 4 */
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        var_51 = ((/* implicit */int) (short)-25839);
                        var_52 = ((/* implicit */int) arr_20 [i_10] [i_7]);
                        var_53 = ((/* implicit */signed char) arr_59 [i_10] [i_3]);
                    }
                    for (signed char i_20 = 3; i_20 < 24; i_20 += 4) /* same iter space */
                    {
                        arr_63 [i_10] [i_10] [i_10] [i_18] [i_3] |= ((/* implicit */long long int) -902622033);
                        var_54 = ((/* implicit */signed char) ((long long int) arr_4 [i_3] [i_3] [i_20 - 2]));
                    }
                    for (signed char i_21 = 3; i_21 < 24; i_21 += 4) /* same iter space */
                    {
                        var_55 = (+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_30 [i_3] [i_10] [i_18] [i_3])))));
                        var_56 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))));
                    }
                    for (int i_22 = 0; i_22 < 25; i_22 += 3) 
                    {
                        var_57 = ((/* implicit */short) (-((+(((/* implicit */int) var_10))))));
                        arr_68 [i_3] [i_3] [i_3] [i_10] [6] [i_18 - 1] [5] = ((/* implicit */int) ((((/* implicit */_Bool) 1125899906842623LL)) ? (((long long int) (short)-27205)) : (((/* implicit */long long int) -1394563792))));
                        var_58 = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_3] [i_10 + 1] [i_3] [i_22])) ? (arr_29 [i_18 + 4] [i_10 + 1] [23] [i_10 + 1] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [5] [5])))));
                        var_59 = ((/* implicit */int) min((var_59), (((((/* implicit */_Bool) arr_10 [i_10] [i_18 + 3] [i_7 - 2])) ? (((((/* implicit */_Bool) arr_18 [i_3] [i_10] [i_3])) ? (-902622033) : (((/* implicit */int) (signed char)-122)))) : ((~(((/* implicit */int) arr_10 [i_10] [i_18] [i_22]))))))));
                    }
                }
            }
            for (int i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_24 = 4; i_24 < 24; i_24 += 2) 
                {
                    var_60 = ((/* implicit */int) ((((/* implicit */_Bool) -2147483629)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24097)))));
                    var_61 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_24 - 4] [i_24] [i_24] [i_7 + 3])) ? (((/* implicit */int) arr_31 [i_23] [i_24 - 1])) : (((/* implicit */int) arr_65 [i_7 + 2] [i_7 - 1]))));
                }
                for (int i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    var_62 = ((/* implicit */short) (+(((/* implicit */int) var_17))));
                    var_63 = 4194303;
                }
                var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_76 [i_7 + 1] [i_7] [i_7] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_76 [i_7 - 2] [i_7] [(short)13] [i_7] [i_7] [i_7])) : (-1506423304)));
            }
        }
        for (short i_26 = 2; i_26 < 22; i_26 += 3) /* same iter space */
        {
            arr_83 [i_3] [i_3] [i_3] = ((/* implicit */int) arr_82 [i_3]);
            var_65 = ((/* implicit */int) min((var_65), ((~(min((((/* implicit */int) arr_81 [i_26 - 1] [i_26 + 2] [i_3])), (914902271)))))));
        }
        for (short i_27 = 2; i_27 < 22; i_27 += 3) /* same iter space */
        {
            arr_88 [i_3] [i_3] = ((/* implicit */short) arr_3 [i_3] [i_27]);
            var_66 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (max((((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (9223372036854775807LL))), (((/* implicit */long long int) 1479736506)))) : (((/* implicit */long long int) max((max((((/* implicit */int) arr_6 [i_27] [i_27] [i_3])), (1479736505))), (((/* implicit */int) (short)0)))))));
            var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) min((((((/* implicit */int) arr_30 [i_3] [(signed char)8] [i_3] [i_27])) + (((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_3] [i_3] [i_27 + 1] [i_27])) ? (228346399) : (((/* implicit */int) arr_35 [i_27] [i_27] [(short)4] [i_3] [i_3])))))), (arr_87 [i_27] [i_27] [i_27 + 1]))))));
        }
        var_68 = ((/* implicit */int) min((var_68), (((/* implicit */int) (((-(((/* implicit */int) (signed char)115)))) == (((/* implicit */int) arr_2 [i_3] [i_3])))))));
        var_69 = ((/* implicit */int) arr_6 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (short i_28 = 0; i_28 < 25; i_28 += 4) 
        {
            for (short i_29 = 0; i_29 < 25; i_29 += 3) 
            {
                for (int i_30 = 1; i_30 < 22; i_30 += 3) 
                {
                    {
                        var_70 = ((/* implicit */short) 2147483647);
                        var_71 = ((/* implicit */short) ((((/* implicit */_Bool) 366739104)) ? (1010717364) : (((/* implicit */int) (signed char)-17))));
                        var_72 = ((/* implicit */int) -5739760452024954424LL);
                    }
                } 
            } 
        } 
    }
    var_73 += (-(((/* implicit */int) var_1)));
    var_74 = ((/* implicit */signed char) ((((var_18) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))))) + (24)))));
    var_75 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (short)-10058))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-20041)))))) ? (((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)0)))) : ((+(((/* implicit */int) var_16)))));
    var_76 = var_0;
}
