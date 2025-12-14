/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42501
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) (_Bool)1);
        var_20 = ((/* implicit */unsigned char) min((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))), (((/* implicit */int) var_1))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_7 [i_0] = (_Bool)1;
            arr_8 [i_0 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)112)) != (((/* implicit */int) arr_2 [i_0] [i_0 - 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_1 + 1] [i_1 - 1])), (arr_2 [i_1 + 1] [i_1])))) : (((/* implicit */int) ((short) arr_5 [i_0 + 1])))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_12 [14LL] = ((/* implicit */long long int) 1U);
            var_21 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) + (((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) + (14773576115258572076ULL)))));
            arr_13 [i_0] = ((/* implicit */signed char) (_Bool)1);
        }
        /* vectorizable */
        for (short i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            var_22 = ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)9] [i_0])) && (((/* implicit */_Bool) 4294967294U)));
            var_23 += ((/* implicit */short) (+(16449597095666531447ULL)));
            arr_16 [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) (signed char)117);
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14643)) + (((/* implicit */int) (_Bool)0))))) : (arr_10 [i_5] [i_4] [i_0 + 1])));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_6 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_11 [i_4 - 1] [i_6 + 1] [(_Bool)1]))));
                            var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1) : (((/* implicit */int) arr_17 [i_0 + 1] [i_3 + 3] [i_4] [i_6 + 1]))));
                            var_27 = ((/* implicit */unsigned short) ((arr_9 [i_4 + 1] [i_6 + 1]) & (((/* implicit */unsigned long long int) var_16))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_26 [i_0] [i_0] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) (_Bool)0);
                            arr_27 [(unsigned char)6] [(unsigned char)6] [i_4] [i_7] [i_5] [i_7] |= ((/* implicit */signed char) (short)12196);
                            var_28 = ((((/* implicit */_Bool) arr_22 [(unsigned char)10] [i_5] [i_0] [i_5] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-6180))))));
                            var_29 = ((/* implicit */short) arr_22 [(short)5] [(_Bool)1] [(short)10] [i_5] [i_7]);
                        }
                        for (long long int i_8 = 4; i_8 < 17; i_8 += 1) 
                        {
                            arr_31 [i_8] [i_5] [i_5] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_15 [i_0 - 1] [i_3 + 3])));
                            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_16)) : (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196)))))));
                            arr_32 [i_8] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
                        {
                            var_31 = ((/* implicit */short) 4294967294U);
                            arr_35 [i_5] = (~(((/* implicit */int) (short)-11967)));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_9 + 3])) ? (4294967288U) : (((/* implicit */unsigned int) -1393878801))));
                        }
                        var_33 = ((/* implicit */short) -780030032);
                    }
                } 
            } 
        }
    }
    for (short i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */long long int) (signed char)45);
        /* LoopSeq 4 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (unsigned char)0))));
            /* LoopNest 3 */
            for (short i_12 = 1; i_12 < 15; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        {
                            arr_49 [i_10] [i_10] [i_14] = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */int) (unsigned short)44890)), (169041752))));
                            arr_50 [i_10] [(unsigned short)3] [i_12] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) max((8556667429801484099LL), (max((min((((/* implicit */long long int) (unsigned short)55078)), (-8556667429801484077LL))), (((/* implicit */long long int) arr_46 [i_14] [i_12 + 1]))))));
                            var_36 = ((/* implicit */unsigned short) (~(var_2)));
                            arr_51 [0LL] [i_11] [i_12 + 1] [(unsigned char)0] [i_14] = ((/* implicit */unsigned long long int) arr_5 [i_13]);
                            var_37 = ((/* implicit */signed char) (~(5425825380076371774ULL)));
                        }
                    } 
                } 
            } 
            arr_52 [(short)3] [i_11] [i_11] = ((/* implicit */long long int) ((short) min((arr_22 [(unsigned char)0] [(short)10] [(_Bool)1] [(short)10] [i_10]), ((unsigned char)196))));
        }
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) 268435455ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8556667429801484105LL)) ? (547608330240LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-1404753592), (((/* implicit */int) (unsigned short)6592))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_18))))));
                var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_15 + 1] [i_10 + 1] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_38 [i_15 + 1])) == (var_14))))) : (18446744073709551615ULL))))));
            }
        }
        for (unsigned short i_17 = 3; i_17 < 17; i_17 += 3) 
        {
            var_41 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2305186531U)) : (arr_40 [i_17] [i_10] [i_10])))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) min((var_3), (((/* implicit */short) (signed char)2))))))));
            var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8556667429801484076LL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), ((short)3840))))) : (8556667429801484076LL)));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_64 [i_10] [i_17] [13LL] [i_18] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8556667429801484090LL)) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((long long int) 17634889196018189862ULL))))))));
                arr_65 [i_10] = ((/* implicit */unsigned short) arr_6 [i_10 - 1]);
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) arr_68 [i_20 - 1] [(_Bool)0] [i_18] [i_10]);
                            arr_74 [i_10] [i_18] = ((/* implicit */unsigned long long int) arr_29 [i_19 + 1] [i_17 - 3] [i_10 - 1]);
                        }
                    } 
                } 
                arr_75 [i_18] [13LL] = ((/* implicit */short) ((unsigned long long int) (signed char)-125));
            }
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_78 [i_10] = ((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) arr_22 [(unsigned char)4] [i_10 - 1] [i_10] [(unsigned short)12] [i_21]))))));
            /* LoopSeq 2 */
            for (unsigned short i_22 = 0; i_22 < 18; i_22 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    var_44 = ((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1] [i_21] [i_22] [i_22] [(_Bool)1]);
                    var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (4013447901462353855ULL))))));
                    var_46 += ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)28)), ((~(((/* implicit */int) (_Bool)1))))));
                    var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) arr_46 [i_10 - 1] [i_10 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_46 [i_10] [i_10 - 1]))))));
                }
                var_48 |= ((/* implicit */unsigned short) ((unsigned char) min((arr_77 [i_10 - 1]), (((/* implicit */unsigned char) (signed char)104)))));
            }
            for (unsigned char i_24 = 2; i_24 < 17; i_24 += 1) 
            {
                var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45618))));
                arr_86 [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) arr_21 [i_24 + 1] [i_24] [i_21] [i_24] [i_10 + 1]);
            }
        }
        arr_87 [i_10 + 1] = ((/* implicit */int) (unsigned char)93);
        /* LoopSeq 1 */
        for (long long int i_25 = 0; i_25 < 18; i_25 += 4) 
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 18; i_26 += 1) 
            {
                for (unsigned int i_27 = 1; i_27 < 17; i_27 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_28 = 0; i_28 < 18; i_28 += 2) 
                        {
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) (_Bool)1))));
                            var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) var_18))));
                            arr_98 [i_27] [i_10 + 1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-1))));
                        }
                        arr_99 [i_27] [i_25] [i_25] [i_10] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (!((_Bool)0)))), (arr_70 [i_10] [i_10] [(unsigned short)11] [(unsigned short)11] [1ULL] [(unsigned short)11] [i_27])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (13522233351998779495ULL)))));
                        arr_100 [i_25] [12ULL] [6LL] = arr_88 [i_25] [1];
                        var_52 *= ((/* implicit */short) (unsigned char)162);
                    }
                } 
            } 
            var_53 = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_29 = 1; i_29 < 16; i_29 += 1) 
            {
                var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) ((arr_34 [i_25] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_29 + 2] [i_29] [(unsigned char)0]) ^ (arr_34 [i_25] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_29 + 2] [i_25] [i_10 + 1]))))));
                var_55 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                arr_103 [i_10] [i_25] [i_29] = ((/* implicit */short) arr_60 [i_25] [i_29 - 1] [i_29]);
                var_56 += (signed char)87;
                arr_104 [i_10] [i_25] [i_25] [i_29 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_10] [i_10] [4ULL] [i_10] [i_10 + 1] [i_10 + 1]))) : (-8556667429801484077LL)));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_30 = 0; i_30 < 19; i_30 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_31 = 1; i_31 < 16; i_31 += 4) 
        {
            var_57 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_108 [i_30] [i_31 + 3]))));
            var_58 += ((/* implicit */int) arr_108 [i_30] [i_31]);
        }
        for (int i_32 = 2; i_32 < 18; i_32 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_33 = 0; i_33 < 19; i_33 += 1) 
            {
                arr_114 [i_30] [(signed char)10] [(signed char)10] = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 4 */
                for (short i_34 = 1; i_34 < 16; i_34 += 4) 
                {
                    var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */long long int) -1)) : (2503293553250897190LL))) - (-1215332135081120971LL))))));
                    var_60 = ((/* implicit */unsigned char) arr_113 [i_34 + 3] [i_34 + 3] [i_32 - 1]);
                }
                for (int i_35 = 1; i_35 < 16; i_35 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 1; i_36 < 17; i_36 += 2) 
                    {
                        var_61 = ((/* implicit */long long int) ((_Bool) -3826935132167204003LL));
                        var_62 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3880))) < (arr_112 [i_35 + 3] [i_35 + 1] [i_36] [i_36]));
                        var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) arr_108 [i_33] [i_30]))));
                        var_64 ^= (((~(arr_113 [i_35] [i_30] [i_30]))) | ((~(((/* implicit */int) var_1)))));
                    }
                    var_65 = ((/* implicit */unsigned short) min((var_65), (((/* implicit */unsigned short) ((unsigned char) (_Bool)1)))));
                }
                for (short i_37 = 0; i_37 < 19; i_37 += 3) 
                {
                    var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_121 [i_32 - 1] [i_32 - 1] [i_37] [i_37] [i_32 + 1] [i_32 - 2])));
                    var_67 = ((/* implicit */unsigned short) min((var_67), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)13884)) << (((((/* implicit */int) (unsigned short)19)) - (6))))) / (((/* implicit */int) (unsigned char)141)))))));
                    arr_125 [i_37] [i_32] [i_33] [i_37] [i_30] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_111 [i_30] [i_30] [i_33] [i_37]))) : (arr_121 [i_30] [i_32] [i_33] [i_37] [i_37] [i_32]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_122 [i_30] [i_32] [(signed char)0] [17ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                }
                for (unsigned char i_38 = 0; i_38 < 19; i_38 += 1) 
                {
                    var_68 = ((/* implicit */unsigned short) var_11);
                    /* LoopSeq 1 */
                    for (int i_39 = 0; i_39 < 19; i_39 += 4) 
                    {
                        var_69 &= ((((/* implicit */_Bool) (-(107267475)))) ? ((+(arr_128 [(unsigned char)8] [i_32]))) : (((/* implicit */long long int) var_16)));
                        var_70 = (~((-(var_14))));
                    }
                }
                var_71 = ((/* implicit */unsigned char) (short)-1);
            }
            arr_130 [i_30] [3LL] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((8556667429801484077LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))))) : (((unsigned int) arr_112 [i_30] [i_30] [7] [(_Bool)1]))));
            var_72 = ((/* implicit */unsigned short) ((arr_118 [i_30] [i_30] [8LL] [i_30] [15]) >= (((/* implicit */int) (short)3362))));
        }
        /* LoopNest 2 */
        for (int i_40 = 3; i_40 < 17; i_40 += 4) 
        {
            for (int i_41 = 1; i_41 < 16; i_41 += 1) 
            {
                {
                    arr_135 [i_30] [i_30] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)43)) >> (((var_2) - (743782013U)))));
                    var_73 += ((/* implicit */signed char) var_10);
                }
            } 
        } 
        var_74 = ((/* implicit */short) arr_111 [(unsigned char)5] [i_30] [i_30] [i_30]);
        var_75 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_122 [i_30] [i_30] [i_30] [i_30])) ? (((/* implicit */unsigned long long int) -3383896208213074754LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32510))) ^ (12254071177379392193ULL)))));
    }
    var_76 = ((/* implicit */_Bool) max((var_76), (((/* implicit */_Bool) (short)3362))));
    var_77 = ((/* implicit */_Bool) (short)12096);
    var_78 ^= ((/* implicit */unsigned char) (signed char)32);
}
