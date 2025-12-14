/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193749
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((4037803574283580211LL) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((var_2), ((signed char)-1)))))));
        var_16 = ((/* implicit */short) var_9);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_14) : (((((/* implicit */_Bool) (short)-22461)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_1]))))));
        var_18 += ((/* implicit */unsigned long long int) ((((2151206952U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))) ? (arr_4 [i_1]) : (((/* implicit */int) arr_2 [10]))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((long long int) var_5)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2 - 1])) % (((/* implicit */int) arr_2 [i_2]))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned short i_4 = 4; i_4 < 17; i_4 += 3) 
            {
                {
                    var_20 |= ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (short i_6 = 4; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_5 + 1] [i_4] [i_3] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_2]))));
                                arr_20 [i_2 + 1] [i_4 - 1] [i_2] [i_5] [i_6 - 1] [i_4 - 1] [i_6] = (!(((/* implicit */_Bool) ((arr_11 [i_2 - 2] [i_3]) - (2147483647)))));
                                var_21 ^= ((/* implicit */long long int) ((signed char) var_3));
                                arr_21 [i_6] [i_3] [i_2] [i_6] [i_6] = ((/* implicit */short) arr_17 [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_27 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(arr_24 [i_2])));
                                var_22 = (short)-22462;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)16238)) ? (((/* implicit */int) (short)22460)) : (((/* implicit */int) arr_0 [i_2]))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) arr_28 [i_9] [i_9]);
        var_25 *= ((/* implicit */short) (_Bool)0);
        var_26 = ((/* implicit */int) arr_1 [i_9]);
    }
    for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 20; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 23; i_12 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                        arr_40 [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (short)28937))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (2147483635)))))))) : (max((max((2037324737700130185ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_32 [i_10] [i_11 + 4] [i_12 - 1]))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_38 [i_10] [i_10])), (((((/* implicit */_Bool) (short)18541)) ? (((/* implicit */int) arr_35 [i_10] [i_11] [i_12])) : (((/* implicit */int) arr_35 [i_10] [i_11 - 1] [i_12])))))) << (((/* implicit */int) ((9800229366129450263ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) >= (var_8))))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 21; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_46 [i_10] [i_10] [i_11 - 2] [i_12] [i_12] [i_14] [i_10]), (((/* implicit */long long int) (_Bool)1))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), ((short)-22446))))))))));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((((/* implicit */int) (short)22431)) << (((5752237190796624811LL) - (5752237190796624804LL))))) : ((+(((/* implicit */int) arr_35 [(short)16] [i_11] [i_15]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    {
                        arr_56 [i_18] [i_18] [i_10] [i_10] [i_16] [i_10] = ((/* implicit */signed char) (-(260046848)));
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_31 *= ((/* implicit */int) (!(arr_36 [i_17 - 1])));
                            arr_60 [i_10] [i_19] [i_10] [i_18] [i_18] = ((short) arr_57 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 - 2]);
                            arr_61 [i_19] [i_10] [i_17] [i_10] [i_10] = ((/* implicit */unsigned char) var_15);
                        }
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_10] [i_17 + 1])) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) arr_31 [i_10] [i_16]))));
                        /* LoopSeq 4 */
                        for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            arr_64 [i_10] [i_16] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_10] [i_16])) ? (((/* implicit */int) (unsigned short)12)) : ((~(((/* implicit */int) (short)22458))))));
                            var_33 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (18446744073709551615ULL) : (13515383518158372235ULL))))));
                            var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_41 [i_20] [i_18] [i_17] [i_17] [(signed char)20] [i_10])));
                        }
                        for (short i_21 = 0; i_21 < 24; i_21 += 3) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) arr_36 [i_17]))))) : (((((/* implicit */_Bool) arr_50 [i_17] [i_17])) ? (arr_43 [i_10] [i_18] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                            var_36 -= ((/* implicit */long long int) ((((/* implicit */int) (short)-32754)) / (arr_51 [i_17] [i_17] [i_17] [i_17])));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((unsigned long long int) ((arr_55 [4ULL] [i_16] [i_16] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22451))) : (5861986056218798288ULL)))))));
                            var_38 = ((/* implicit */int) ((unsigned long long int) arr_58 [i_10] [i_17 - 2] [i_17] [(unsigned char)23] [i_17 + 1] [i_17 - 2]));
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((arr_45 [i_17 - 2] [12U] [i_17 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_17] [i_21]))))))));
                        }
                        for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned char) ((-2396827089198085574LL) <= (((/* implicit */long long int) arr_51 [i_10] [i_10] [i_17 - 2] [i_10]))));
                            arr_69 [i_10] [(unsigned char)18] [i_17 - 1] [i_10] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (4352838820756793891ULL) : (11891189826996071624ULL)));
                            arr_70 [i_10] [i_16] [i_17] [i_10] [i_22] [i_18] [i_16] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)0)))));
                            var_41 -= ((arr_66 [i_17 + 1] [i_17]) + (arr_66 [i_17 - 2] [i_17]));
                        }
                        for (unsigned int i_23 = 1; i_23 < 23; i_23 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34819))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_34 [(short)3] [i_16] [i_16])) ? (((/* implicit */int) arr_68 [i_10] [i_10] [i_17 - 1] [i_18] [i_23])) : (((/* implicit */int) (unsigned short)42020))))));
                            var_43 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)53))))) * (((/* implicit */int) arr_35 [i_10] [i_23 + 1] [i_17 - 2]))));
                            var_44 = ((-9223372036854775804LL) & (((/* implicit */long long int) ((var_14) ^ (((/* implicit */int) (unsigned char)93))))));
                        }
                    }
                } 
            } 
            var_45 = ((/* implicit */long long int) var_13);
            var_46 = ((/* implicit */unsigned long long int) ((int) (~(var_12))));
            /* LoopNest 2 */
            for (unsigned char i_24 = 2; i_24 < 23; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    {
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [(short)20] [(short)20])) ? (((/* implicit */unsigned long long int) arr_30 [i_10] [(unsigned char)20])) : (var_7)));
                        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_10] [i_16] [i_24] [i_10] [i_24 - 1] [i_25])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_26 = 0; i_26 < 24; i_26 += 3) 
        {
            for (short i_27 = 0; i_27 < 24; i_27 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_28 = 1; i_28 < 23; i_28 += 4) 
                    {
                        arr_87 [i_10] [i_10] [i_27] [i_28] = ((/* implicit */short) min((((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_68 [i_10] [i_10] [i_27] [i_10] [i_28]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)12)))) : (((/* implicit */int) var_3))))));
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) min((((((/* implicit */_Bool) max(((short)-22431), (((/* implicit */short) (unsigned char)117))))) ? (-9223372036854775804LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)81))))))), ((-(-614632824629349292LL))))))));
                        var_50 = var_11;
                        arr_88 [i_10] [(unsigned char)15] [i_28] [i_28] [i_27] [i_10] = ((/* implicit */signed char) arr_63 [i_10] [i_10] [i_10] [(short)10] [(signed char)12]);
                        var_51 += ((/* implicit */int) arr_55 [i_26] [i_27] [i_26] [i_10]);
                    }
                    /* LoopNest 2 */
                    for (signed char i_29 = 0; i_29 < 24; i_29 += 4) 
                    {
                        for (unsigned int i_30 = 0; i_30 < 24; i_30 += 4) 
                        {
                            {
                                var_52 = ((/* implicit */int) (-(arr_57 [i_30] [(signed char)17] [i_27] [i_26] [10ULL])));
                                var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((614632824629349312LL), (((/* implicit */long long int) (unsigned char)69))))) ? (((var_12) >> (((arr_65 [i_10] [i_26] [i_27]) - (3335376553594697612LL))))) : (((/* implicit */unsigned long long int) var_11))))) ? (min((arr_86 [i_10] [i_10] [(signed char)6] [i_10]), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_68 [i_10] [i_10] [i_27] [i_29] [i_30])), ((short)-30614)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_78 [i_10] [i_26])) : (((/* implicit */int) arr_78 [i_29] [i_30])))))));
                                arr_93 [i_10] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_27])) ? (arr_80 [i_26] [i_27] [i_27] [i_30]) : (((/* implicit */unsigned long long int) max((-2147483646), (((/* implicit */int) (unsigned short)42844))))))));
                                arr_94 [(short)7] [i_26] [i_10] [i_29] = ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-22431))))) ^ (((((/* implicit */int) (signed char)115)) << (0ULL)))))));
                            }
                        } 
                    } 
                    arr_95 [i_10] [(signed char)6] [i_27] = ((/* implicit */signed char) var_14);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_31 = 3; i_31 < 23; i_31 += 4) 
        {
            for (signed char i_32 = 4; i_32 < 23; i_32 += 3) 
            {
                {
                    arr_100 [(signed char)3] [i_10] [i_10] = ((/* implicit */signed char) min((((long long int) min((-2147483635), (((/* implicit */int) (short)32758))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)95))))) ? (arr_92 [i_10] [i_10] [i_10] [i_10] [(signed char)9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)30614)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (short)-25367)))))))));
                    arr_101 [i_10] [i_10] [i_32] [i_32] = max((1636486493U), (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)4), (((/* implicit */unsigned short) (_Bool)1))))) != ((+(((/* implicit */int) (unsigned char)93))))))));
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10648))) >= (3193152616630098472ULL)));
                    var_55 = ((/* implicit */signed char) var_1);
                }
            } 
        } 
        arr_102 [9LL] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
    }
}
