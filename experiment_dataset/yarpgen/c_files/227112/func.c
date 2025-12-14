/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227112
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
    var_14 = ((/* implicit */long long int) min((var_10), (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_7)))) : (((unsigned long long int) var_6)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) (signed char)111)))), (((/* implicit */int) ((unsigned char) (signed char)-118)))));
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 4294967295U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2 - 1])))))) : (14101568609933468748ULL)));
            arr_12 [i_1] [i_2] = ((/* implicit */signed char) (~(((arr_6 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [13])))))));
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) >> (((((/* implicit */int) ((signed char) arr_6 [i_2]))) - (52)))));
                var_17 = ((/* implicit */int) ((unsigned char) (signed char)98));
                var_18 = ((/* implicit */int) max((var_18), (((((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) (unsigned short)35145)) : (((/* implicit */int) (signed char)-124)))) + ((+(((/* implicit */int) (unsigned char)3))))))));
                arr_15 [i_1] [i_3] = ((/* implicit */short) (-(2047ULL)));
                var_19 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            arr_18 [i_4] = ((/* implicit */unsigned long long int) (+(var_3)));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 8; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((long long int) ((arr_9 [i_1]) + (arr_9 [i_4]))));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-125))));
                    }
                } 
            } 
            arr_25 [i_4] = ((/* implicit */signed char) 2062888761);
            var_22 ^= ((/* implicit */unsigned long long int) (((~(arr_17 [(signed char)1]))) != (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) == (((/* implicit */int) (_Bool)1)))))));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            arr_29 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1]))) == (var_3))))));
            /* LoopNest 2 */
            for (signed char i_8 = 3; i_8 < 11; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    {
                        var_23 ^= ((/* implicit */int) ((((1037666904U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) != (((/* implicit */unsigned int) arr_17 [i_8 - 1]))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-477538457) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [9LL] [i_7] [i_8]))) > (arr_20 [i_1] [i_7] [i_8] [i_9])))) : (((/* implicit */int) arr_35 [i_8 - 3] [(_Bool)1] [i_8 - 1] [i_8 - 2] [i_8 + 1]))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned int i_10 = 2; i_10 < 10; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_7]))))))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_16 [0LL] [i_1]))));
                    var_27 |= ((/* implicit */unsigned int) ((var_2) < (((/* implicit */long long int) arr_32 [i_10 - 1] [i_11]))));
                    arr_44 [i_1] [i_7] [i_10] [i_7] [i_10] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_30 [i_11 + 1] [i_10] [7LL] [(_Bool)1])));
                }
                var_28 = ((((/* implicit */_Bool) arr_24 [i_10 - 2] [i_10 - 2] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)108))))) : (((((/* implicit */_Bool) 3128001044419686539ULL)) ? (var_10) : (((/* implicit */int) arr_28 [i_1] [0LL] [i_1])))));
                arr_45 [i_7] = ((/* implicit */short) var_10);
                /* LoopSeq 2 */
                for (unsigned char i_12 = 4; i_12 < 10; i_12 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        arr_52 [i_1] [i_7] [i_12 - 2] [i_7] = ((/* implicit */unsigned short) var_0);
                        var_30 -= ((/* implicit */_Bool) var_8);
                        var_31 = ((/* implicit */_Bool) (~(268435455U)));
                        var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) | (arr_43 [i_13] [i_7] [i_10])))));
                    }
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709549560ULL)) ? (-256146508851781153LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120))))) >> ((((-(((/* implicit */int) (unsigned short)35137)))) + (35146)))));
                    }
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        arr_60 [i_7] [i_14] [i_10] [i_7] [i_1] [i_7] = ((short) arr_49 [6U] [i_1] [10LL] [i_10] [i_14] [0] [i_16]);
                        var_35 ^= 17371940967023721728ULL;
                    }
                }
            }
            for (unsigned short i_17 = 3; i_17 < 10; i_17 += 3) 
            {
                var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-114))))) ? (((/* implicit */unsigned long long int) ((arr_40 [0LL]) / (((/* implicit */long long int) var_11))))) : (((unsigned long long int) var_3))));
                var_37 = ((/* implicit */unsigned char) ((unsigned long long int) ((2067ULL) + (((/* implicit */unsigned long long int) 2701246550U)))));
                arr_65 [i_1] [i_1] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_17 + 1] [i_17 + 2] [i_17 + 1])) && (((/* implicit */_Bool) arr_38 [i_17 + 1] [i_17 - 1] [i_17 - 3]))));
            }
            for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 4) 
            {
                arr_68 [i_7] [i_7] = ((/* implicit */int) arr_36 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18 + 1]);
                arr_69 [i_1] [i_7] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) == (var_3))))));
            }
            for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((2299500081515719567LL) % (((/* implicit */long long int) var_13))))));
                            var_39 = ((((/* implicit */_Bool) ((arr_20 [i_1] [i_7] [i_19] [i_20]) >> (((((/* implicit */int) (signed char)-120)) + (179)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_7] [i_7] [i_20]))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_21] [i_20] [i_19] [i_7] [i_1] [i_1] [i_1]))))));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_7] [i_20]))))) != (arr_13 [i_20] [i_20] [i_19] [i_20])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_22 = 3; i_22 < 11; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */int) ((signed char) (signed char)12));
                            arr_83 [(short)2] [i_7] [4LL] [i_22] [6LL] = ((/* implicit */signed char) 846183808U);
                        }
                    } 
                } 
            }
        }
        for (signed char i_24 = 2; i_24 < 10; i_24 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_25 = 0; i_25 < 12; i_25 += 4) 
            {
                var_42 -= ((((/* implicit */_Bool) arr_49 [(unsigned short)5] [i_1] [i_1] [1LL] [i_24] [i_24] [i_25])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_22 [(_Bool)1] [i_1])));
                arr_91 [i_24 + 2] = ((/* implicit */signed char) (unsigned char)109);
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */int) arr_39 [11ULL] [7U] [i_24 + 1] [5LL])) > (arr_78 [i_1] [i_24] [i_25] [i_24 - 2]))))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_44 = ((/* implicit */unsigned long long int) var_3);
                /* LoopSeq 1 */
                for (signed char i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    var_45 += ((/* implicit */signed char) ((((/* implicit */int) ((-8586138173816656622LL) < (((/* implicit */long long int) (-2147483647 - 1)))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-4426385857041257097LL))))));
                    /* LoopSeq 1 */
                    for (short i_28 = 0; i_28 < 12; i_28 += 2) 
                    {
                        arr_101 [i_26] [i_26] [i_26] [(signed char)1] [i_26] [i_26] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_30 [i_1] [i_24] [i_26] [i_28]))) ? (var_3) : (var_0)));
                        arr_102 [i_1] [i_26] [i_26] [i_27] [i_27] [i_28] = ((/* implicit */long long int) arr_9 [i_28]);
                    }
                    var_46 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                    arr_103 [i_26] [i_26] [i_1] = (+(((/* implicit */int) arr_81 [i_24] [i_24 + 1] [i_24 - 1] [i_24] [i_24])));
                    var_47 ^= ((/* implicit */short) ((arr_63 [i_27] [i_24] [i_27]) % (arr_63 [i_24] [(_Bool)1] [i_24])));
                }
            }
            var_48 = ((/* implicit */int) max((var_48), (((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) arr_31 [i_1] [10U] [i_24] [i_24])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_1] [i_24] [(unsigned char)2] [i_1] [i_24])))))))));
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_30 = 0; i_30 < 12; i_30 += 2) 
            {
                var_49 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)-8))))));
                /* LoopSeq 2 */
                for (unsigned short i_31 = 0; i_31 < 12; i_31 += 2) 
                {
                    var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                    var_51 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) > (16579211793808583204ULL)))) > (((((/* implicit */int) arr_100 [i_29] [i_30])) >> (((((/* implicit */int) arr_80 [i_1] [i_1] [i_29] [i_30] [i_29] [4U])) - (47)))))));
                    var_52 = ((/* implicit */unsigned short) arr_23 [i_31] [0ULL] [4ULL] [i_1]);
                    arr_113 [i_29] [i_29] [i_30] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 67108863)) ? (((((/* implicit */_Bool) (short)9977)) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29]))) : (2248247433884459762LL))) : (((/* implicit */long long int) ((int) var_7)))));
                }
                for (unsigned long long int i_32 = 0; i_32 < 12; i_32 += 1) 
                {
                    arr_116 [i_29] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_40 [i_29])))));
                    var_53 = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)5121));
                    var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_29]))) % (var_3)))) ? (var_3) : (((((/* implicit */_Bool) arr_98 [i_30] [i_29])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32754))) : (var_0)))));
                }
            }
            for (int i_33 = 1; i_33 < 11; i_33 += 2) 
            {
                var_55 &= ((/* implicit */long long int) ((unsigned long long int) (signed char)-120));
                arr_120 [i_29] [5LL] [i_33 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) % (var_7)));
                var_56 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_33] [i_1] [4U] [i_29] [i_29] [i_29]))));
                /* LoopNest 2 */
                for (long long int i_34 = 2; i_34 < 10; i_34 += 2) 
                {
                    for (signed char i_35 = 0; i_35 < 12; i_35 += 1) 
                    {
                        {
                            var_57 += ((/* implicit */long long int) 1U);
                            var_58 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) != ((~(((/* implicit */int) (unsigned short)30409))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_36 = 0; i_36 < 12; i_36 += 2) 
            {
                arr_127 [i_36] [i_29] [i_29] &= ((/* implicit */int) var_1);
                var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-3057563143789208857LL) ^ (((/* implicit */long long int) 109724173U))))) ? (var_2) : (arr_124 [i_29] [i_29])));
            }
            for (unsigned long long int i_37 = 0; i_37 < 12; i_37 += 4) 
            {
                var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))))) : ((+(((/* implicit */int) arr_130 [i_29] [i_29] [i_37] [i_37]))))));
                var_61 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [(unsigned short)5] [i_1] [i_29] [i_29] [7LL]))))) ? (((((/* implicit */int) (unsigned short)3)) | (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_92 [i_37] [(signed char)4] [i_29] [10ULL]))));
                /* LoopSeq 1 */
                for (unsigned int i_38 = 2; i_38 < 11; i_38 += 1) 
                {
                    var_62 = ((/* implicit */unsigned char) (((-(606644823714873859ULL))) ^ ((-(14ULL)))));
                    var_63 += ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_37] [i_29] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (9223372036854775807LL))))) : (((((/* implicit */_Bool) arr_73 [i_38] [i_37])) ? (arr_36 [i_38] [i_37] [i_29] [i_1]) : (arr_106 [i_37])))));
                }
                arr_133 [i_29] [6U] [i_29] [i_29] = ((/* implicit */int) arr_70 [i_37] [i_29] [i_1]);
                var_64 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) || (((/* implicit */_Bool) (signed char)98))))) == ((~(((/* implicit */int) arr_27 [i_1] [i_29]))))));
            }
            var_65 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) 2248247433884459749LL))) + (2147483647))) >> (((((var_10) >> (((((/* implicit */int) var_8)) - (102))))) - (487106)))));
        }
        var_66 = ((((((/* implicit */_Bool) arr_42 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_1] [i_1] [(signed char)4] [(signed char)4] [i_1] [i_1]))) : (var_7))) ^ (894700247U));
    }
}
