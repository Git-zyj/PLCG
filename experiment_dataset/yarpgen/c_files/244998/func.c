/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244998
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
    var_12 = ((/* implicit */signed char) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)244))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_13 = ((((/* implicit */_Bool) ((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27946))) : (arr_0 [i_0 + 1]))) + (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) >= (var_3))))))) : (((((/* implicit */_Bool) (+(var_9)))) ? ((+(var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))))))));
        arr_4 [i_0] = ((/* implicit */signed char) max((((arr_1 [i_0 + 1]) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) : (var_10))) : (arr_2 [i_0 + 1]))), (var_10)));
        arr_5 [i_0 + 1] [i_0] = ((((/* implicit */_Bool) max((((arr_2 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)31145))))), (((/* implicit */unsigned int) ((_Bool) arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((int) arr_0 [i_0 + 1]))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_0 [i_0 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((5788146510357365580ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (arr_2 [i_0]))));
        arr_6 [i_0] = ((/* implicit */unsigned short) var_3);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((12658597563352186027ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (var_9) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [10ULL] [10ULL]))))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_1 + 1])) : (((/* implicit */int) arr_10 [i_1 + 1]))))))))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)-5735)), (var_0))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)115))) : (var_11)))) ? (((((/* implicit */_Bool) (signed char)-127)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))) : ((~(var_8)))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            {
                var_17 = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_3]))) << (((arr_2 [11U]) - (2674746792U))));
                arr_16 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (((~(arr_8 [i_3 + 2] [i_3 + 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3 + 3])) || (var_6)))))));
                arr_17 [i_2] = ((/* implicit */signed char) (+(((long long int) arr_12 [i_2] [i_3 - 2]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((arr_2 [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 ^= ((signed char) arr_25 [(_Bool)1] [i_5 - 1] [i_5 + 1] [i_5 - 1]);
                    var_20 = ((/* implicit */long long int) arr_1 [i_6]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_37 [1] [i_4] [i_7] [i_8] [i_4] [i_10] [i_10] = ((/* implicit */int) ((arr_7 [i_7 + 2]) / (arr_7 [i_7 + 2])));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)62844)))))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_32 [i_4] [i_7] [i_9 - 2] [i_10]))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_0 [i_4])) : (var_9)))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [(signed char)12] [i_7 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_39 [i_4] [i_7 + 2])));
                    var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_4] [i_7] [i_11] [i_7 - 1] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_33 [i_4] [i_7] [i_7] [i_7 + 3] [i_11] [i_4])));
                }
                /* LoopSeq 1 */
                for (int i_13 = 1; i_13 < 14; i_13 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((arr_8 [i_7] [i_13]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_28 [i_7]) == (((/* implicit */unsigned long long int) var_3))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        arr_48 [i_4] [i_11] [i_11] [i_4] [i_11] [(unsigned char)9] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7)));
                        var_28 *= ((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_31 [i_4] [(signed char)12] [i_11])))))));
                    }
                    for (long long int i_15 = 1; i_15 < 15; i_15 += 2) 
                    {
                        var_29 += ((/* implicit */_Bool) (~(var_1)));
                        var_30 = ((/* implicit */unsigned short) ((arr_23 [i_4]) ? (((/* implicit */unsigned long long int) arr_39 [i_7 + 1] [i_7])) : (((((/* implicit */_Bool) arr_2 [i_7])) ? (var_8) : (((/* implicit */unsigned long long int) 5129949276300115909LL))))));
                        var_31 = ((/* implicit */unsigned char) ((_Bool) arr_8 [i_7] [i_7]));
                    }
                    for (short i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        arr_54 [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) var_10);
                        var_32 = ((/* implicit */unsigned short) ((unsigned int) (signed char)101));
                    }
                    var_33 = ((/* implicit */unsigned short) ((arr_42 [i_4] [i_7 + 2]) >> (((arr_42 [i_4] [i_7 + 2]) - (2845917682U)))));
                    arr_55 [i_4] [i_7 + 1] [i_11] [i_7 + 1] [i_13] = ((/* implicit */_Bool) var_4);
                }
            }
            for (unsigned char i_17 = 2; i_17 < 14; i_17 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((short) var_10)))));
                    var_35 = ((/* implicit */_Bool) ((arr_44 [i_4] [i_17 - 2]) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) arr_44 [i_17] [i_17 - 2]))));
                    var_36 = ((/* implicit */unsigned char) arr_43 [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_4]);
                    var_37 ^= ((/* implicit */short) var_10);
                    arr_61 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6643870827448028930ULL)) ? (((/* implicit */long long int) var_1)) : (var_3)))) : (arr_8 [i_4] [i_17])));
                }
                for (unsigned char i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)57))))) ? (-382651964569675853LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) arr_18 [i_7])))) : ((+(((/* implicit */int) (signed char)-127))))));
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) -2786711601439925750LL))));
                    var_41 = ((/* implicit */short) ((arr_28 [i_4]) * (((/* implicit */unsigned long long int) -2011837711693565377LL))));
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        arr_67 [i_4] [i_4] [i_7 - 1] [i_4] [i_19] = ((/* implicit */unsigned char) var_0);
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 - 2] [i_17 + 2])) ? (((((/* implicit */_Bool) 1756446811U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_7] [(_Bool)1]))) : (var_8))) : (((/* implicit */unsigned long long int) var_11))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        var_43 ^= ((/* implicit */unsigned short) arr_36 [i_4] [i_4] [i_4] [i_4] [i_4]);
                        arr_71 [i_21] [i_19] [i_4] [i_4] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_17 - 1] [i_19] [i_21])) ? (var_7) : (((/* implicit */unsigned long long int) arr_56 [i_4] [i_4] [i_17]))))));
                        var_44 *= ((/* implicit */short) ((long long int) var_5));
                    }
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_7 + 3] [i_17 - 2] [i_23 - 1] [i_22] [i_4]))) - (var_5)));
                        var_46 = ((/* implicit */unsigned long long int) (~(arr_62 [i_7 - 1] [i_23 - 1] [i_17 - 2] [i_22])));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_47 = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_7 + 3] [i_7 + 3] [i_17 + 1])) < (((/* implicit */int) arr_68 [i_7 + 3] [i_7] [i_17] [i_22] [i_17 + 1] [i_7 + 3]))));
                        var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_17 + 1] [i_17 + 2] [i_17 + 2] [i_17 - 2])) ? (arr_42 [i_4] [i_7 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_79 [(_Bool)1] [i_7] [i_7] [i_22] [i_24] [i_4] = ((/* implicit */_Bool) (-(arr_2 [i_7 - 2])));
                    }
                    for (short i_25 = 1; i_25 < 13; i_25 += 4) 
                    {
                        var_49 = arr_59 [i_4] [i_25] [i_25] [i_25] [i_25 + 3];
                        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_4])) : (((/* implicit */int) arr_22 [1U]))));
                        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((unsigned char) arr_80 [i_17 + 2])))));
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) (((!(var_6))) ? ((+(arr_59 [i_7] [i_22] [i_17] [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_25] [i_17])) || (((/* implicit */_Bool) 5788146510357365580ULL)))))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_26 = 1; i_26 < 13; i_26 += 4) 
                    {
                        arr_86 [i_7] [i_17 + 1] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_83 [i_7 - 1] [i_17 - 1] [i_17 + 2] [i_26] [i_26 + 2] [i_26]))));
                        arr_87 [i_4] [i_26] = ((/* implicit */long long int) (~(((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-35))))))));
                        var_53 = ((/* implicit */unsigned char) ((unsigned short) (-(var_11))));
                        var_54 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_62 [i_4] [i_7] [i_17 + 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-6140148449641012649LL))) % ((+(-3569060871501352969LL)))));
                        var_55 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_4] [i_17 + 1] [i_22] [3ULL])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_4] [i_7] [i_17] [i_22])))))) ? ((~(((/* implicit */int) (unsigned char)97)))) : (((/* implicit */int) arr_38 [i_7 - 2] [i_17 + 2] [i_26 + 3]))));
                    }
                    for (unsigned int i_27 = 1; i_27 < 13; i_27 += 4) 
                    {
                        arr_92 [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned char)50);
                        var_56 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) / (arr_2 [i_7])));
                    }
                    /* LoopSeq 2 */
                    for (short i_28 = 0; i_28 < 16; i_28 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_83 [i_4] [i_7] [i_17] [i_22] [i_28] [i_4])) * (((/* implicit */int) (short)-1))))));
                        var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) : (4186112LL))))));
                        arr_96 [i_4] [i_4] [i_7] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) 3211055121757350728LL)))));
                        var_59 = ((/* implicit */unsigned short) arr_50 [i_4] [i_7 + 3] [i_17 - 2]);
                    }
                    for (signed char i_29 = 0; i_29 < 16; i_29 += 3) 
                    {
                        arr_99 [i_4] [i_7] [i_7] [i_4] [i_22] [i_29] [i_29] &= ((/* implicit */unsigned int) ((signed char) var_3));
                        var_60 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) * (var_11)))) || ((_Bool)1)));
                    }
                }
                var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)32762)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                var_62 |= ((/* implicit */unsigned int) (+(arr_8 [i_4] [i_7])));
            }
            for (unsigned char i_30 = 2; i_30 < 14; i_30 += 3) /* same iter space */
            {
                var_63 = ((/* implicit */signed char) arr_57 [i_7] [i_7] [i_7] [i_7 + 2]);
                /* LoopSeq 1 */
                for (unsigned short i_31 = 0; i_31 < 16; i_31 += 4) 
                {
                    arr_105 [i_4] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_4])) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) arr_21 [i_4] [(unsigned char)6] [i_31]))));
                    arr_106 [i_7 + 1] [i_4] [i_7] [i_31] [i_4] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_4] [i_30 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_98 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98)))))) : (((var_7) << (((arr_34 [i_4] [i_7] [i_30] [i_4] [i_4] [i_7]) - (614460518)))))));
                }
                var_64 = ((/* implicit */short) ((unsigned short) arr_104 [i_4] [i_7]));
            }
            /* LoopNest 2 */
            for (signed char i_32 = 0; i_32 < 16; i_32 += 4) 
            {
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    {
                        arr_112 [11U] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_10) + (var_10))))));
                        var_65 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_4] [i_4] [i_32] [i_4] [i_33]))) : (arr_98 [i_32])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)60937)))))) : (var_7)));
                    }
                } 
            } 
            var_66 = ((/* implicit */unsigned short) min((var_66), (((/* implicit */unsigned short) (signed char)-20))));
        }
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            arr_115 [i_4] [i_4] = ((/* implicit */long long int) (((+(((/* implicit */int) var_4)))) % ((((_Bool)1) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_34])) : (((/* implicit */int) (_Bool)1))))));
            var_67 = ((/* implicit */unsigned short) arr_82 [i_4] [i_4] [(_Bool)1] [i_34] [(_Bool)1]);
        }
    }
    for (unsigned int i_35 = 1; i_35 < 22; i_35 += 2) 
    {
        var_68 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_117 [i_35])) ? (((((((/* implicit */_Bool) arr_117 [i_35])) ? (((/* implicit */long long int) 481723016U)) : (var_11))) - (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-8))))))) : (((arr_117 [i_35]) | (((/* implicit */long long int) ((/* implicit */int) arr_116 [i_35 + 1] [i_35])))))));
        arr_118 [i_35] = arr_116 [i_35 + 1] [i_35];
        arr_119 [i_35] [i_35] = ((/* implicit */unsigned char) 4186110LL);
        arr_120 [i_35] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)0)) ? (var_9) : (var_9)))));
    }
}
