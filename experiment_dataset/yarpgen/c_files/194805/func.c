/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194805
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
    var_16 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (min((((/* implicit */long long int) (signed char)-106)), ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)56054))))) ? (max((((/* implicit */int) (unsigned short)56059)), (971513362))) : (((/* implicit */int) (signed char)-121))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) var_0))))) | (var_4)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) -1088632859)) && (arr_7 [i_1]))) ? (((/* implicit */int) (signed char)-126)) : (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_7 [i_1]))))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)107), (((/* implicit */unsigned char) (_Bool)1))))))))) < (arr_9 [i_0] [i_0] [i_2] [i_2 - 1])));
                    arr_11 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_20 = ((/* implicit */unsigned long long int) var_1);
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_8))));
                    arr_12 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) & (arr_10 [i_1])))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                }
                for (int i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (signed char)109)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3]))))))))));
                        var_22 = ((/* implicit */unsigned long long int) (+(((min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_14 [i_1]))) + (((2675598526U) - (((/* implicit */unsigned int) 1085653810))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_3 + 4] [i_1]))));
                        arr_22 [i_0] [i_5] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((18263424448919518463ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))))));
                    }
                    var_23 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_0])) ? (-1715503276) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_1])))), (((/* implicit */int) arr_1 [i_0] [i_3 - 1]))))));
                    arr_23 [i_1] [i_1] [i_3 + 3] = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned char)132)));
                }
                var_24 -= ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0]);
                var_25 = ((/* implicit */long long int) 9643761872727300909ULL);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 2; i_7 < 9; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (arr_9 [i_8] [i_8] [i_8] [i_7 - 1]))), (((/* implicit */unsigned long long int) ((arr_20 [i_6] [i_6] [i_6] [16]) ? (((/* implicit */int) (unsigned short)56054)) : (((/* implicit */int) var_14))))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_20 [i_7] [i_7 - 2] [i_7 - 2] [10ULL])), (var_7))))))));
                            var_27 = ((/* implicit */_Bool) min((((/* implicit */short) min((((/* implicit */unsigned char) max(((signed char)95), (((/* implicit */signed char) (_Bool)1))))), (var_15)))), (arr_2 [i_8] [i_8])));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_7 - 2] [i_6] [i_7 - 2])) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_32 [i_6] [i_7])) ? (((/* implicit */long long int) 1715503275)) : (-7924745992847800748LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_6] [i_7])) + (((/* implicit */int) (signed char)-68))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (max((arr_14 [i_6]), (((/* implicit */unsigned int) arr_7 [i_6])))))) : (arr_14 [i_6])));
                        }
                    } 
                } 
                var_29 += ((/* implicit */signed char) arr_4 [i_6] [i_7] [i_6]);
                var_30 = ((/* implicit */short) ((((((arr_32 [i_6] [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) < (2871024392U))))))) < (((/* implicit */long long int) max(((-(4294443008U))), (((((/* implicit */_Bool) 1721984435)) ? (var_7) : (((/* implicit */unsigned int) -1715503285)))))))));
            }
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 7; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        {
                            arr_45 [i_6] [i_6] [i_11] [i_6] [i_11] [i_6] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_7 + 1] [i_11] [i_12 + 2] [i_12 + 2])) || (((/* implicit */_Bool) (unsigned short)53807))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(2009310724U)))) ? (18414648013760230108ULL) : (((/* implicit */unsigned long long int) 3665670760U))));
                        }
                    } 
                } 
                var_32 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-84)) + (2147483647))) << (((((/* implicit */int) (unsigned short)56059)) - (56059)))));
                /* LoopSeq 3 */
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_48 [i_6] [i_6] [i_11] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_15))));
                    var_33 = ((/* implicit */short) ((arr_20 [i_6] [i_6] [i_6] [i_6]) ? (((15595003533358907075ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)64)) % (var_8))))));
                }
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_6] [i_7 + 1] [i_11])) ? (arr_34 [i_6] [i_7 + 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */int) arr_43 [i_7 - 1] [i_7 + 1] [i_7 - 2] [(signed char)4] [i_11] [i_11] [i_7 + 1])) & (((/* implicit */int) arr_43 [i_7 - 1] [i_7 + 1] [i_7 - 2] [(signed char)2] [(signed char)2] [(signed char)2] [i_7])))))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1715503281)) ? (((((/* implicit */long long int) 1715503293)) | ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_7))));
                }
                for (int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    var_37 &= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60)))))));
                    var_38 ^= ((/* implicit */unsigned long long int) var_4);
                }
                /* LoopSeq 2 */
                for (short i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    arr_57 [i_6] [i_6] [i_6] [i_11] [i_11] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1570914138U)) ? (((/* implicit */int) (unsigned char)186)) : (-1715503276))) > (((/* implicit */int) arr_2 [i_11] [i_11]))));
                    arr_58 [i_6] [i_6] [i_11] [i_17] = ((/* implicit */unsigned short) var_1);
                    arr_59 [i_17] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */int) arr_55 [i_6] [i_7 - 2] [i_6])) + (((/* implicit */int) arr_49 [i_6] [i_6] [i_11] [i_6] [i_6])))) == (((((/* implicit */_Bool) (signed char)-83)) ? (-182989487) : (((/* implicit */int) (unsigned short)53809))))));
                    arr_60 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_6] [i_6] [i_6] [i_11] [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_6] [i_7] [i_6] [i_7] [i_6]))))) : (((/* implicit */int) (signed char)60))));
                    arr_61 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8936118099148279516LL)) ? (-2938979692130244867LL) : (((/* implicit */long long int) -1715503282))));
                }
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    arr_64 [i_11] [i_11] [i_11] [i_6] = ((/* implicit */short) var_0);
                    arr_65 [i_6] [i_6] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)22949)) ? (var_11) : (((/* implicit */unsigned int) arr_3 [i_18])))) << ((((+(((/* implicit */int) (signed char)60)))) - (33)))));
                    arr_66 [i_6] = ((/* implicit */unsigned int) arr_28 [i_6] [i_11] [i_6]);
                    var_39 -= ((/* implicit */signed char) arr_41 [i_7 + 1] [i_11]);
                    arr_67 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                }
            }
            for (int i_19 = 1; i_19 < 9; i_19 += 3) 
            {
                var_40 += ((/* implicit */unsigned int) max((-5358621506215401402LL), (((/* implicit */long long int) 2629258398U))));
                /* LoopSeq 1 */
                for (unsigned short i_20 = 2; i_20 < 8; i_20 += 3) 
                {
                    arr_75 [i_6] [i_6] [i_6] [i_6] = (+(max((((/* implicit */unsigned int) -182989488)), (((((/* implicit */_Bool) 741740140)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_19 [i_6] [i_6] [i_6] [i_6]))))));
                    arr_76 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) (signed char)60))));
                    var_41 = ((/* implicit */int) arr_33 [i_6] [i_6] [i_7 + 1] [i_6] [i_20 - 1]);
                    var_42 = ((/* implicit */long long int) min((((((/* implicit */int) arr_49 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])) != (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_6] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) arr_73 [i_20] [i_6] [i_6] [i_6]))))))), (((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (signed char)-1))))));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62439)) % (((/* implicit */int) ((((/* implicit */_Bool) -1319853256)) && (((/* implicit */_Bool) arr_46 [i_6] [i_7] [i_19] [i_20])))))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11750)) && (((/* implicit */_Bool) (signed char)-1))))))));
                }
            }
            var_44 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
            arr_77 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)112)), ((unsigned short)11713)))) != (arr_52 [i_6] [i_6] [i_7] [i_7])))), ((+(964927630U)))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_23 = 3; i_23 < 7; i_23 += 3) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 3) 
                        {
                            {
                                var_45 |= ((/* implicit */unsigned long long int) min((arr_34 [i_6] [i_21] [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) 1715503254)) && (((/* implicit */_Bool) (unsigned char)254)))))));
                                var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((arr_29 [i_6] [i_6] [i_23] [i_24]) ^ (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_4 [i_6] [i_23 + 2] [i_22])) * (((/* implicit */int) var_15))))))))))));
                                arr_87 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_21] [i_21] [i_21])) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                                arr_88 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) arr_85 [i_24] [i_21] [i_6] [i_21] [i_23 - 1] [i_23 + 3] [i_21]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 0; i_25 < 10; i_25 += 4) 
                    {
                        var_47 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) 14492091732646565814ULL)) ? (((/* implicit */int) (short)26284)) : (-1319853256))), ((+(((/* implicit */int) (unsigned char)154)))))), (min((((/* implicit */int) ((4194303U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))), (2147483647)))));
                        var_48 = (~(((/* implicit */int) arr_92 [i_6] [i_6] [i_6] [i_25])));
                        var_49 = ((/* implicit */int) (((-(var_11))) >> (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) arr_55 [i_21] [i_22] [i_21]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_26 = 0; i_26 < 10; i_26 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1255356156)) ? (((/* implicit */int) arr_68 [i_6])) : (((/* implicit */int) arr_68 [i_6]))));
                            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2221730886896971379LL)) ? (-817397383556673078LL) : (-6158678513885489636LL)));
                            var_52 = ((/* implicit */int) ((7265717361434515109ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26284)))));
                            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)138)) & (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (int i_27 = 0; i_27 < 10; i_27 += 1) /* same iter space */
                        {
                            arr_98 [i_6] [i_6] [i_6] [i_27] = ((((((/* implicit */int) (signed char)121)) - (((/* implicit */int) (unsigned char)109)))) / (((818826233) ^ (((/* implicit */int) (short)-5329)))));
                            arr_99 [i_6] [i_6] [i_22] [i_6] [i_6] = ((/* implicit */unsigned char) ((4194303U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6])))));
                        }
                        var_54 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)48243)) ^ (((/* implicit */int) arr_72 [i_21]))))));
                    }
                    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        var_55 = ((/* implicit */int) min((((/* implicit */short) (unsigned char)143)), ((short)15360)));
                        arr_102 [i_6] [i_6] [i_22] [i_28] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (_Bool)1)), (2161727821137838080LL))), (((/* implicit */long long int) (_Bool)1))));
                        arr_103 [i_22] [i_6] [i_6] [i_6] [i_21] [i_6] = ((/* implicit */signed char) (unsigned short)30052);
                        arr_104 [i_6] [i_6] [i_6] [i_28] [i_28] [i_28] = (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_72 [i_6])), (arr_74 [i_6] [i_6] [i_6] [i_6] [i_22] [i_6])))));
                        var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) (short)-9502))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 10; i_29 += 1) 
                    {
                        for (unsigned int i_30 = 0; i_30 < 10; i_30 += 3) 
                        {
                            {
                                var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) (+(min((((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_111 [i_21] [i_29] [i_21] [i_21] [i_21])))), (((/* implicit */int) (_Bool)1)))))))));
                                var_58 = ((/* implicit */int) max((var_58), (((((/* implicit */_Bool) (unsigned short)8736)) ? (((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned short)64785)) : (2147483647))))) : (-1255356156)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_59 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)134))));
    }
}
