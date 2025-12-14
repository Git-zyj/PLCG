/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25876
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
    var_19 = ((/* implicit */unsigned char) -4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1])))))) != ((((+(288230375077969920ULL))) << (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_7 [i_0])))))))));
                        var_21 -= ((/* implicit */unsigned int) max(((unsigned char)1), (arr_0 [i_3] [i_1])));
                        arr_11 [i_0 - 1] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) 4294967272U);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_22 [i_4] [i_4] [i_7] [i_7] [i_4] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((signed char) max(((short)-9554), (((/* implicit */short) arr_0 [i_0] [i_5]))))));
                                var_22 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)-12)), (4294967276U)));
                                var_23 = ((/* implicit */unsigned long long int) (signed char)-42);
                                var_24 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) 4294967276U)) ? (291642324) : (((/* implicit */int) (unsigned char)12)))))) <= (((/* implicit */int) ((((/* implicit */_Bool) 3975747304U)) && (((/* implicit */_Bool) (short)8815)))))));
                                arr_23 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 789885925))));
                            }
                        } 
                    } 
                    arr_24 [i_4] = ((/* implicit */int) ((unsigned char) max((((/* implicit */int) (unsigned char)55)), ((~(((/* implicit */int) var_12)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8] [i_8])))))) >= (arr_1 [i_10])));
                        arr_34 [i_8] [i_8] |= ((/* implicit */unsigned char) ((747464595950228754ULL) >> (((/* implicit */int) (signed char)23))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 1; i_11 < 17; i_11 += 3) 
                        {
                            arr_39 [i_9] [i_9] [i_9] [i_9] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) max((3975747299U), (((/* implicit */unsigned int) -1305249038))))) ? (((/* implicit */unsigned long long int) 4294967272U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_8] [i_10]))) % (((((/* implicit */_Bool) 3727804641U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 0U))))))));
                            var_26 = ((/* implicit */unsigned int) (unsigned char)16);
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) -1305249038)) < (17994906380788868145ULL))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)31))))) <= (max((2238312289944912706ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) : (((max((arr_9 [i_0] [i_8] [i_9] [i_9] [i_10] [i_12]), (((/* implicit */int) arr_33 [i_12] [i_0] [i_8] [i_0])))) >> (((((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) var_17)))) - (69)))))));
                            var_28 = ((((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (-1305249021) : ((~(((/* implicit */int) (unsigned char)171)))))) - (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)8] [i_8] [i_12]))) < (2810288208U)))) != (max((((/* implicit */int) (signed char)-111)), (var_4)))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)41))))) ? (((((/* implicit */_Bool) arr_18 [i_0])) ? (-1324875767) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_0 [i_0 + 4] [i_13]))));
                            var_30 = ((/* implicit */unsigned long long int) var_10);
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    {
                        var_31 = ((int) (unsigned char)38);
                        arr_48 [i_15] [i_14] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) -2046057973)) ? (((/* implicit */unsigned int) -789885926)) : (4121286646U))) >> (((((/* implicit */int) (unsigned char)236)) - (210))))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned char)253))) ? (((/* implicit */unsigned int) 1324875765)) : (arr_40 [i_0] [i_8] [i_8] [i_15])));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                {
                    arr_55 [i_0] [i_16] [i_17] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_45 [i_0] [i_17])) ? (((/* implicit */int) arr_7 [i_0])) : (2147483646))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))) ? (((/* implicit */unsigned int) ((arr_41 [i_17] [i_17] [i_17] [i_17]) ^ (((/* implicit */int) (signed char)-92))))) : (max((((unsigned int) var_11)), (3975747319U)))));
                    var_33 = ((/* implicit */unsigned char) var_5);
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1324875767)), (1612665106538449250ULL)))) ? (max((((/* implicit */int) ((signed char) arr_1 [i_0]))), (((((/* implicit */_Bool) arr_15 [i_0] [i_16] [i_17] [i_16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_0])))))) : (((/* implicit */int) max((min((((/* implicit */unsigned char) (signed char)-97)), ((unsigned char)167))), (((/* implicit */unsigned char) ((1374919948) != (var_4))))))))))));
                }
            } 
        } 
    }
    for (int i_18 = 0; i_18 < 18; i_18 += 2) 
    {
        var_35 ^= ((/* implicit */unsigned char) (-((~(1987779591U)))));
        /* LoopNest 2 */
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
            {
                {
                    var_36 = ((1305249020) >> (((1186375767) - (1186375760))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_30 [i_18]) == (arr_30 [i_20]))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) + (arr_30 [i_19])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) 
    {
        arr_64 [i_21] [i_21] = ((/* implicit */signed char) (unsigned char)96);
        arr_65 [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((939524096U) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) -789885923)) ? (164463826) : (((/* implicit */int) (unsigned char)168)))))))) || (((/* implicit */_Bool) (unsigned char)0))));
        /* LoopNest 2 */
        for (short i_22 = 1; i_22 < 9; i_22 += 3) 
        {
            for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                {
                    arr_72 [i_21] [i_22] [i_21] [i_23] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) (unsigned char)197)), (1324875750))));
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_38 = max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) > ((~(2900806508002665807ULL)))))), (((unsigned int) 1540276869U)));
                        var_39 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) & (((((/* implicit */_Bool) arr_7 [i_22])) ? (((/* implicit */unsigned int) var_4)) : (1540276869U))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_21] [i_22])) - (((/* implicit */int) (unsigned char)60))))) ? (((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (signed char)96)) : (arr_62 [i_21] [i_21]))) : (((/* implicit */int) arr_33 [i_21] [i_21] [i_21] [i_22])))))));
                    }
                    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        var_40 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) (short)-19201)) + (2147483647))) >> (((((/* implicit */int) min(((short)-30823), (((/* implicit */short) (signed char)-69))))) + (30834))))));
                        arr_78 [i_21] [i_21] [i_22] = ((/* implicit */unsigned int) (~((+(-1)))));
                        arr_79 [i_21] [i_22] [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-37))) && ((!(((/* implicit */_Bool) (signed char)9))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 3) 
                        {
                            {
                                arr_84 [i_21] [i_22] [i_23] [i_26] [i_22] = ((/* implicit */unsigned char) ((((unsigned int) arr_19 [i_23] [i_22 - 1] [i_22 + 1] [i_22])) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_77 [i_27])) ? (((((/* implicit */int) (unsigned char)250)) / (arr_14 [i_26]))) : (((/* implicit */int) ((unsigned char) 444582447))))))));
                                var_41 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_43 [i_22] [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22])) ? (((/* implicit */int) var_10)) : (arr_43 [i_22] [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22 - 1]))) | (((2147483647) | (((/* implicit */int) (signed char)20))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned char) (~(2147483640)));
                    var_43 = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        for (unsigned char i_29 = 0; i_29 < 11; i_29 += 2) 
        {
            {
                var_44 -= ((/* implicit */signed char) ((unsigned char) (unsigned short)48145));
                var_45 = ((/* implicit */signed char) 2900241832U);
                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)6869))))) : ((~((-(3355443199U)))))));
                /* LoopSeq 1 */
                for (signed char i_30 = 3; i_30 < 8; i_30 += 3) 
                {
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_31 [i_30 - 2] [i_30 + 3] [i_30] [i_30]))) ? (arr_29 [i_30 + 2] [i_30] [i_30] [i_30 - 3]) : (min((((((/* implicit */int) (unsigned char)7)) >> (((var_3) - (4067483641U))))), (((((/* implicit */int) (unsigned char)255)) << (((arr_87 [i_28] [i_29]) - (2384954000U)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_31 = 0; i_31 < 11; i_31 += 2) 
                    {
                        for (unsigned int i_32 = 0; i_32 < 11; i_32 += 3) 
                        {
                            {
                                arr_97 [i_28] [i_29] [i_28] [i_28] [i_28] [i_29] [i_32] = (~(((/* implicit */int) (unsigned char)250)));
                                arr_98 [i_28] [i_28] = ((/* implicit */signed char) ((((12213199914514674902ULL) != (((/* implicit */unsigned long long int) -1)))) ? (3355443200U) : (((/* implicit */unsigned int) ((-589179026) / (((/* implicit */int) arr_58 [i_30 - 3] [i_30 - 1])))))));
                                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (unsigned char)90))))) ? ((~(7459407705154922687ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_30 - 2] [i_30 + 2] [i_30 - 2])))));
                            }
                        } 
                    } 
                }
                var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_28] [i_29] [i_29] [i_28])), ((unsigned short)49985)))) ? (((int) arr_20 [i_28] [i_29] [i_29] [i_28] [i_28])) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) : (max((((arr_40 [i_28] [i_28] [i_29] [i_29]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_95 [i_29] [i_29] [i_29] [i_28] [i_28]))))), (((/* implicit */unsigned int) ((_Bool) (short)-1)))))));
            }
        } 
    } 
    var_50 |= ((/* implicit */int) (+(var_6)));
    var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) var_9))));
}
