/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193429
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((164128834), (((/* implicit */int) (unsigned short)65535)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_7 [i_1] [i_1 + 2] [i_1 + 2] = ((/* implicit */int) arr_5 [i_1]);
            arr_8 [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) arr_3 [i_2] [i_1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (arr_4 [i_1 + 1] [i_1 + 1])))));
            arr_9 [i_2] [i_2] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 + 2]))));
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_3 [i_1 + 1] [i_1]))));
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) arr_3 [i_3] [i_1]);
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_3])) : (((((/* implicit */_Bool) arr_11 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))))))));
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_21 [i_6] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_20 [i_1] [i_1] [i_1] [i_1 + 2] [i_1]) != (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])))))));
                            arr_22 [i_1 - 1] [i_4] [i_5] [i_6] [i_6] [i_7] [i_1 - 1] = ((/* implicit */unsigned long long int) ((arr_12 [i_7] [i_6]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_16 &= ((/* implicit */unsigned short) arr_15 [i_1 - 1] [i_1] [i_1 + 1] [i_1]);
                            arr_26 [i_1] [i_6] [i_1] [(unsigned char)1] [i_1] = ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) arr_17 [i_1 + 1] [i_4] [i_4] [i_1 + 1]))))) - ((-(var_6))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_1 + 1])) ? ((+(arr_11 [i_1 + 2] [i_4]))) : (((/* implicit */long long int) arr_20 [5LL] [4U] [i_5] [i_1 + 2] [i_1 + 2]))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_7))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                        {
                            arr_30 [i_1] [i_4] [i_5] [i_5] [i_6] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3428262541097890838LL)))))));
                            var_19 = ((/* implicit */unsigned int) (!(arr_6 [(signed char)5])));
                            arr_31 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
                        }
                        var_20 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1 + 1]);
                    }
                } 
            } 
            arr_32 [i_1 + 2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) var_3)) ? (-5417538199838305442LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18301))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        }
        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */int) (short)27016)) : (((/* implicit */int) (short)16954))))));
        var_22 = ((/* implicit */unsigned long long int) ((arr_4 [i_1 + 2] [i_1 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1 + 1])))));
        var_23 = ((/* implicit */signed char) var_6);
    }
    for (unsigned char i_10 = 1; i_10 < 8; i_10 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 7; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) arr_2 [i_10]);
                            arr_46 [i_10 - 1] [i_11] [i_13 + 3] [i_11] [i_10] [i_13 + 3] [i_10] = ((/* implicit */signed char) ((((arr_39 [i_10] [i_10]) != (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) arr_24 [2ULL] [i_11] [i_12] [i_11] [i_14])))) : ((~(((/* implicit */int) arr_17 [i_10] [i_11] [i_11] [i_13]))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) arr_24 [i_14] [i_11] [i_11] [i_11] [i_10])) : (((/* implicit */int) arr_37 [i_11])))) << (((((/* implicit */int) var_2)) - (30196))))))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((~(((/* implicit */int) arr_14 [i_13] [i_10] [i_10])))) * (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_18 [i_13] [i_12] [i_10 - 1] [i_10 - 1]))))))) >= (min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10 - 1] [i_10] [i_10 - 1]))) ^ (-5027214686681305136LL))), (((/* implicit */long long int) arr_6 [i_10])))))))));
                    }
                } 
            } 
        } 
        arr_47 [i_10] = arr_42 [i_10] [i_10] [i_10] [i_10];
    }
    /* LoopNest 2 */
    for (short i_15 = 2; i_15 < 10; i_15 += 3) 
    {
        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            {
                arr_53 [i_15] [i_15] [i_15 + 1] = ((/* implicit */long long int) arr_1 [i_16]);
                /* LoopSeq 2 */
                for (unsigned char i_17 = 1; i_17 < 10; i_17 += 1) 
                {
                    arr_56 [i_15 - 1] [i_17] [i_17 + 1] = ((/* implicit */long long int) var_0);
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 3; i_18 < 8; i_18 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 3; i_19 < 8; i_19 += 1) 
                        {
                            arr_62 [i_17] [i_17] [i_17 + 1] [i_17] [i_17 + 1] [i_17] = ((/* implicit */signed char) ((arr_50 [i_15]) >= (((/* implicit */unsigned long long int) (~(-7103448641062737857LL))))));
                            arr_63 [i_15] [i_17] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_61 [i_19 - 1] [i_17] [i_17] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15]))) : (3057769165825552812ULL))), (((/* implicit */unsigned long long int) arr_2 [i_15])))), (((/* implicit */unsigned long long int) arr_1 [i_16]))));
                        }
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_17] [i_17] [i_16] [i_15])) ? (((((/* implicit */_Bool) arr_58 [i_15] [i_16] [i_17 + 1] [i_18] [i_15 + 1] [i_15])) ? ((-(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) (unsigned char)215)))))) : (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)2)), (arr_61 [i_17] [i_17] [i_17] [i_17])))) : (((((/* implicit */_Bool) arr_49 [i_16])) ? (((/* implicit */int) arr_52 [i_16] [i_17] [i_18])) : (((/* implicit */int) (short)-17428))))))));
                        var_28 = var_3;
                    }
                    for (unsigned short i_20 = 3; i_20 < 8; i_20 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            var_29 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)0)), ((~(3928060800992767627LL)))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(7293270837216285422LL))), ((-(1858220885046717259LL)))))) ? (((((/* implicit */_Bool) -105702171)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-9LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_61 [(unsigned char)2] [i_17] [i_21] [i_17]))))), (max((arr_51 [i_15] [i_15] [i_15]), (((/* implicit */unsigned char) arr_57 [i_15] [i_16] [i_21] [i_20 + 2])))))))))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_4)))), (((((/* implicit */_Bool) arr_66 [i_21] [i_15])) ? (arr_64 [i_15 - 1] [i_21] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_17] [i_16] [i_17 - 1]))))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_15] [i_16] [i_21] [i_21])) ? (((/* implicit */int) arr_54 [i_15 - 2] [i_15 - 2] [i_15 - 2])) : (((/* implicit */int) arr_66 [i_20] [i_17])))))))))))));
                            var_32 = ((/* implicit */long long int) min((((/* implicit */int) arr_55 [i_15] [i_17])), (((((/* implicit */_Bool) arr_48 [i_15 - 2] [i_21])) ? (arr_48 [i_15 + 1] [i_20]) : (arr_48 [i_15 - 2] [i_16])))));
                        }
                        arr_71 [i_17] [i_17] [i_15] [i_15] [i_15] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_16] [i_17] [i_16])) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_15 - 2] [i_16] [i_16])) >= (((/* implicit */int) (short)25081))))), (((3013766167592364654LL) + (var_6))))))));
                    }
                    var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)30130)) ? (((/* implicit */unsigned int) arr_48 [i_17] [i_17 + 1])) : (arr_59 [i_17 - 1] [i_15 + 1] [i_17 - 1] [i_15] [i_15 + 1] [i_15]))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_55 [i_17] [i_17])))))));
                }
                /* vectorizable */
                for (long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    var_34 = ((/* implicit */long long int) arr_52 [i_15 - 1] [i_16] [i_22]);
                    /* LoopSeq 2 */
                    for (short i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        var_35 ^= ((/* implicit */unsigned char) var_1);
                        var_36 = ((/* implicit */short) arr_72 [i_23] [i_22] [i_23] [i_23]);
                    }
                    for (unsigned short i_24 = 3; i_24 < 10; i_24 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) arr_51 [i_16] [i_16] [i_16]);
                        arr_81 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_68 [i_24 - 3] [i_22] [i_22] [i_16] [i_15])) ? (((/* implicit */int) arr_67 [i_15] [i_22])) : (((/* implicit */int) arr_80 [i_15] [i_15]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 1) /* same iter space */
                    {
                        arr_84 [i_15] [i_15] [i_15] [i_15] [i_22] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_80 [i_15 + 1] [i_15 - 1])) ? (arr_64 [i_15 - 1] [i_22] [i_15 - 2]) : (arr_64 [i_15 - 2] [i_22] [i_15 + 1])));
                        arr_85 [i_22] [i_22] [i_22] [(signed char)6] [i_22] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16] [i_15] [i_16] [i_15]))) * (var_10))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
                        arr_86 [i_15 - 1] [i_16] [i_15 - 1] [i_22] [i_25] [i_15 - 1] = ((/* implicit */unsigned short) arr_80 [i_15 - 2] [i_16]);
                    }
                    for (unsigned short i_26 = 0; i_26 < 11; i_26 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_27 = 2; i_27 < 9; i_27 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned char) arr_60 [i_16] [i_16] [i_16] [i_27 - 2] [i_27 + 2] [i_15]);
                            arr_92 [i_27 + 1] [i_15] [i_22] [i_16] [i_22] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_15] [i_16] [(unsigned char)0] [i_26]))) == (4294967295U)))) - (((((/* implicit */_Bool) arr_68 [i_15 - 1] [i_16] [i_22] [i_26] [i_27])) ? (((/* implicit */int) arr_83 [i_15] [i_15] [i_15] [i_15 - 2])) : (((/* implicit */int) (short)-18718))))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-123))))) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [7U] [i_16] [7U] [i_16] [i_16] [i_16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_15] [i_15] [i_22] [i_22])))));
                        }
                        arr_93 [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)91))))) ? (arr_69 [i_15] [i_16] [i_22] [i_26] [i_22] [i_15 - 1]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_26])))))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)126))) & (-5467325933572354901LL)));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_28 = 4; i_28 < 9; i_28 += 1) 
                    {
                        for (unsigned char i_29 = 2; i_29 < 9; i_29 += 4) 
                        {
                            {
                                arr_99 [i_15] [i_22] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned long long int) arr_87 [i_15 - 1] [i_15 - 1] [i_22] [i_15 - 1])) : (var_10)))));
                                var_41 ^= ((/* implicit */short) (unsigned char)255);
                            }
                        } 
                    } 
                }
                var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_0))));
                var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)105)), ((unsigned char)90)))) ? (((((/* implicit */_Bool) 8334452416958492222LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12440))) : (126170055070454330LL))) : (((/* implicit */long long int) ((arr_95 [i_15]) ? (((/* implicit */int) arr_61 [i_15] [i_15 + 1] [(unsigned short)4] [(unsigned short)4])) : (((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_15 - 1] [i_15 + 1])) ? (arr_48 [i_15 - 2] [i_15 + 1]) : (arr_48 [i_15 + 1] [i_15 - 1])))))))));
            }
        } 
    } 
}
