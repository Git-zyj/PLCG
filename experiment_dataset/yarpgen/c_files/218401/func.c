/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218401
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
    var_18 += ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) var_14))))) ? ((~(((/* implicit */int) (unsigned short)30896)))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_12))))))) != ((~(var_4)))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)20819)))))))) ? (var_8) : (min((var_8), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)50738)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((var_0) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) var_14)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((var_16) >= (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? (((2183742972U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)57060)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), ((~(var_1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((((short) arr_8 [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1] [i_1 - 2])), (var_7)));
                            var_24 &= ((/* implicit */_Bool) var_1);
                            var_25 = ((/* implicit */unsigned char) var_7);
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (arr_0 [(unsigned short)4] [i_1 - 1])))) ? (((/* implicit */long long int) min((var_15), (((/* implicit */int) var_0))))) : (min((var_16), (((/* implicit */long long int) arr_2 [i_0] [i_5])))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), ((-(arr_3 [i_4]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((arr_3 [i_6]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20))))))));
                    arr_18 [0ULL] [0ULL] [i_6] &= ((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 4]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
                                arr_23 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */long long int) var_15);
                            }
                        } 
                    } 
                }
                for (long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_29 = ((signed char) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (var_6) : (((/* implicit */long long int) arr_6 [i_1] [i_1 - 4] [i_1 + 3]))));
                    var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2111224324U)));
                    var_31 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) : (min((((/* implicit */unsigned long long int) (unsigned char)57)), (arr_1 [i_9]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2070720281)) ? (var_15) : (arr_7 [i_0] [i_0] [i_1 - 3] [i_1] [i_9])))) ? (max((var_4), (((/* implicit */long long int) arr_21 [i_9] [(unsigned char)9] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (1369676212) : (((/* implicit */int) arr_13 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            {
                                var_32 = ((unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 2111224321U)) : (2305843009209499648ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_0])))));
                                var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [2U] [i_1] [i_9] [2U] [i_9])) && (((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                }
                for (long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1655905178)) ? (arr_22 [i_1] [3ULL] [i_1 - 3] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (var_1))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >> (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (arr_15 [i_13])))))));
                                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((_Bool) arr_27 [i_1 + 3] [(_Bool)0] [i_12] [i_13])) ? (arr_0 [2ULL] [i_1 - 3]) : ((~(min((var_16), (((/* implicit */long long int) var_12)))))))))));
                                var_37 = ((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_12] [i_13] [i_14]);
                            }
                        } 
                    } 
                }
                for (long long int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_38 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_26 [i_0] [i_0] [i_15] [i_16] [i_16] [i_0])) >> (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1 + 1] [i_15] [10LL] [i_0] [i_16])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_35 [i_17]))))));
                                var_39 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_0] [i_1 + 2])) ? (((/* implicit */int) var_12)) : (arr_16 [i_1 + 3] [i_0] [i_15]))));
                                var_40 -= ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_16] [i_16] [i_0]))))), (arr_29 [2ULL] [i_16 - 1] [i_16 - 1] [2ULL]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3491072229901499903ULL)) && (((/* implicit */_Bool) (short)-1059)))))));
                            }
                        } 
                    } 
                    arr_51 [i_0] [i_1] [(_Bool)1] |= ((/* implicit */long long int) (-(((min((((/* implicit */unsigned int) var_0)), (var_8))) << (((/* implicit */int) min((((/* implicit */unsigned short) arr_40 [i_0] [i_1] [i_15] [i_15])), (arr_32 [i_0] [i_0] [(signed char)6] [i_0] [(signed char)6] [(unsigned short)10]))))))));
                    var_41 = ((/* implicit */long long int) min((18ULL), (((/* implicit */unsigned long long int) (signed char)99))));
                    var_42 = ((/* implicit */_Bool) var_6);
                }
                /* LoopSeq 2 */
                for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_18]))))))), (max((((/* implicit */int) min((var_10), (var_13)))), ((-(704577152)))))));
                        var_44 -= ((unsigned int) var_11);
                        var_45 |= ((/* implicit */long long int) max((arr_5 [i_1 - 2] [i_1 - 1] [i_1]), (min((arr_5 [i_1 + 3] [i_1] [i_1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    }
                    for (unsigned char i_20 = 2; i_20 < 7; i_20 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61111))) : (var_4))) > (((/* implicit */long long int) ((/* implicit */int) var_13)))))) / ((~(arr_16 [i_0] [(unsigned char)6] [(_Bool)1]))))))));
                        var_47 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) var_11)) ? (11205430032024155054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))) : (max((((/* implicit */unsigned long long int) var_12)), (arr_12 [(short)8])))))) ? (((long long int) (~(0U)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1067)))));
                        var_48 = ((/* implicit */_Bool) var_5);
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (var_8)));
                    }
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        var_50 *= ((/* implicit */unsigned short) -704577152);
                        var_51 ^= arr_37 [(signed char)0];
                        /* LoopSeq 4 */
                        for (int i_22 = 0; i_22 < 11; i_22 += 3) 
                        {
                            var_52 -= ((/* implicit */unsigned int) var_15);
                            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) var_17))));
                            arr_67 [i_1] [i_0] [i_21] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) var_0)) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (var_16))))));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 3) 
                        {
                            arr_71 [i_23] [i_23] [i_0] [i_23] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_1 - 3] [i_1 + 1] [i_1 - 2])) && (((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 + 1] [i_1 - 2] [i_1 + 1])))))));
                            var_54 = ((/* implicit */int) arr_3 [i_1 + 2]);
                            var_55 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_13)))), ((((!(((/* implicit */_Bool) arr_15 [i_23])))) ? (((/* implicit */int) (short)-9613)) : ((-2147483647 - 1))))));
                        }
                        for (signed char i_24 = 1; i_24 < 7; i_24 += 3) /* same iter space */
                        {
                            arr_74 [i_0] [i_0] [i_18] [i_21] [i_24 + 4] = ((/* implicit */unsigned char) arr_6 [i_24] [i_1] [i_18]);
                            var_56 = ((/* implicit */signed char) arr_26 [i_0] [i_0] [i_1] [i_18] [i_21] [(_Bool)1]);
                        }
                        for (signed char i_25 = 1; i_25 < 7; i_25 += 3) /* same iter space */
                        {
                            var_57 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_18])) ? (max((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [1] [i_0] [(unsigned short)6] [i_1])), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20681))))), (((/* implicit */unsigned long long int) (+(arr_55 [i_0] [i_0] [i_0]))))));
                            var_58 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) (signed char)90))))) ? (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) arr_35 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)2016)), (var_11))))))), ((+(((unsigned int) var_13))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_26 = 0; i_26 < 11; i_26 += 3) 
                        {
                            var_59 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 5508410283953983324ULL)) && (((/* implicit */_Bool) (unsigned short)53409)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_70 [i_0] [(_Bool)1] [i_18] [i_0] [i_26])) / (((/* implicit */int) var_5))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) var_12))))), (((2701738851541682134LL) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                            var_60 = ((/* implicit */int) max((var_60), ((-(min(((-(((/* implicit */int) arr_65 [i_0] [9ULL] [i_18] [i_21] [i_26])))), (((/* implicit */int) ((((/* implicit */int) var_7)) < (var_14))))))))));
                            var_61 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((signed char) var_4))), (((((/* implicit */_Bool) 1286087243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)229)))))), (((/* implicit */int) min((arr_76 [i_0] [i_0] [i_0] [i_0] [i_1 - 1]), (arr_76 [i_0] [i_1] [(signed char)8] [i_0] [i_1 - 2]))))));
                            var_62 -= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_7 [5U] [i_1] [i_0] [i_1] [i_0])) : (arr_29 [(unsigned char)4] [(_Bool)1] [(unsigned char)6] [(unsigned char)4]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_33 [i_18])), (var_16)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((arr_7 [i_0] [i_0] [i_18] [i_21] [i_26]) - (((/* implicit */int) var_2)))) : (((/* implicit */int) var_12)))))));
                        }
                    }
                    var_63 = (!(((((/* implicit */_Bool) 12U)) || (((/* implicit */_Bool) 28U)))));
                }
                for (int i_27 = 0; i_27 < 11; i_27 += 3) 
                {
                    var_64 = ((/* implicit */long long int) ((signed char) arr_78 [i_1] [i_1]));
                    var_65 = ((/* implicit */_Bool) min((var_65), (((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_19 [(unsigned char)2]))))) < (((((/* implicit */int) arr_28 [i_0] [i_0] [i_1 - 4] [i_0] [i_0])) - (((/* implicit */int) ((((/* implicit */_Bool) 4294967261U)) && (((/* implicit */_Bool) 782462710)))))))))));
                    var_66 = min((((/* implicit */short) min(((!(((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_1] [i_27])))), (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_15))))))), ((short)-9613));
                    /* LoopSeq 4 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_67 = min((max((min((((/* implicit */unsigned long long int) arr_82 [i_27] [i_27] [i_27] [i_27])), (arr_81 [(_Bool)1] [i_1] [i_27]))), (((/* implicit */unsigned long long int) min(((unsigned char)108), (var_2)))))), (max((arr_10 [i_1 + 3]), (((/* implicit */unsigned long long int) var_6)))));
                        var_68 = ((/* implicit */unsigned char) var_7);
                        var_69 = ((/* implicit */unsigned int) var_5);
                        var_70 &= arr_41 [i_0] [(unsigned char)10] [i_1 - 4] [4] [i_28];
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                    {
                        var_71 &= ((/* implicit */unsigned char) max(((~(15448323372459864358ULL))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_61 [i_0] [i_27] [(unsigned char)10]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_30 = 2; i_30 < 7; i_30 += 3) 
                        {
                            var_72 = ((/* implicit */int) ((_Bool) (!(((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                            var_73 = ((/* implicit */short) min((var_73), (((/* implicit */short) var_14))));
                        }
                    }
                    for (unsigned int i_31 = 1; i_31 < 9; i_31 += 3) 
                    {
                        var_74 -= ((/* implicit */unsigned char) (-(((long long int) var_15))));
                        var_75 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_31] [i_0] [5ULL] [i_0] [i_0])) || (((/* implicit */_Bool) arr_81 [i_1] [i_27] [i_27]))))), (4294967270U))))));
                    }
                    /* vectorizable */
                    for (int i_32 = 3; i_32 < 8; i_32 += 3) 
                    {
                        var_76 = ((/* implicit */_Bool) var_2);
                        var_77 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10437220929383047590ULL)) ? (4278248226814668568LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))))) ? (((/* implicit */int) ((unsigned short) arr_36 [i_0] [i_1 - 1] [i_27]))) : (arr_58 [i_0] [i_1] [i_32] [i_0])));
                    }
                }
            }
        } 
    } 
}
