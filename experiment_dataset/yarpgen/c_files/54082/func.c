/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54082
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) (-(-6823260672703991594LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12890))) : (((((/* implicit */_Bool) 0ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((max((((/* implicit */unsigned long long int) 4294967295U)), (((1985831695340119399ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))))), (((/* implicit */unsigned long long int) 67108863LL))))));
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) + (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) min((-6056759383953633435LL), (((/* implicit */long long int) (signed char)-50))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_1] [i_0]) : (1985831695340119389ULL)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((unsigned short)6384), (var_7)))), (((((/* implicit */_Bool) 4109041875537517522ULL)) ? (arr_0 [i_0] [i_4]) : (arr_0 [i_0] [i_1])))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (arr_5 [i_0] [i_1] [i_2] [i_3])));
                                var_19 -= ((/* implicit */signed char) ((((arr_11 [i_3] [i_3] [i_3]) / (arr_11 [i_1] [i_1] [i_1]))) * (((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-52)))))));
                                var_20 *= (~(((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (5965932884091317545LL))));
                                var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((-5965932884091317546LL), (((/* implicit */long long int) (unsigned char)102))))) ? (((((/* implicit */_Bool) 5965932884091317552LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3285))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] |= ((/* implicit */unsigned char) arr_7 [i_0]);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14337702198172034113ULL)) ? (arr_11 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)49)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) (unsigned short)62237)), ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2])) : (5ULL)))))));
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)72))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)57306), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) & (-5965932884091317546LL)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned char)235)))) + (2147483647))) >> (((((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_1] [i_5] [i_5] [i_0]))))) - (18446744073709551597ULL)))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_23 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) -5965932884091317541LL)) ? (((/* implicit */unsigned long long int) -5965932884091317546LL)) : (2194663049892940755ULL))), (1117936946355351366ULL)));
                        var_24 *= ((/* implicit */signed char) ((((/* implicit */int) var_12)) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_13) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_5] [i_6]))) : (min((3848660448423815723LL), (((/* implicit */long long int) var_6)))))) - (58877LL)))));
                        arr_23 [i_0] [i_1] [i_1] [i_1] [i_6] [i_1] &= ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0]))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) 425666590)) + (8052570956958714623LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) <= (2194663049892940786ULL)))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        var_25 ^= ((/* implicit */signed char) ((int) (+(-425666606))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1703060377U)))))));
                        var_27 ^= ((/* implicit */unsigned int) (_Bool)1);
                    }
                    var_28 = ((unsigned int) var_1);
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 4; i_8 < 15; i_8 += 1) 
                {
                    arr_29 [i_8] [i_1] [i_8] [i_0] = ((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) -829972901)), (var_0))))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) (signed char)32))), ((-(arr_22 [i_8 - 1]))))))));
                    var_30 ^= ((/* implicit */_Bool) ((((-8176528355657872851LL) > (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (2591906919U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_12))) / (-1LL))), (((/* implicit */long long int) ((int) 284258958U)))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (int i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_4)))));
                            var_32 &= ((/* implicit */long long int) ((short) ((signed char) arr_26 [i_8 - 1] [i_10 - 3] [i_10] [i_10 - 1])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_9)))) + (((/* implicit */long long int) (-(829972916))))))) ? (((/* implicit */unsigned long long int) max((var_0), (((((/* implicit */_Bool) var_13)) ? (arr_11 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) arr_28 [i_0]))))))) : (5415318829611665438ULL))))));
                            arr_39 [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)0)), ((-9223372036854775807LL - 1LL))))), (max((((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_8])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (arr_21 [i_0] [i_0] [i_0] [i_0])))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))));
                            var_35 -= ((((_Bool) arr_22 [i_0])) ? (((/* implicit */int) ((8052570956958714623LL) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-8867)) > (((/* implicit */int) (unsigned char)7))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1390030188)) ? (9455527955524542365ULL) : (((/* implicit */unsigned long long int) 576460752303423487LL)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) -425666606))));
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) 1703060377U))));
                        }
                        for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (6303988281177002639LL) : (((/* implicit */long long int) ((int) arr_8 [i_8 - 1] [i_8 + 2] [i_8 + 3] [i_8 - 1]))))))));
                            var_39 *= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (_Bool)0))))), (arr_31 [i_8 - 2] [i_8 - 2] [i_8 + 3] [(_Bool)1] [i_13])))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (signed char)-14))))) ? (((((/* implicit */unsigned long long int) var_6)) & (4291060625777851781ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) 0)) : (3805040345U))))))));
                        }
                        var_40 ^= ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                        arr_44 [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_36 [i_8 + 2] [i_8 - 3] [i_8 - 2] [i_8 + 3] [i_8 - 4])) : (((/* implicit */int) arr_36 [i_8 + 2] [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8 + 2]))))) + (((var_13) | (((/* implicit */long long int) ((/* implicit */int) (signed char)11)))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 2; i_15 < 18; i_15 += 2) 
                        {
                            var_41 = -6823064096551679797LL;
                            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (short)-1))));
                        }
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            var_43 *= ((/* implicit */short) ((((/* implicit */_Bool) -576460752303423488LL)) ? (2006983901407978127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60556)))));
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (short)-26829))));
                            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3316984281U)) ? ((+(28829381U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)10113)))))));
                        }
                        arr_53 [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) 10688158995967143381ULL);
                        var_46 = ((/* implicit */long long int) ((((/* implicit */int) ((7794581531875865276LL) > (((/* implicit */long long int) 28829388U))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_8 - 3] [i_8] [i_8] [i_8 - 4] [i_14])))))));
                        var_47 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1]))) - (((((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52408))) : (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))))));
                        var_48 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_13) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221)))))) * (max((8868895803048112622ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7581201516659981366ULL)) ? (arr_32 [i_0] [i_0] [i_1] [i_0] [i_8 - 3] [i_8 - 3]) : (((/* implicit */long long int) arr_16 [i_0] [i_1])))))))));
                    }
                }
                /* vectorizable */
                for (short i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (~(4266137908U))))));
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_50 ^= ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                        var_51 = ((/* implicit */unsigned long long int) arr_1 [i_17] [i_1]);
                    }
                    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        arr_63 [i_19] [i_1] [i_17] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33841))) & (var_2)));
                        arr_64 [i_0] [i_1] [i_17] [i_19] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((unsigned int) arr_26 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */unsigned int) -1))));
                        /* LoopSeq 1 */
                        for (long long int i_20 = 0; i_20 < 19; i_20 += 1) 
                        {
                            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) 18446744073709551615ULL))));
                            var_53 |= ((((/* implicit */unsigned int) 0)) + (28829388U));
                        }
                        arr_69 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_17])))))) - (((((/* implicit */_Bool) 1729983906726021927LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_19] [i_0] [i_17] [i_1] [i_0]))))));
                    }
                    for (int i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_22 = 0; i_22 < 19; i_22 += 1) 
                        {
                            var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) 388283795118327598ULL))));
                            arr_76 [i_22] [i_21] [i_17] [i_1] [i_0] = 11194908883768098789ULL;
                            var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) var_13))));
                            arr_77 [i_0] = ((/* implicit */_Bool) 0);
                        }
                        for (unsigned short i_23 = 0; i_23 < 19; i_23 += 3) 
                        {
                            var_56 ^= ((/* implicit */short) (-(arr_21 [i_23] [i_17] [i_1] [i_0])));
                            var_57 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_66 [i_23] [i_21] [i_1] [i_17] [i_1] [i_0] [i_0]))));
                        }
                        for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 4) 
                        {
                            var_58 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_24] [i_21])) ? (6343473912421012104LL) : (17451448556060672LL)));
                            var_59 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_60 |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_40 [i_0] [i_0] [i_21]))));
                        }
                        for (unsigned int i_25 = 1; i_25 < 18; i_25 += 1) 
                        {
                            arr_86 [i_25 + 1] = ((/* implicit */short) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_71 [i_1] [i_1] [i_21] [i_25 - 1]))))));
                            var_61 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775793LL)) ? (((((/* implicit */_Bool) 4064574063U)) ? (((/* implicit */int) (_Bool)1)) : (arr_15 [i_1] [i_17] [i_21] [i_25 + 1]))) : (((/* implicit */int) (short)7393))));
                            arr_87 [i_0] [i_0] [i_17] [i_21] [i_25 - 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 4396848875934550253LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))));
                            var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : ((-(230393233U)))));
                        }
                        var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) var_11))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 2; i_26 < 15; i_26 += 3) 
                    {
                        var_64 = ((/* implicit */unsigned short) max((var_64), (((/* implicit */unsigned short) (-2147483647 - 1)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 3) 
                        {
                            var_65 = ((/* implicit */unsigned long long int) max((var_65), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_78 [i_1] [i_26 + 4] [i_1] [i_26] [i_26 - 2] [i_26 + 2])) > (arr_21 [i_1] [i_17] [i_17] [i_26 - 2]))))));
                            var_66 &= ((/* implicit */_Bool) ((4064574074U) * (((/* implicit */unsigned int) -1))));
                            var_67 = ((/* implicit */unsigned long long int) ((((var_10) + (9223372036854775807LL))) << (((15376659453408346855ULL) - (15376659453408346855ULL)))));
                        }
                        for (unsigned short i_28 = 0; i_28 < 19; i_28 += 1) 
                        {
                            arr_95 [i_0] [i_26] [i_26] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) (unsigned short)479))))) < (((((/* implicit */int) (unsigned short)65526)) / (((/* implicit */int) (signed char)63))))));
                            var_68 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_17] [i_26] [i_28] [i_28] [i_28])) ? (var_0) : (9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                        }
                        var_69 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)63479))));
                    }
                }
            }
        } 
    } 
    var_70 = ((/* implicit */unsigned int) min((var_70), (((/* implicit */unsigned int) ((unsigned long long int) var_5)))));
    var_71 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1) : (((/* implicit */int) (signed char)-66))));
    var_72 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))), (max((13489584022756854400ULL), (((/* implicit */unsigned long long int) -499636314)))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)42342)))))))));
}
