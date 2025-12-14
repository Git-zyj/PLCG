/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228100
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_3)))));
            arr_5 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1 + 2])))) : (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))));
            var_20 = (-(((/* implicit */int) var_1)));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1 - 1] [i_1 - 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 225902354)) ? (4231900140U) : (arr_4 [i_1 - 1] [(unsigned char)18]))))));
        }
        var_22 -= ((/* implicit */signed char) max((((((/* implicit */long long int) 4231900126U)) % (9007199254740988LL))), (((/* implicit */long long int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned short) max((((long long int) arr_16 [i_2] [i_2] [i_5 - 1] [i_0] [i_5])), (((/* implicit */long long int) arr_14 [i_5]))));
                                var_24 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) == (var_14))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_5] [i_5] [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_4]), (arr_15 [(short)11] [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_4] [i_3]))))) : ((+(var_14)))));
                                arr_18 [i_5] [i_3] [i_3] [i_3] [(short)18] = ((/* implicit */long long int) ((short) 9007199254740965LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_2]))))));
                                arr_24 [i_3] [i_6] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1870303076303949537LL)) ? (150590901U) : (((/* implicit */unsigned int) 1505786405))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (short)17064)), (var_7)))), ((+(((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (((var_2) / (((/* implicit */unsigned long long int) 9007199254740970LL))))))));
                                var_26 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_16 [i_2] [i_6] [i_3] [i_2] [i_0]), (arr_16 [i_7] [12U] [i_3] [i_2] [(signed char)8]))))));
                                var_27 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_15 [(short)20] [i_2] [14U] [i_2] [14] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_15 [i_0] [(_Bool)1] [(unsigned short)20] [19] [i_6] [i_7] [i_7])))), ((~(((/* implicit */int) (unsigned char)193))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
    {
        arr_28 [i_8] = (+(((/* implicit */int) (signed char)-26)));
        arr_29 [i_8] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
        var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_8] [15U] [i_8] [i_8] [i_8] [i_8] [15U]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8]))));
        /* LoopNest 3 */
        for (long long int i_9 = 4; i_9 < 21; i_9 += 2) 
        {
            for (unsigned char i_10 = 4; i_10 < 22; i_10 += 2) 
            {
                for (long long int i_11 = 3; i_11 < 22; i_11 += 4) 
                {
                    {
                        arr_39 [i_8] [i_8] [3LL] [8LL] [0LL] = ((/* implicit */short) arr_20 [i_10 - 2] [i_9 - 3] [i_10] [i_11 - 1]);
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        var_30 -= ((/* implicit */long long int) 4144376405U);
        /* LoopSeq 3 */
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            var_31 ^= ((/* implicit */long long int) 16777212);
            var_32 = ((var_10) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)8)) : (var_10))));
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (arr_10 [i_12] [i_12] [i_12] [i_12])));
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_4)))) : (-9007199254741002LL))))));
            var_35 = ((/* implicit */short) (-(arr_8 [i_13] [(short)7] [i_12] [i_12])));
        }
        for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_15 = 1; i_15 < 20; i_15 += 4) 
            {
                var_36 = ((/* implicit */unsigned short) ((arr_22 [i_15] [i_15 + 1] [i_15 + 3]) ? (((/* implicit */int) arr_22 [i_15] [i_15 + 3] [i_15 + 2])) : (((/* implicit */int) (unsigned short)10515))));
                var_37 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_15 + 1] [i_15 - 1] [i_15 + 3])) ? (((/* implicit */int) arr_44 [i_12])) : (((/* implicit */int) (unsigned char)56))));
                arr_49 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) -602040186);
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_38 -= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_12])) + (((/* implicit */int) (short)-17069))));
                var_39 = ((/* implicit */signed char) ((arr_36 [i_12] [i_12]) == (var_16)));
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 605336468U)) ? (((/* implicit */int) arr_41 [i_12] [i_14])) : (((/* implicit */int) arr_41 [i_16] [i_14]))));
            }
            for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (short i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        {
                            var_41 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) arr_25 [i_18]))));
                        }
                    } 
                } 
                var_43 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_17] [i_14] [i_17] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17073))) : (var_14)));
            }
            var_44 ^= ((long long int) arr_17 [i_14] [i_14] [i_14] [(unsigned char)0] [i_12] [i_12] [i_12]);
            /* LoopSeq 3 */
            for (signed char i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_66 [i_22] [i_14] [i_20] [10ULL] = ((/* implicit */long long int) arr_32 [i_21 - 1] [i_21 - 1]);
                            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (short)-723)) : (1439587976))))));
                        }
                    } 
                } 
                var_46 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 602040199)) ? (150590928U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                var_47 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)14572)) ? (-602040198) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (unsigned short)53834))));
            }
            for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
            {
                arr_69 [(_Bool)1] [i_14] [i_14] [(unsigned short)15] = ((/* implicit */signed char) var_8);
                var_48 -= ((/* implicit */signed char) (short)17073);
                var_49 = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)1))))));
                var_50 = ((/* implicit */short) ((((/* implicit */int) var_7)) | (((((/* implicit */int) arr_22 [i_12] [i_14] [(unsigned short)12])) * (((/* implicit */int) arr_46 [i_23] [i_14] [(unsigned short)22]))))));
                arr_70 [i_23] [i_14] [i_12] = ((((arr_10 [i_12] [i_14] [i_23] [i_23]) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (43304))));
            }
            for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 2) 
            {
                var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53828)) ? (((/* implicit */int) (short)7294)) : (((/* implicit */int) (short)17089)))))));
                var_52 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)17071))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)17084)))) : (((/* implicit */int) (_Bool)1))));
                arr_73 [i_12] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -4451032143467628774LL)) ? (-602040174) : (-602040156)))));
                /* LoopSeq 3 */
                for (long long int i_25 = 1; i_25 < 21; i_25 += 1) 
                {
                    var_53 = arr_27 [i_14];
                    var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (602040158)))))))));
                }
                for (int i_26 = 3; i_26 < 22; i_26 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (unsigned short)11716)) : (((/* implicit */int) (_Bool)1))));
                        var_56 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_12] [i_12] [i_24] [i_27] [i_26 - 2]))));
                        arr_80 [i_27] [i_27] [i_26] [3] [i_27] = ((/* implicit */int) var_7);
                    }
                    var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) arr_76 [i_12] [i_24] [i_24] [i_26] [i_24] [i_26 - 3])) : (((/* implicit */int) arr_16 [i_14] [i_14] [i_26 + 1] [i_26 - 2] [i_26])))))));
                    var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) ((((/* implicit */_Bool) 602040166)) ? (((/* implicit */int) ((-1LL) != ((-9223372036854775807LL - 1LL))))) : (arr_8 [i_26 - 1] [i_26 + 1] [i_26 - 3] [i_26 - 1]))))));
                }
                for (int i_28 = 0; i_28 < 23; i_28 += 2) 
                {
                    var_59 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                    /* LoopSeq 3 */
                    for (long long int i_29 = 3; i_29 < 21; i_29 += 3) /* same iter space */
                    {
                        var_60 ^= ((var_15) / (((/* implicit */unsigned long long int) -602040161)));
                        var_61 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_38 [i_29 + 1] [i_24] [i_14] [i_12])) : (((/* implicit */int) var_7))))));
                        var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) (-(-1275490925129382526LL))))));
                        var_63 = ((/* implicit */unsigned int) ((12LL) + (((/* implicit */long long int) 3))));
                    }
                    for (long long int i_30 = 3; i_30 < 21; i_30 += 3) /* same iter space */
                    {
                        var_64 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_12] [i_14] [(short)6] [i_30])) ? (602040151) : (((/* implicit */int) arr_84 [i_12] [i_12] [i_24]))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_5))))));
                        var_65 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (arr_65 [i_30] [i_30 + 1] [i_30 - 1] [15U] [i_30 - 3])));
                        arr_88 [15] [i_30] [i_24] [i_28] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4)) ? (1652585813) : (((/* implicit */int) (unsigned char)151))));
                        var_66 = ((/* implicit */short) (((!(((/* implicit */_Bool) 4293391896U)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [8U] [i_30] [i_24] [i_30 - 3] [18LL] [i_30])))));
                    }
                    for (long long int i_31 = 3; i_31 < 21; i_31 += 3) /* same iter space */
                    {
                        var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (25LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14615)))));
                        var_68 = ((/* implicit */unsigned int) min((var_68), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_14] [20ULL] [i_31 - 3] [i_31] [i_14] [i_24] [3LL])))))));
                    }
                    var_69 = ((/* implicit */short) var_3);
                    var_70 -= -7LL;
                }
                var_71 -= ((/* implicit */long long int) var_18);
            }
            var_72 = ((/* implicit */short) (-(((/* implicit */int) arr_71 [i_12] [i_14] [i_14] [12U]))));
        }
        for (int i_32 = 1; i_32 < 21; i_32 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
            {
                for (long long int i_34 = 1; i_34 < 21; i_34 += 2) 
                {
                    {
                        var_73 = ((/* implicit */long long int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) 30LL))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_35 = 3; i_35 < 22; i_35 += 1) 
                        {
                            var_74 -= ((/* implicit */unsigned int) ((_Bool) arr_56 [i_35 - 3] [i_34 + 1] [i_34] [i_32 + 1]));
                            var_75 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [16] [i_32 + 1] [i_35 + 1] [(unsigned short)20] [i_35 + 1] [i_34 + 2]))) + (26LL)));
                        }
                        for (int i_36 = 0; i_36 < 23; i_36 += 4) 
                        {
                            var_76 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_32 + 1] [i_33 - 1] [i_33 - 1] [i_34 + 1])) ? (4LL) : (((/* implicit */long long int) 73165087))));
                            var_77 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -602040134)) ? (-21) : (((/* implicit */int) ((unsigned short) -602040156)))));
                        }
                        for (unsigned long long int i_37 = 0; i_37 < 23; i_37 += 2) 
                        {
                            var_78 -= ((/* implicit */long long int) arr_22 [i_32] [i_32] [i_32]);
                            var_79 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -8)) + (var_14)));
                            var_80 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_75 [18ULL] [20LL] [i_33 - 1] [i_34 + 1]))));
                        }
                        for (unsigned long long int i_38 = 0; i_38 < 23; i_38 += 1) 
                        {
                            arr_110 [i_12] [i_12] [i_33] [i_38] [i_38] = ((/* implicit */long long int) ((((var_10) + (2147483647))) << (((((((/* implicit */unsigned int) 272851446)) | (arr_4 [i_12] [i_32 + 1]))) - (3041912311U)))));
                            arr_111 [i_32] [i_32 - 1] [i_38] [i_32 + 2] [i_32 + 1] = 17LL;
                            arr_112 [i_38] [i_32 + 1] [i_33] [i_33] [i_12] = (-(((/* implicit */int) (unsigned char)102)));
                        }
                        var_81 = ((/* implicit */short) max((var_81), (((/* implicit */short) ((arr_48 [18LL] [i_32 + 1]) ? (((/* implicit */int) arr_107 [22ULL] [i_32 + 2] [(unsigned short)11] [i_32 + 1] [i_33 - 1] [(unsigned short)8])) : (((/* implicit */int) arr_71 [i_32 + 2] [i_33 - 1] [i_33] [i_34 - 1])))))));
                        var_82 -= ((/* implicit */unsigned int) -8101584104258245657LL);
                    }
                } 
            } 
            var_83 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)95))));
        }
        var_84 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_12] [i_12] [i_12] [(unsigned char)10])) ? (arr_56 [i_12] [i_12] [i_12] [10]) : (((/* implicit */long long int) 602040160))));
    }
    var_85 -= ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_39 = 0; i_39 < 10; i_39 += 2) 
    {
        var_86 = ((/* implicit */unsigned char) max((var_86), (((/* implicit */unsigned char) -25))));
        var_87 ^= ((((/* implicit */_Bool) 226513816U)) ? (((/* implicit */int) arr_7 [i_39] [2])) : (((/* implicit */int) arr_67 [i_39] [i_39] [2] [i_39])));
    }
}
