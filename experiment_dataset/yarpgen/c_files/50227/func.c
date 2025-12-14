/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50227
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((4788388622718805552LL) > (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) < (arr_0 [i_0] [13ULL])));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((arr_4 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))))))));
                arr_6 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [i_2] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned short) (((+(778319959U))) >> ((((-(12851137547544621102ULL))) - (5595606526164930503ULL)))));
                                var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 - 3])) || (((/* implicit */_Bool) ((5595606526164930514ULL) >> (((-634271971) + (634271998))))))));
                                arr_15 [i_0] [i_1] [i_2] [0U] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_7 [i_0 - 3] [i_0 - 3] [3LL] [i_0 + 1])))) < ((+(18446744073709551615ULL)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 2]))) + (((((/* implicit */_Bool) arr_0 [19U] [i_2])) ? (5595606526164930521ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
                    var_16 = (-(min((arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0]), (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) arr_7 [i_0 + 1] [i_0] [(unsigned char)13] [i_5]);
                        var_18 = ((/* implicit */int) ((min((((12528252569041144271ULL) << (((10552833848491689099ULL) - (10552833848491689073ULL))))), (((/* implicit */unsigned long long int) (_Bool)0)))) >> (((max((((int) arr_18 [i_0] [i_0] [i_2] [i_5] [i_5 + 1] [i_0 - 2])), (arr_13 [i_0] [i_0] [(short)9] [(short)9] [i_2] [i_5 - 2]))) - (810485850)))));
                        var_19 = ((/* implicit */unsigned int) max((((long long int) -1805952244)), ((-(((((/* implicit */long long int) ((/* implicit */int) (short)-32755))) / (arr_0 [i_1] [i_1])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        arr_22 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_0]))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 6994873292832585358ULL)) ? ((~(arr_11 [i_0] [i_0 + 2] [12LL]))) : (((/* implicit */long long int) arr_8 [(unsigned char)16] [(unsigned char)16] [i_2]))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_20 [i_0 - 3])), (var_4)))) && (((/* implicit */_Bool) -1208195948))));
                            var_23 = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_2] [i_7 - 1] [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0 - 1] [i_1] [i_7] [i_7 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_28 [i_0 - 1] [i_1] [i_1] [i_7 - 1] [i_8 + 2])) : (((/* implicit */int) (signed char)10)))))));
                            var_24 = ((/* implicit */unsigned short) arr_3 [i_0]);
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 5U)) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : (((unsigned int) arr_8 [i_0] [i_0] [i_7]))))), ((-(((long long int) arr_25 [i_0] [i_0] [i_0] [(signed char)21] [i_0]))))));
                            arr_33 [i_9] [i_9] [i_2] [i_9] [i_9] = ((/* implicit */int) min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (min((arr_0 [i_0 + 2] [i_7 - 1]), (arr_12 [i_7 - 1])))));
                        }
                        var_26 ^= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7 + 1] [i_0 + 1] [i_0 - 2])) ? (arr_26 [i_7 + 1] [i_7 + 1] [i_0 - 3] [i_0 - 2]) : (arr_26 [i_7 - 1] [i_7 + 1] [i_0 - 2] [i_0 + 1])))) >= (min((((/* implicit */long long int) (-(arr_32 [10ULL] [i_2] [i_1] [i_7] [(_Bool)1])))), (max((((/* implicit */long long int) arr_19 [i_0 - 1] [i_2] [i_0] [i_2] [i_0] [i_2])), (arr_11 [3ULL] [i_1] [i_1])))))));
                        var_27 = ((/* implicit */unsigned char) 0ULL);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((18446744073709551610ULL), (((/* implicit */unsigned long long int) (unsigned short)25048)))), (((/* implicit */unsigned long long int) 897080339))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_0]))) : (-4646180976887648213LL))))));
                                var_29 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) arr_31 [2LL] [i_0 - 2] [i_2] [i_2] [i_2] [i_0] [i_2])))));
                                arr_41 [i_0 - 1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0 - 2])))) ? ((((~(arr_18 [i_0] [i_2] [i_0] [i_10] [i_2] [i_2]))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53305))))) : (((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_0 + 2] [7] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                arr_49 [i_14] [i_14] [i_12] [i_14] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [i_0] [i_0 + 2] [13U] [i_13] [i_14]))));
                                arr_50 [i_14] [i_14] [i_14] [i_14] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) 18446744073709551614ULL));
                                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_39 [i_0 + 1] [i_14] [9ULL] [i_13] [i_14]) * (arr_7 [i_0] [i_1] [i_12] [19])))) ? (((((/* implicit */_Bool) 4294967291U)) ? (4155047998167191823ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0 + 1] [i_0 - 2] [i_14] [i_0 + 2] [i_0 + 2])))))) ? (min((((/* implicit */unsigned int) arr_45 [i_0 + 1] [i_0 + 2])), (min((var_13), (arr_48 [19ULL] [i_13] [i_12] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_12] [i_12] [i_0 - 3] [i_0]))))))));
                                var_31 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_12] [i_13] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((-(11451870780876966257ULL)))))) ? ((-(arr_39 [i_0 + 2] [i_0 + 2] [i_0 + 2] [16ULL] [i_0 + 1]))) : (((/* implicit */unsigned int) (-(arr_42 [i_0] [i_0] [i_0 - 1] [i_13]))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) (((-(((long long int) 1927315024397109652LL)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 27U)) ? (((/* implicit */int) arr_2 [i_1] [i_12])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_23 [i_0] [i_1])) << (((-1530410032) + (1530410043))))) : (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_23 [i_0 + 1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((((/* implicit */int) arr_47 [i_0] [i_1] [i_16] [i_15] [i_16])) != (((((/* implicit */int) arr_53 [i_16] [i_15] [i_12] [i_1] [i_0])) >> (((arr_54 [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 3]) - (1647802247)))))));
                                var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) - (arr_43 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_15])) || (((/* implicit */_Bool) 4155047998167191823ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) -36433814)) || (((/* implicit */_Bool) 4646180976887648212LL))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((805306368), (((/* implicit */int) (unsigned char)82))))))))));
                            }
                        } 
                    } 
                    var_35 ^= ((/* implicit */signed char) arr_34 [i_0] [i_0] [i_1] [i_1] [i_12] [i_12]);
                }
                /* vectorizable */
                for (unsigned int i_17 = 4; i_17 < 21; i_17 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            {
                                arr_64 [i_0] [i_0 - 3] [i_0] [9] [i_0] = ((/* implicit */int) ((arr_10 [i_17 + 1] [i_17] [i_17] [i_17 + 1]) * (((/* implicit */unsigned long long int) (+(arr_56 [i_0] [i_0] [i_17 + 1]))))));
                                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (~(((arr_59 [i_0] [i_18] [i_19]) - (((/* implicit */unsigned long long int) arr_52 [i_0 - 1] [i_1] [(signed char)20] [i_18] [(signed char)20])))))))));
                                var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-104))));
                                var_38 = arr_31 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_17] [i_17] [i_1] [0LL];
                            }
                        } 
                    } 
                    arr_65 [i_0] [i_0] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_39 [i_17 - 4] [i_17] [i_1] [(signed char)21] [(unsigned char)13])));
                }
                for (unsigned long long int i_20 = 4; i_20 < 21; i_20 += 4) 
                {
                    var_39 = ((/* implicit */unsigned int) ((int) (~((~(1U))))));
                    var_40 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_20 - 3] [i_20 - 3] [i_20] [i_20] [i_20 - 3]))))) + ((-(((/* implicit */int) arr_28 [i_20 - 3] [i_20 - 3] [i_20] [i_20 - 3] [i_20 - 3])))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
    {
        for (unsigned long long int i_22 = 1; i_22 < 10; i_22 += 1) 
        {
            {
                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) arr_54 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_22] [i_22]))) : (arr_12 [i_22 + 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_21] [i_21] [i_21] [i_21] [i_21] [(signed char)19])) ? (arr_7 [i_22] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned int) arr_56 [i_21] [10] [10]))))) ? (arr_34 [i_22] [i_22 + 1] [i_22] [i_22] [i_22 - 1] [i_22]) : (arr_58 [i_21] [i_21] [i_21] [i_21])))))))));
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 8; i_23 += 3) 
                {
                    for (long long int i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_76 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])) : (arr_52 [14] [i_22] [i_23 + 4] [i_23] [(unsigned char)0])))))) ? (max(((~(arr_52 [i_21] [i_24] [i_23] [i_21] [18]))), (((arr_12 [i_21]) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_22 - 1] [i_22 + 2] [i_22 - 1] [i_22 + 1]))))))));
                            arr_77 [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_21 [i_21]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (arr_74 [i_21] [i_21] [i_21] [i_21]) : (arr_38 [i_21] [i_21]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)252))))))) : (((max((((/* implicit */unsigned int) arr_27 [i_24] [i_24] [i_24] [i_24] [i_24])), (4294967291U))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42))))))))));
                        }
                    } 
                } 
                arr_78 [i_21] [i_21] [i_21] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
}
