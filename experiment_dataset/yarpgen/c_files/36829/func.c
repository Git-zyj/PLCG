/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36829
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
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) & (arr_1 [i_0 - 1]))) ^ (((/* implicit */long long int) (~(arr_2 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 4; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_3 - 4] &= ((/* implicit */signed char) (-(min((((/* implicit */long long int) var_17)), ((-(arr_1 [i_1])))))));
                        var_20 = ((/* implicit */unsigned long long int) min((((((8543100369225615809LL) / (((/* implicit */long long int) -914299697)))) & (((/* implicit */long long int) ((int) -914299697))))), (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)0)) ^ (arr_6 [i_0 - 2] [i_2] [i_2] [i_3]))))))));
                        arr_12 [i_3] [i_2] [i_0] [i_2 + 4] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 654411235004303160ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) var_0)) ? (8543100369225615811LL) : (((/* implicit */long long int) var_9))))))) | (11508665309154110614ULL)));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        for (int i_5 = 3; i_5 < 12; i_5 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    arr_20 [i_4] [i_5 - 2] [i_6] = (~(min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)-118)))));
                    var_21 &= arr_18 [(signed char)13] [i_6];
                }
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) (+(6938078764555441001ULL)));
                        var_23 = ((/* implicit */unsigned long long int) var_9);
                        var_24 = ((/* implicit */long long int) var_13);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 2) 
                        {
                            {
                                arr_31 [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? ((~(var_11))) : (var_0))) ^ ((-9223372036854775807LL - 1LL))));
                                var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_16)) ? (-9223372036854775796LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)0)), (8U))))))));
                            }
                        } 
                    } 
                    arr_32 [i_4] [i_5 - 3] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)33436))))), (((((var_5) ? (1941621770112405669LL) : (((/* implicit */long long int) arr_5 [i_4] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) - (6053623205798098650LL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2]))));
                    var_27 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))) : (arr_9 [i_5 - 3] [i_5 - 2])));
                }
                /* vectorizable */
                for (unsigned int i_12 = 2; i_12 < 13; i_12 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 13; i_14 += 1) 
                        {
                            {
                                var_28 &= ((/* implicit */unsigned short) var_3);
                                arr_42 [i_4] [i_5] [i_12] [i_13] [8] [i_12 - 2] = 1543450239;
                                arr_43 [i_4] [i_5] [(unsigned short)10] [i_14 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 914299696)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 190427021)) ? (1138066109) : (((/* implicit */int) (signed char)-105))))) : (((((/* implicit */_Bool) -4415169050927664783LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (8543100369225615809LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        arr_48 [i_4] [i_5] [i_12] [(unsigned short)1] &= ((/* implicit */signed char) (-(10764993661892901925ULL)));
                        arr_49 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)34697)) : (((/* implicit */int) (_Bool)1))));
                        arr_50 [i_4] [i_4] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) ? (6053623205798098670LL) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_15])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 1; i_16 < 10; i_16 += 1) /* same iter space */
                        {
                            arr_54 [8LL] [i_15] = ((/* implicit */signed char) ((unsigned short) arr_7 [i_15] [i_15] [i_5 + 1] [(_Bool)1] [i_15]));
                            arr_55 [i_4] [i_5 - 3] [i_5 - 3] [i_12] [i_15] [i_15] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5 - 1] [i_12 + 1] [i_12 + 1] [i_16 + 3])) ? (-5824259070598442379LL) : (((/* implicit */long long int) arr_34 [i_5 + 2] [i_12 + 1] [i_12 - 1] [i_16 + 1]))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 10; i_17 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) (!(var_4)))))))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [5LL] [5LL] [i_5 - 1] [5LL])) && (((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_5 - 3] [i_5]))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) >> (((/* implicit */int) arr_46 [i_4] [i_12] [i_12]))))) : (((((/* implicit */_Bool) 5824259070598442381LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (5824259070598442379LL))))))));
                            var_32 = (!(((/* implicit */_Bool) (signed char)-110)));
                        }
                    }
                    for (int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((-9223372036854775807LL) + (9223372036854775807LL))) << (((/* implicit */int) arr_21 [i_5 + 2])))))));
                        var_34 = ((/* implicit */int) (unsigned short)44398);
                    }
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        var_35 = ((/* implicit */int) ((((arr_38 [i_4] [i_5 - 3] [i_12 - 1] [i_19]) ? (var_7) : (var_0))) / (((/* implicit */long long int) 111844733))));
                        arr_65 [i_4] [i_5 - 1] [i_12 - 2] [i_4] [(signed char)3] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 191669382)))) : (((((/* implicit */_Bool) -3170746088194095254LL)) ? (((/* implicit */long long int) -1956825543)) : (arr_0 [i_4] [i_4])))));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (~(-1956825543)))) || (((/* implicit */_Bool) 357517890535048610LL))));
                        arr_66 [i_4] [i_12] [i_12] [i_19] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_20 = 1; i_20 < 13; i_20 += 2) 
                    {
                        var_37 &= ((/* implicit */_Bool) var_1);
                        var_38 = ((/* implicit */signed char) ((585167975) >> (((-1) + (2)))));
                        var_39 = ((/* implicit */unsigned long long int) ((arr_52 [i_4] [i_5 + 1] [i_4] [i_20 + 1]) & (arr_52 [i_20 - 1] [i_12 - 1] [i_5 - 3] [i_4])));
                        arr_69 [i_4] [i_5 - 1] [i_12] [i_4] [i_5] [i_4] &= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8160))));
                    }
                    for (unsigned short i_21 = 4; i_21 < 13; i_21 += 3) 
                    {
                        arr_72 [i_4] [0] [i_12] [i_21] = ((/* implicit */_Bool) 8543100369225615820LL);
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 0; i_22 < 14; i_22 += 4) 
                        {
                            arr_75 [i_4] [(unsigned short)2] [i_12] [i_22] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned long long int) -627344902)) : (0ULL)))) ? (((/* implicit */long long int) (+(804167042)))) : (var_7));
                            var_40 = ((/* implicit */unsigned int) 3764161841922490398ULL);
                            var_41 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_40 [i_4] [0ULL] [i_12 - 2] [13ULL] [i_22]) : (((/* implicit */unsigned int) arr_5 [i_22] [(_Bool)1] [i_12] [i_5]))))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) + (-8978873722281856154LL)))));
                        }
                        arr_76 [i_21 - 3] [i_5 - 1] [i_4] &= ((/* implicit */unsigned short) ((11112205950201441123ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                var_42 = ((/* implicit */long long int) ((arr_3 [i_4] [i_4] [i_4]) * (((/* implicit */int) var_5))));
                var_43 = (-((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18339))) : (-357517890535048608LL))))));
            }
        } 
    } 
    var_44 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (var_3)));
    var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-8543100369225615814LL)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_2)))));
}
