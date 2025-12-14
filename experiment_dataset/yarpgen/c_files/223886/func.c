/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223886
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
    var_10 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) (short)-1));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 2; i_4 < 24; i_4 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)183)) > (((/* implicit */int) (unsigned short)32405))));
                        var_12 *= ((/* implicit */short) (((_Bool)1) ? (max((min((((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_2] [i_1 - 1] [(signed char)3])), (arr_10 [i_0] [i_0 - 1] [i_2]))), (arr_4 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) arr_11 [i_0] [i_1] [i_2] [0])))))) > (var_5)))))));
                        var_13 = ((/* implicit */_Bool) min((var_13), ((_Bool)0)));
                        arr_15 [i_0] [i_2] [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != ((-(((/* implicit */int) arr_13 [i_2] [i_2] [i_1 - 1] [i_2] [i_4]))))));
                        var_14 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */signed char) arr_6 [i_0 + 3] [i_0] [(unsigned short)14] [i_0])), (var_2))));
                    }
                    for (int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        arr_20 [4LL] [i_0] [i_0] [i_2] [i_0] [4LL] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)32405), (((/* implicit */unsigned short) (short)26138))))) > (((/* implicit */int) ((arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (short)4096)))))))))) != ((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_19 [i_0] [i_1] [i_2] [i_3] [i_1 + 1]))))));
                        var_15 *= ((/* implicit */long long int) -1);
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(unsigned char)24] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))) != (((/* implicit */int) min((arr_13 [i_0] [i_0] [i_1] [i_0] [i_1]), (var_9))))));
                        arr_21 [i_5] [(unsigned short)14] [i_2] [i_2] [i_1] [i_5] |= min((max((((/* implicit */long long int) (~(((/* implicit */int) (short)0))))), (arr_19 [i_0] [i_0 - 1] [19] [i_0 + 3] [i_0 + 2]))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(signed char)11] [i_3] [i_5])) ? (min((var_1), (((/* implicit */long long int) (unsigned short)32405)))) : (((/* implicit */long long int) arr_4 [i_3])))));
                    }
                    var_17 = ((/* implicit */long long int) var_3);
                    var_18 = ((/* implicit */long long int) max((min((2585114525U), (min((2454436128U), (((/* implicit */unsigned int) (short)1)))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 592362221)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))))))));
                }
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)8064)), (min((arr_19 [(unsigned short)16] [i_0 + 2] [i_2] [i_0] [i_0 + 1]), (arr_19 [i_2] [i_2] [(unsigned char)8] [i_1] [i_0])))));
                var_20 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)2324)), (372091056U))), (((/* implicit */unsigned int) var_6))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
            {
                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_3);
                arr_26 [i_0] [(unsigned short)24] [i_0] = ((/* implicit */unsigned int) arr_17 [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1] [i_1]);
                arr_27 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)1)) != (((/* implicit */int) (unsigned char)131))));
            }
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_21 = ((/* implicit */int) ((arr_24 [i_0 - 2] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > ((+(((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0 - 1]))))))));
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) -1)) > (var_1)))) != (((/* implicit */int) min((var_0), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]))))))))));
        var_25 = ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        arr_30 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-48)) ? (356100036U) : (1709852770U)));
    }
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_8] [i_8] [7ULL] [7ULL]))))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) arr_29 [i_8] [i_8] [i_8]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1709852771U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)12104))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_0))))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-22720)))))))));
        arr_34 [i_8] = arr_8 [3] [i_8] [i_8] [3];
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_8] [i_8] [i_8] [i_8])))) ? (max((((/* implicit */unsigned int) (short)256)), (arr_7 [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_8] [i_8] [i_8] [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8])))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
    {
        var_27 |= ((/* implicit */long long int) ((((/* implicit */long long int) var_8)) > (var_1)));
        arr_39 [i_9] = ((/* implicit */unsigned int) (short)12104);
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_42 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_5);
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_2))));
                /* LoopSeq 3 */
                for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)8064)) ? (4294967295U) : (388827412U)));
                    arr_47 [22LL] [i_10] [i_9] [i_12] = ((/* implicit */signed char) var_6);
                    arr_48 [i_11] [(short)12] |= ((/* implicit */unsigned short) ((unsigned char) ((max((377231907U), (((/* implicit */unsigned int) (short)-27460)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((3924350539U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))))));
                    var_30 = ((/* implicit */unsigned short) ((arr_14 [(unsigned short)10] [(unsigned short)10] [i_11] [i_11] [(unsigned short)10]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_12] [i_11] [i_10] [i_9])))));
                }
                for (short i_13 = 3; i_13 < 23; i_13 += 4) 
                {
                    arr_52 [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63211)) ? (((((/* implicit */_Bool) (unsigned short)56757)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11] [i_10]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((1412796574U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)30150)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)22623)) > (((/* implicit */int) (short)12458))))) : (((/* implicit */int) (short)32767))))) : (1023814198371666529LL)));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) max(((short)7680), ((short)10355))))));
                        var_32 = ((/* implicit */_Bool) 4294967295U);
                        var_33 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [14] [14]))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) -2056103200)) ? (9926224171274073465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10] [i_11] [i_10] [i_9]))))))) : (((/* implicit */int) max(((unsigned short)57472), (((/* implicit */unsigned short) (unsigned char)53)))))));
                        var_34 ^= ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)58737), (((/* implicit */unsigned short) ((((/* implicit */int) (short)15861)) != (((/* implicit */int) (_Bool)0)))))))) != (((/* implicit */int) max((arr_12 [i_9] [i_10] [(unsigned char)6] [i_11] [i_13] [i_14]), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))))))));
                        var_35 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4095))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 22; i_15 += 3) 
                    {
                        arr_59 [i_9] [i_9] [i_9] [1] [i_9] [i_15] = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_58 [i_15] [(signed char)14] [4ULL] [4ULL] [4ULL] [i_10] [i_9]), (var_0)))) ? (arr_54 [(signed char)0] [(signed char)0] [(signed char)0] [i_13 + 1] [i_15 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)3)))))))), (var_5))))));
                    }
                    var_37 |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_36 [i_11])))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) -1187749187)) ? (((/* implicit */int) ((-1930000269) > (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)15861)) : (((/* implicit */int) (signed char)99))))));
                }
                for (unsigned char i_16 = 2; i_16 < 23; i_16 += 4) 
                {
                    arr_62 [i_9] [i_9] [i_10] [i_11] [i_16 - 2] = ((/* implicit */_Bool) max((13098854660081859097ULL), (((/* implicit */unsigned long long int) var_6))));
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_39 |= ((/* implicit */short) max(((signed char)12), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)(-32767 - 1))))))));
                        arr_66 [i_9] [i_10] [i_10] [i_16 - 2] [i_17] [i_9] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        var_40 = ((/* implicit */int) arr_22 [i_11] [i_11] [i_16 - 1] [i_16]);
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_53 [i_16]))))) : (((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) 3827264197U)))))));
                    }
                }
            }
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                var_42 += (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_68 [(_Bool)1] [i_9] [i_19 + 1] [i_19] [i_10] [i_10] [i_9])));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        {
                            var_43 &= ((/* implicit */int) (+(arr_14 [i_19 + 1] [i_19] [i_19] [i_19 + 1] [i_19 + 1])));
                            var_44 = ((/* implicit */unsigned short) ((((_Bool) arr_64 [i_9] [i_9] [i_19] [(_Bool)1] [i_21] [i_19])) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)65535))))) : ((+(((/* implicit */int) (short)-11673))))));
                            arr_78 [i_21] [i_21] [i_9] [i_20] [i_9] [i_10] [i_9] = ((((/* implicit */_Bool) arr_18 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1])) ? (((/* implicit */int) arr_6 [i_9] [i_19 + 1] [i_19 + 1] [i_9])) : (((/* implicit */int) arr_18 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1])));
                            arr_79 [i_9] = ((((/* implicit */_Bool) arr_32 [6LL])) ? (((/* implicit */int) arr_32 [i_19 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_32 [i_21])) != (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_22 = 2; i_22 < 23; i_22 += 1) 
                {
                    var_45 += ((/* implicit */unsigned short) arr_19 [i_22] [i_19] [i_10] [i_9] [i_9]);
                    arr_82 [(signed char)14] [(unsigned short)8] &= ((/* implicit */signed char) arr_10 [i_19] [i_10] [(unsigned short)24]);
                    arr_83 [i_9] [i_9] [i_19 + 1] [i_19] [9LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16926415031309335693ULL)) ? (var_5) : (((/* implicit */long long int) 0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                }
            }
            for (unsigned short i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                arr_87 [i_9] [i_23] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_77 [i_9] [i_9] [i_10] [i_10] [i_23] [i_23])) : (((/* implicit */int) arr_77 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) > (((unsigned int) min((((/* implicit */long long int) (unsigned short)1)), (var_1))))));
                arr_88 [i_10] [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */int) ((arr_16 [i_9] [i_10] [i_10] [i_23]) != (((/* implicit */int) var_7))))) : (((/* implicit */int) arr_64 [i_9] [i_9] [i_9] [(unsigned short)10] [(unsigned short)10] [(short)2])))) > (((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1)))))));
            }
        }
        /* LoopNest 3 */
        for (long long int i_24 = 0; i_24 < 24; i_24 += 4) 
        {
            for (signed char i_25 = 1; i_25 < 23; i_25 += 3) 
            {
                for (long long int i_26 = 0; i_26 < 24; i_26 += 3) 
                {
                    {
                        var_46 = ((/* implicit */long long int) min((((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))), (((((/* implicit */_Bool) arr_13 [i_9] [i_25 - 1] [i_9] [i_9] [i_9])) ? (((/* implicit */int) ((((/* implicit */int) arr_90 [i_9] [i_9])) > (((/* implicit */int) var_3))))) : (((/* implicit */int) arr_46 [6U] [i_26] [i_24] [i_24] [i_24] [i_9]))))));
                        var_47 *= ((/* implicit */unsigned long long int) ((int) (_Bool)0));
                        arr_97 [i_9] [i_24] [i_9] [i_24] [i_26] = ((/* implicit */int) min((((arr_16 [i_9] [i_25 - 1] [14U] [i_25 - 1]) != (((/* implicit */int) arr_65 [i_24] [i_24] [i_24] [i_25 + 1] [21LL])))), (((((/* implicit */int) arr_43 [i_24] [i_24] [i_24] [i_9])) > (((/* implicit */int) arr_29 [i_24] [i_24] [i_24]))))));
                        var_48 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_50 [i_25 - 1] [i_25] [i_25 - 1] [i_25]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_27])) ? (((/* implicit */unsigned int) -462643539)) : (4294967295U)));
        var_50 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)34225)) != (((/* implicit */int) (unsigned short)65535))));
    }
}
