/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212649
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((arr_2 [i_1] [i_2]), (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) ((int) arr_4 [i_0] [(short)10] [i_0] [i_0]))) : (arr_0 [i_0 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (0ULL)))))))));
                    var_17 = ((/* implicit */_Bool) (+(arr_2 [i_1] [i_2])));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        var_18 = min((((/* implicit */long long int) (+(((((((/* implicit */int) (signed char)-113)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)248)) - (240)))))))), (min((((/* implicit */long long int) ((var_9) >> (((var_7) - (17876603493033988472ULL)))))), (-3249139474042175527LL))));
        arr_9 [0ULL] [i_3] = ((/* implicit */long long int) var_11);
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            arr_13 [i_4] [i_4] = ((/* implicit */short) ((16711593823981814108ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) (signed char)-9))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                arr_16 [i_4] [i_4 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5 - 2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4])))))) : (arr_8 [i_4 - 1] [i_4 + 2])));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 23; i_6 += 4) 
                {
                    arr_20 [i_6] [20] [i_5 - 1] [(unsigned char)21] [i_4] [(signed char)10] = ((/* implicit */unsigned int) (short)4);
                    var_19 *= ((/* implicit */signed char) var_12);
                }
            }
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-20)), (arr_14 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 + 1]))) : (((((/* implicit */_Bool) -5979803168038017135LL)) ? (arr_14 [(unsigned char)17]) : (arr_7 [(short)19])))))) && (((/* implicit */_Bool) (unsigned char)255))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_3] [i_3])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_7] [i_7])))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-19070))))) ^ (-3698992569179593893LL)));
        }
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (long long int i_10 = 3; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_3] [i_3] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_3] [i_3] [i_9]))))))) * (6801519229386026832ULL)))));
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            arr_37 [i_3] [i_3] [i_9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [10U] [24ULL] [i_9] [i_11 + 3])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_3] [i_9] [i_9]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) / (633882321841191816ULL)))));
                            arr_38 [3] [i_9] [i_10] = ((/* implicit */unsigned short) max((max((arr_28 [i_9] [i_11 + 3] [i_9]), (((/* implicit */unsigned char) arr_36 [i_9] [i_10 - 3] [i_9] [i_10] [i_11] [i_11 + 2])))), (min((((/* implicit */unsigned char) arr_36 [12ULL] [i_10 - 2] [i_8] [i_10 - 2] [i_11] [i_11 + 1])), (arr_28 [i_9] [i_11 - 2] [i_9])))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)8)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_11 + 1] [i_11] [i_11 - 1])) != (((/* implicit */int) arr_25 [i_10 + 1] [i_10 + 1])))))));
                        }
                        for (signed char i_12 = 1; i_12 < 24; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_24 [i_3] [i_3] [1U])) ? (((/* implicit */int) arr_24 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_24 [(unsigned char)5] [i_9] [i_8])))) * (((/* implicit */int) arr_19 [i_10] [i_8] [(unsigned short)23] [i_10 - 2] [i_3])))))));
                            arr_41 [i_9] [i_8] [i_9] [i_8] [(signed char)3] [i_8] = ((/* implicit */unsigned char) (((~(max((1913981776), (((/* implicit */int) (unsigned char)23)))))) / (((/* implicit */int) (short)-4))));
                            arr_42 [i_3] [i_9] [i_9] [i_10] [i_12] [11LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)4)) ? (min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-746621512826982343LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_25 [i_3] [23LL]))))))) : (((/* implicit */long long int) ((arr_19 [i_12 - 1] [i_12] [i_12 + 1] [i_12] [i_12 + 1]) ? (((/* implicit */int) arr_31 [i_9] [i_10] [i_12 + 1] [i_12] [i_12 + 1] [i_12])) : (((/* implicit */int) arr_31 [i_9] [(short)19] [i_12 + 1] [(short)19] [i_12] [i_12])))))));
                            var_26 = ((/* implicit */unsigned char) ((((unsigned long long int) max((549555095U), (((/* implicit */unsigned int) var_1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67)))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            arr_46 [i_9] [(unsigned short)23] [i_9] [i_3] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_36 [i_10] [i_10] [i_10 - 2] [i_10] [i_10] [i_10]), (arr_36 [i_10 - 1] [i_10] [i_10 - 2] [i_10 - 1] [i_10] [i_10])))) & (arr_18 [i_9] [i_10 - 3] [i_9] [i_9])));
                            var_27 = ((/* implicit */unsigned long long int) max(((+(var_9))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-115)), (((-270738777) | (((/* implicit */int) (unsigned short)54926)))))))));
                            arr_47 [i_3] [i_9] [i_9] [i_9] [i_10] [i_9] [i_13] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_30 [i_10 - 2] [i_9] [i_9] [i_8])))) ? (((/* implicit */int) arr_28 [i_3] [(short)15] [i_9])) : ((+(((/* implicit */int) arr_11 [i_9]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 2; i_14 < 24; i_14 += 3) 
                        {
                            arr_51 [i_9] [i_9] [i_9] [i_9] [i_3] = ((/* implicit */_Bool) ((var_8) ? (arr_35 [i_10 - 3] [i_10 - 2] [i_10] [i_10 - 2] [21]) : (arr_35 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] [i_14])));
                            var_28 = ((/* implicit */long long int) (short)-11205);
                            var_29 -= ((/* implicit */signed char) (unsigned char)8);
                            arr_52 [i_3] [i_3] [i_3] [i_9] [(unsigned char)1] [18LL] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_9] [i_3] [i_9] [i_10] [i_14] [i_14 + 1] [i_14 + 1])) - (((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [23] [14ULL] [i_14 - 2] [23]))));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_40 [i_9] [i_10 - 2] [i_10 - 2] [i_10] [3ULL] [i_10 - 1] [i_9]), (arr_40 [i_9] [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10 - 3] [i_9])))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)11210)))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                var_31 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)16825)) / (((/* implicit */int) arr_17 [i_15] [i_8] [i_8] [(unsigned short)0] [(unsigned short)0])))) & (((/* implicit */int) ((short) (short)5))))) / (((((int) (signed char)-125)) | ((-(402764825)))))));
                var_32 = ((/* implicit */int) max((((/* implicit */long long int) max(((unsigned short)3998), (((/* implicit */unsigned short) (short)-11186))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_3] [i_8] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_24 [i_3] [i_3] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (-2388279678045552138LL)))));
            }
            for (unsigned char i_16 = 2; i_16 < 23; i_16 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(signed char)0] [i_8] [i_16 + 2]))) / (max((((arr_53 [14LL] [19ULL] [i_3]) & (arr_53 [i_3] [i_8] [i_16 - 2]))), (((((/* implicit */_Bool) (unsigned short)10630)) ? (arr_57 [21ULL] [21ULL] [21ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                var_34 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_35 [i_16] [i_8] [i_8] [4U] [i_3]), (arr_14 [i_3]))))));
            }
            for (unsigned char i_17 = 2; i_17 < 23; i_17 += 4) /* same iter space */
            {
                arr_61 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) min((arr_26 [i_3] [i_3]), (((/* implicit */signed char) (_Bool)1)))))));
                var_35 |= ((/* implicit */unsigned short) arr_32 [i_3] [i_3] [i_3] [i_3]);
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (min((((((/* implicit */_Bool) min((17051016191083207538ULL), (((/* implicit */unsigned long long int) (short)3584))))) ? (arr_55 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3))))) ? (max((((/* implicit */unsigned long long int) var_10)), (3ULL))) : (arr_29 [i_3] [(unsigned char)9] [i_17])))))));
            }
            for (short i_18 = 2; i_18 < 24; i_18 += 4) 
            {
                arr_65 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(-1279939375)))), (4U)));
                var_37 = ((/* implicit */long long int) (+(((/* implicit */int) (short)0))));
                var_38 = ((/* implicit */long long int) max(((+((+(734210428U))))), (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (arr_23 [i_3] [i_8] [i_18 - 2]))))));
            }
        }
        for (int i_19 = 0; i_19 < 25; i_19 += 1) /* same iter space */
        {
            arr_68 [i_3] [i_3] [i_19] = ((/* implicit */unsigned short) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((arr_63 [i_3] [(short)16] [i_3]), (((/* implicit */int) arr_10 [i_19])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_21 = 2; i_21 < 21; i_21 += 4) 
                {
                    arr_76 [i_3] [i_19] [i_20] [i_21] |= ((/* implicit */short) var_6);
                    arr_77 [i_3] [i_3] [i_21] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_50 [i_19] [i_21 + 4] [i_19] [i_21] [i_20])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_50 [i_3] [i_3] [i_3] [i_21] [14])) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (signed char)127))))));
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 25; i_22 += 4) 
                    {
                        arr_82 [7ULL] [i_19] [i_19] [i_19] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_3] [i_22] [i_22] [i_21 + 4] [24ULL] [i_21 + 4] [22ULL])) + (((/* implicit */int) var_10)))))));
                        var_39 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)61789)) : (((/* implicit */int) var_11)))) & (((((/* implicit */_Bool) arr_72 [i_3] [i_19] [i_21 + 1] [i_3])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_10))))));
                        arr_83 [(unsigned char)23] [i_3] [(unsigned char)23] [i_20] = ((/* implicit */long long int) arr_32 [6LL] [i_19] [i_20] [i_21 + 4]);
                    }
                    arr_84 [i_3] [i_20] [i_20] [i_3] = ((/* implicit */long long int) arr_29 [i_3] [i_19] [i_3]);
                }
                arr_85 [i_20] [i_19] [i_20] = ((/* implicit */long long int) (((_Bool)1) ? (16502984142794959875ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            arr_86 [i_19] [i_3] = ((/* implicit */unsigned char) var_3);
            var_40 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3777))))) && (arr_11 [12])))), (max((4294967281U), (4294967295U)))));
        }
    }
    for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 25; i_24 += 4) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_41 = (+(((((/* implicit */int) arr_33 [i_24] [i_25] [i_25])) ^ (((/* implicit */int) arr_33 [i_23] [i_25] [i_25])))));
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 1; i_26 < 24; i_26 += 3) 
                    {
                        for (int i_27 = 1; i_27 < 22; i_27 += 3) 
                        {
                            {
                                arr_101 [i_25] [13ULL] [13ULL] = ((/* implicit */unsigned long long int) (+(((16U) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)16290)) / (((/* implicit */int) (signed char)-61)))))))));
                                arr_102 [i_25] = ((/* implicit */int) ((min((arr_75 [(signed char)12] [i_24] [i_23]), (((((/* implicit */int) var_0)) > (((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) max(((+(arr_55 [i_23]))), (((/* implicit */unsigned long long int) (signed char)-105)))))));
                                arr_103 [i_25] [i_24] [i_25] [i_26] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_23] [i_25] [i_25])) ? (((((/* implicit */_Bool) arr_69 [i_27 - 1] [i_24] [i_25] [i_26])) ? (max((((/* implicit */int) var_1)), (arr_73 [i_23] [i_25] [i_23] [i_25]))) : ((+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_72 [i_23] [i_24] [i_25] [i_23]))))), (arr_33 [i_24] [i_25] [i_27]))))));
                                arr_104 [i_23] [i_24] [i_25] [i_25] [i_26] [i_24] = min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)-42))), ((+(((((/* implicit */_Bool) arr_80 [i_23] [i_24] [i_25] [i_26] [20])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_105 [i_23] = ((/* implicit */_Bool) ((unsigned long long int) (signed char)41));
    }
    var_42 = ((/* implicit */long long int) max(((+((+(((/* implicit */int) var_1)))))), ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (var_15))))))));
}
