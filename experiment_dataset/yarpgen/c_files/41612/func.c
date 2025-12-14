/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41612
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_8 [i_0] = max((((arr_5 [i_0] [i_1]) << (((var_3) - (2058049737U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) arr_2 [i_0])))))) > (3471381211U)))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) max((var_18), (((/* implicit */int) var_16))))), (min((((/* implicit */unsigned int) var_7)), (arr_5 [i_0] [i_1]))))) > (min((((/* implicit */unsigned int) var_18)), (max((((/* implicit */unsigned int) var_7)), (3356705207U)))))));
                    arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_12);
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (3356705208U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_0] [(short)15] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((var_11) ? (((((/* implicit */_Bool) 938262095U)) ? (((/* implicit */long long int) 3033948432U)) : (arr_2 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_0 [i_0])))))));
                        arr_15 [i_0] = ((/* implicit */signed char) ((arr_12 [9ULL] [16ULL] [i_2] [i_3] [i_0]) ? (938262089U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -6148071980625871736LL))))))));
                        arr_16 [i_0] [i_1] [i_0] [i_2] [i_3 - 2] = ((/* implicit */_Bool) -9223372036854775803LL);
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [16LL] [10LL])))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_23 [i_0] [(unsigned char)5] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) ((var_6) + (((/* implicit */long long int) arr_5 [i_0] [i_0]))));
                            arr_24 [i_5 + 2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0]) : (((/* implicit */long long int) 4048366638U))));
                        }
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) (unsigned char)126)) ? (-8545489586293849868LL) : (((/* implicit */long long int) 938262089U)))) : (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */long long int) 938262089U)) : (-8545489586293849874LL)))));
                            var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (-8545489586293849868LL) : (-8545489586293849861LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 - 1] [(signed char)14] [i_6 + 1] [i_6 + 2] [(unsigned short)18])))));
                            arr_29 [i_0] [i_1] [(unsigned char)17] [i_0] [i_6 + 1] [i_6 + 3] [i_6] = ((/* implicit */long long int) (-(((var_10) + (((/* implicit */unsigned long long int) 1108687583085532593LL))))));
                        }
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_23 *= ((/* implicit */unsigned char) var_2);
                            arr_32 [i_0] [i_4] = ((/* implicit */unsigned char) -8545489586293849869LL);
                            var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_2])) <= (((/* implicit */int) var_8)))) ? (var_0) : (((/* implicit */unsigned long long int) var_18))));
                        }
                        arr_33 [i_0] = ((/* implicit */short) arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] [i_4] [i_1]);
                        arr_34 [i_0] [i_4] = (i_0 % 2 == 0) ? (((/* implicit */short) (((-(1251011583U))) * (((4048366638U) << (((arr_5 [i_0] [i_0]) - (3741560289U)))))))) : (((/* implicit */short) (((-(1251011583U))) * (((4048366638U) << (((((arr_5 [i_0] [i_0]) - (3741560289U))) - (1730736800U))))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_31 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 + 2]);
                        arr_38 [i_8 - 1] [i_0] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_5));
                        arr_39 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3033948432U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-84)))) | (((/* implicit */int) arr_31 [i_8 + 1] [i_8 + 1] [19U] [i_8 - 1] [i_0]))));
                        var_25 += ((/* implicit */_Bool) (~(4294967295U)));
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    arr_44 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_9])) && (((/* implicit */_Bool) ((9223372036854775802LL) ^ (((/* implicit */long long int) var_18))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [19U] [i_0] [i_9] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)126))))) : (1760552529U)))) : (max((arr_2 [i_0]), (arr_2 [i_0])))));
                    var_26 ^= ((/* implicit */short) (~(var_13)));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        arr_47 [i_0] = (((~(((arr_7 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (2147483630)))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) arr_50 [i_10] [i_10] [i_9] [i_11]);
                            arr_52 [i_9] [i_0] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 8545489586293849867LL))) ? (1108687583085532604LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_9] [i_10] [i_11])))));
                            arr_53 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_11])) ? (var_2) : (2989444158021064428LL)));
                            arr_54 [i_0] [i_0] [(_Bool)1] [i_10] [i_10] [1U] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0] [20LL] [i_10] [i_11])) && (var_12)))) & ((+(((/* implicit */int) var_1))))));
                            arr_55 [i_0] [i_1] [i_0] [i_10] = (~(var_6));
                        }
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            arr_58 [i_0] [i_1] [i_9] [i_10] [i_0] [i_12] = ((/* implicit */_Bool) (+(-9223372036854775802LL)));
                            arr_59 [i_0] [i_0] = ((/* implicit */_Bool) min((1108687583085532602LL), (max((8545489586293849867LL), (9LL)))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            arr_63 [i_0] [i_1] [i_0] [i_10] [i_13] = ((/* implicit */long long int) (-(var_18)));
                            arr_64 [i_0] [i_1] [(signed char)2] [i_10] [i_13] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) ? (arr_60 [i_0] [i_1] [i_9] [i_10] [i_0]) : (arr_60 [i_0] [6U] [(unsigned short)3] [i_10] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [(signed char)5] [i_1] [7] [i_10] [i_0])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        }
                        for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            arr_68 [i_14] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)2);
                            var_28 += ((/* implicit */unsigned char) var_0);
                        }
                        arr_69 [i_0] [i_1] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((min((var_13), (((/* implicit */long long int) arr_45 [i_0])))) + (9223372036854775807LL))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)253)))) - (1)))))) ? ((((-(((/* implicit */int) var_17)))) / (((/* implicit */int) arr_21 [i_0] [i_1] [i_9] [i_10] [i_0])))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (unsigned char)0))))) ? ((+(((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        /* LoopSeq 2 */
                        for (signed char i_15 = 1; i_15 < 18; i_15 += 2) 
                        {
                            arr_72 [i_0] [5U] [i_9] [i_10] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_9)))))) > (((((/* implicit */long long int) ((/* implicit */int) arr_71 [i_1] [i_1] [i_15 + 1] [8U] [i_0]))) / ((+(2688241862570509537LL)))))));
                            arr_73 [i_15 + 3] [(_Bool)1] [i_9] [i_0] [(_Bool)1] [i_0] [i_0] = ((((/* implicit */int) (short)24100)) >> (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21))))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_77 [i_16] [i_0] [i_9] [i_9] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_67 [i_16] [i_10] [i_9] [i_1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))) >> (((((/* implicit */int) (unsigned short)65513)) - (65484)))));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                            arr_78 [(unsigned short)9] [i_10] [i_1] [i_0] [i_10] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) == (arr_66 [i_16] [i_1] [i_16] [11LL] [i_16] [i_0] [i_1])))), (((arr_48 [i_0] [i_1] [i_9] [i_10] [i_16]) | (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                            arr_79 [i_0] [4LL] &= ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_9])) / (((/* implicit */int) arr_71 [i_0] [i_0] [i_9] [i_10] [12U]))))), (8545489586293849895LL)))));
                        }
                    }
                    for (unsigned int i_17 = 2; i_17 < 19; i_17 += 1) 
                    {
                        arr_82 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) 2688241862570509527LL);
                        arr_83 [i_0] [i_0] [i_9] [i_0] [i_17] = ((/* implicit */_Bool) arr_57 [i_17] [i_9] [i_1] [18U] [i_0]);
                        arr_84 [i_17] [i_17 + 1] [11U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 15640659620114279023ULL)) ? (-2688241862570509537LL) : (-2688241862570509538LL)));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_18 = 1; i_18 < 18; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 3; i_19 < 19; i_19 += 1) 
                    {
                        for (short i_20 = 1; i_20 < 20; i_20 += 2) 
                        {
                            {
                                arr_92 [(signed char)5] [i_1] [i_20 + 1] [i_0] [i_19 - 1] [i_1] [i_0] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_3)))))), (var_6));
                                var_30 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) arr_88 [(unsigned char)7])) / (var_6))), (((/* implicit */long long int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_19))))))));
                            }
                        } 
                    } 
                    arr_93 [i_0] [i_1] [13ULL] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) -2688241862570509537LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) -2688241862570509538LL)) ? (2688241862570509536LL) : (((/* implicit */long long int) var_18)))))) | (((((/* implicit */_Bool) ((var_0) | (2806084453595272586ULL)))) ? (max((-7250403883224172541LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_18 + 3] [i_1] [i_0])))))));
                    var_31 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) 6743775481816853761LL))), (((((/* implicit */_Bool) arr_43 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_18])))))))));
                }
                for (unsigned char i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    arr_96 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((long long int) (~(((/* implicit */int) var_1)))))));
                    arr_97 [i_0] [i_21] [3ULL] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39)))))), (((((/* implicit */_Bool) 4252062385U)) ? (2806084453595272578ULL) : (((/* implicit */unsigned long long int) 1368842597))))));
                }
                arr_98 [i_0] = ((/* implicit */unsigned char) var_5);
                arr_99 [i_0] [7LL] [i_0] = ((/* implicit */unsigned char) (~((-(31ULL)))));
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3359918679U)))) ? ((~(-2351673643463922079LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_17)))))))), (((((/* implicit */unsigned long long int) -7250403883224172541LL)) | (((10742103937710905028ULL) & (((/* implicit */unsigned long long int) 4305913559514726766LL))))))));
}
