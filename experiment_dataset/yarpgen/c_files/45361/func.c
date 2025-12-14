/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45361
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
    var_10 = ((/* implicit */_Bool) ((unsigned short) var_1));
    var_11 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176)))))) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (var_7)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)168), ((unsigned char)87))))));
        arr_3 [17LL] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [(unsigned char)8]))))) & ((~(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [3]))));
        var_13 |= ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */int) arr_0 [i_1])), (arr_6 [(signed char)1]))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned char)176))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */int) max((var_15), (var_4)));
                        var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)24)))) ? (arr_8 [0]) : (628391261)));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_20 [i_2] [i_3] [i_2] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38477))))) ? (5ULL) : (arr_17 [i_3] [i_3] [i_3] [i_4 - 1])));
                            var_17 = ((/* implicit */unsigned short) ((var_9) && (((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4 + 1]))));
                            arr_21 [i_3] [(unsigned short)11] [i_3] [i_5] = ((/* implicit */signed char) arr_5 [i_4]);
                            var_18 = ((((/* implicit */int) arr_14 [i_3])) ^ (var_2));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_19 = (+(arr_23 [i_4 - 2] [i_7] [12LL] [i_7] [(signed char)14]));
                            arr_25 [i_3] [i_7] [i_3] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)186)) ^ (-1329515013)));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7]))) & (((var_0) ? (4822210721880903866ULL) : (var_1))))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 2; i_8 < 16; i_8 += 4) 
                        {
                            var_21 |= ((/* implicit */signed char) (-(1945527638056990701LL)));
                            arr_29 [i_2] [i_3] [(unsigned char)9] [i_3] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 + 1] [i_8]))) - (((unsigned long long int) arr_24 [i_8] [(signed char)9] [i_5] [i_3] [i_8 - 1] [i_3]))));
                            var_22 += (+(((/* implicit */int) arr_13 [8] [i_4 + 1] [i_8 + 1])));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [6LL] [(short)10] [i_9]))) + (((unsigned long long int) var_4)))))));
                            arr_33 [i_3] [i_5] [i_4 - 1] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                            var_24 += (unsigned char)80;
                            var_25 = ((/* implicit */unsigned char) ((((arr_7 [i_2]) + (18446744073709551615ULL))) < (arr_4 [i_4 + 1])));
                        }
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((int) -1329515013)))));
                            arr_37 [i_3] [i_3] = ((((arr_7 [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_10] [i_3] [(short)7])))))));
                            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) arr_32 [i_4] [i_4] [i_2])))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_3))));
                            arr_38 [i_5] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */signed char) (~(arr_24 [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_3] [i_4 - 1] [i_4 + 1])));
                        }
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (var_3)));
                            var_30 = (signed char)14;
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_12 = 3; i_12 < 17; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)21827))));
                                var_32 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) / (((/* implicit */int) (unsigned short)53840))))) ? (((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) 2147483647)))), (min((((((/* implicit */_Bool) (unsigned char)82)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))))), (((/* implicit */unsigned long long int) (unsigned short)96))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            {
                                var_33 = 2147483646;
                                var_34 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-16202))))) ? (((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)168)))) : (((/* implicit */int) ((short) var_2)))))), (((var_7) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1945527638056990701LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_4] [(signed char)4] [(unsigned short)16] [(unsigned short)16] [4ULL] [(unsigned short)4])))))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_16 = 3; i_16 < 17; i_16 += 3) 
        {
            for (unsigned int i_17 = 1; i_17 < 17; i_17 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                    {
                        arr_63 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) arr_48 [i_16 - 3] [i_17] [i_16 - 3] [i_16 + 1]))));
                        var_36 *= ((/* implicit */unsigned int) var_1);
                        var_37 += ((/* implicit */_Bool) var_5);
                        var_38 *= ((/* implicit */unsigned short) (short)-32598);
                        var_39 = ((/* implicit */_Bool) arr_17 [i_17 - 1] [i_17] [i_17] [(unsigned char)14]);
                    }
                    for (long long int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) var_1);
                        var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_19 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_56 [i_17]), (((/* implicit */unsigned char) (signed char)120)))))) : (((((/* implicit */_Bool) arr_16 [i_2] [14U] [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9658))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_43 [i_2] [i_17] [i_16] [i_2])) * (((/* implicit */int) (unsigned char)12)))))))));
                        arr_68 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned short) (_Bool)1))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [3ULL] [3ULL] [(unsigned char)1] [13U] [3ULL]))))))) * (((((/* implicit */_Bool) (unsigned char)188)) ? (3964761840U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))))))));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (4822210721880903866ULL))))), (((/* implicit */unsigned long long int) 3341585467U)))))));
                    }
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
                    {
                        arr_72 [(unsigned short)16] [i_16] [i_17] [i_16] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)0)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (var_2) : (((/* implicit */int) (unsigned short)11716))))), (var_3)))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)164)), ((unsigned short)7)))) ? (arr_49 [12U] [12U] [(signed char)13] [i_20] [11LL] [11LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))) * (((((/* implicit */int) var_6)) >> (((/* implicit */int) (signed char)12)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
                    {
                        arr_76 [i_17] [i_17] [i_17] [i_21] = ((/* implicit */unsigned short) ((((arr_19 [i_2] [i_17 + 1]) > (((/* implicit */unsigned long long int) arr_51 [i_17])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -5977585170279695908LL)) : (arr_4 [i_17 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)15)) * (((/* implicit */int) arr_65 [i_17] [i_17] [10])))))));
                        var_44 = ((/* implicit */signed char) var_4);
                        arr_77 [i_2] [i_16 - 2] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((~(2U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82)))));
                        arr_78 [i_2] [i_17] [4] [i_17] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)597)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)174)) && (((/* implicit */_Bool) arr_1 [i_17] [i_21])))))));
                        arr_79 [i_17] [i_17] [(short)4] [i_21] [i_2] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */_Bool) 2490616303361993941LL)) ? (arr_60 [i_16 - 3] [i_16 - 2] [i_16 - 3] [i_17 - 1]) : (((/* implicit */int) arr_43 [i_17 + 1] [i_16 - 3] [i_2] [i_2]))));
                    }
                    var_45 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_17 [(short)6] [8ULL] [8ULL] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))) ? (((((/* implicit */int) arr_48 [i_2] [(signed char)6] [i_17] [i_17])) ^ (((/* implicit */int) (unsigned short)38005)))) : (max((var_4), (((/* implicit */int) arr_34 [i_2] [i_2] [i_16 - 2] [i_16 - 3] [i_17 + 1] [i_17 - 1]))))))) ? (((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173)))))) ? (min((((/* implicit */unsigned long long int) var_9)), (2301339409586323456ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_42 [i_2] [i_2] [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6))))))))));
                    var_46 ^= ((/* implicit */unsigned int) (+(((18446744073709551615ULL) >> (((min((((/* implicit */int) (unsigned short)17)), (var_4))) + (973788665)))))));
                    /* LoopSeq 2 */
                    for (long long int i_22 = 1; i_22 < 14; i_22 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_82 [(unsigned short)3] [6ULL] [6ULL] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_22 + 3] [i_17] [i_2] [i_16] [i_16] [i_2])) ? (min((536870784U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 2047U))))))));
                        arr_83 [i_17] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned char)7]))) | (((unsigned long long int) ((((/* implicit */_Bool) 593780381U)) ? (6354991855035189883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                    for (short i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        arr_87 [i_2] [i_16 - 1] [i_16] [(unsigned short)8] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_86 [i_2] [(unsigned char)2]))))), (5ULL)))) ? (((7073005909787180470ULL) - (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)9)), (2825944336U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) arr_74 [i_17] [5U] [5U] [i_17])) : (min((((/* implicit */unsigned long long int) arr_53 [i_17])), (var_7)))))));
                        var_48 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_43 [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1])) || (((/* implicit */_Bool) var_6)))));
                    }
                    var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (unsigned char)80))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_24 = 0; i_24 < 18; i_24 += 4) 
        {
            var_50 *= ((/* implicit */signed char) (unsigned char)82);
            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) arr_50 [13LL] [5U] [13LL] [13LL] [1] [(unsigned char)11]))));
            var_52 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_35 [i_24] [2]))));
        }
        for (int i_25 = 1; i_25 < 15; i_25 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_26 = 4; i_26 < 15; i_26 += 2) 
            {
                for (unsigned short i_27 = 0; i_27 < 18; i_27 += 4) 
                {
                    {
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((arr_47 [i_2] [i_27] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) (unsigned short)45994)), (arr_16 [i_2] [i_27] [i_2])))))))))));
                        arr_101 [(signed char)15] [(signed char)15] [(signed char)15] [(unsigned char)4] = ((/* implicit */unsigned short) var_0);
                        arr_102 [i_27] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_93 [i_25] [i_26]);
                        var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) (((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_65 [i_26] [i_26] [i_26])) : (((/* implicit */int) arr_1 [i_26 - 4] [i_26 - 4])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-12)), (arr_43 [i_2] [i_25 + 2] [i_2] [i_27]))))))))))));
                    }
                } 
            } 
            arr_103 [i_25 - 1] [i_2] [12U] = ((/* implicit */signed char) (unsigned char)147);
            var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) var_2))));
            var_56 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) arr_55 [i_2] [i_2] [i_2] [i_2] [i_25 + 2] [i_2] [i_2])))) | (((((/* implicit */_Bool) 388147000)) ? (((/* implicit */int) arr_44 [16ULL] [i_2] [16ULL] [(_Bool)1])) : (((/* implicit */int) arr_94 [i_2] [6ULL] [i_25 + 1])))))))));
        }
    }
    for (long long int i_28 = 0; i_28 < 18; i_28 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_29 = 0; i_29 < 18; i_29 += 4) 
        {
            for (unsigned int i_30 = 0; i_30 < 18; i_30 += 4) 
            {
                {
                    arr_111 [i_28] [(signed char)13] [i_28] [i_29] |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) min((arr_80 [i_30]), (((/* implicit */unsigned short) arr_1 [i_29] [i_29]))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120))))))));
                    var_57 = var_1;
                }
            } 
        } 
        var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_46 [i_28] [0LL] [(unsigned short)12] [i_28] [i_28] [i_28])) : (((/* implicit */int) arr_46 [i_28] [i_28] [(short)14] [i_28] [i_28] [i_28])))))))));
        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) (short)-17045))));
    }
    var_60 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) 0))), (-899813853)))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (17581503918023022302ULL)))))));
}
