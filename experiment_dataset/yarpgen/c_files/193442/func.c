/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193442
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((min((arr_0 [i_0] [i_1]), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned char)152)))))));
                var_17 = ((/* implicit */unsigned char) 9223372036854775804LL);
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) 4233490839U)), (-8474842708433180405LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (616210092913165563LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)0)), (-616210092913165549LL)))) ? (((arr_2 [i_1] [i_2]) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (unsigned short)28112)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0])), ((unsigned short)28210))))))) : (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) : (15173927737804479555ULL)))));
                                arr_12 [i_0] [i_1] [(_Bool)1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) 0);
                                arr_13 [i_1] [i_2] [i_1] = ((/* implicit */int) max((max((7978485205668438467ULL), (((/* implicit */unsigned long long int) (unsigned short)12631)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1467970973U)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    arr_17 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */_Bool) (unsigned char)215)) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_0] [i_5 + 2])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), ((unsigned char)174)))))) + (368668364)))));
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((max((((/* implicit */int) (unsigned char)143)), (((((/* implicit */int) (short)4032)) ^ (((/* implicit */int) (unsigned short)65531)))))), (((/* implicit */int) (short)-10000))));
                        arr_20 [i_0] [i_1] [i_5] [(_Bool)1] [9U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_16 [i_5 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31581))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_16 [i_1])), (((arr_0 [i_0] [i_1]) - (((/* implicit */int) arr_2 [i_1] [i_1]))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)79)), (1ULL)))) ? (((-616210092913165555LL) ^ (4503599627370495LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
                    }
                    for (signed char i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((min((min((1841350378991990360ULL), (((/* implicit */unsigned long long int) (unsigned short)60827)))), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_5] [i_7 - 3] [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_5] [i_5 + 1]))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_18 [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7])) ? (((/* implicit */int) (short)27693)) : (((/* implicit */int) arr_1 [i_5 + 1] [i_1])))), (((/* implicit */int) ((1538531847857461505LL) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7 - 2] [i_1] [i_1] [i_5 + 2]))))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)178)), (arr_14 [i_7 - 2] [i_1] [i_5 - 2] [i_7 - 2])))) > (((/* implicit */int) ((short) 4080U)))));
                        arr_24 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) 847073922U)), (729423368517838932ULL)))));
                    }
                    for (long long int i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */long long int) (-2147483647 - 1));
                        arr_29 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((3109937206U), (((/* implicit */unsigned int) arr_18 [i_0] [i_8] [12ULL] [(_Bool)1])))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518)))))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */_Bool) ((unsigned short) arr_11 [i_0] [i_8] [i_0] [i_0] [i_8]))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_6 [i_8 + 1] [i_0] [i_5 + 2] [i_8] [i_0]))))));
                        arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) min(((unsigned char)24), (((/* implicit */unsigned char) (signed char)-20))));
                        var_22 = ((/* implicit */unsigned int) min((min((min((7), (arr_21 [i_0] [i_1]))), (((((/* implicit */int) arr_26 [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned short)21074)))))), (((/* implicit */int) ((_Bool) (short)2)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        arr_34 [i_0] [i_0] [i_1] [i_5] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [(unsigned char)19] [(unsigned char)19] [13ULL] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_1] [i_5] [i_9]))) : (2009145299U))), (((/* implicit */unsigned int) ((_Bool) arr_15 [i_0] [i_0] [i_5 + 4] [i_0])))));
                        var_23 = ((/* implicit */unsigned char) ((int) min((max(((unsigned char)98), (((/* implicit */unsigned char) arr_5 [i_0])))), (((/* implicit */unsigned char) arr_5 [i_9])))));
                    }
                }
                for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_4 [i_0] [i_1] [i_10] [(short)9]), (arr_16 [i_0])))) > (((/* implicit */int) min(((unsigned char)49), ((unsigned char)106))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            {
                                arr_43 [i_11] [i_1] [i_1] [i_1] [i_10] [11] = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */long long int) -1433103519)), (-1498958156866306974LL))));
                                arr_44 [i_10] [i_12] [i_11] [i_11] [i_12 - 1] [i_12 - 1] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((1433103531), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_10] [i_0] [i_0]))))))), (616210092913165555LL)));
                                arr_45 [i_0] [i_10] = ((((((/* implicit */_Bool) min(((unsigned short)65528), (((/* implicit */unsigned short) arr_32 [i_0] [i_10] [i_0] [i_11]))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) 2670198483U)), (-5160185453652476836LL)))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15978982130509208033ULL)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (unsigned char)62)))));
                                arr_46 [i_0] [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_18 [i_12 - 1] [i_12] [i_12] [i_12]) : (((/* implicit */int) (short)12651))))) == (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13452)) - (((/* implicit */int) (unsigned char)178))))) & (14113177725418921712ULL)))));
                            }
                        } 
                    } 
                    arr_47 [i_10] = ((/* implicit */unsigned int) 0ULL);
                    arr_48 [i_10] [(unsigned char)15] [(unsigned char)15] = ((/* implicit */unsigned short) arr_27 [i_0] [i_1] [i_10] [i_1]);
                }
                for (unsigned int i_13 = 2; i_13 < 17; i_13 += 3) 
                {
                    arr_52 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_1] [i_13] [i_13 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_13 - 1] [i_13 - 1] [i_13]))))) ? (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]) ? (arr_25 [i_0] [i_0] [i_13 - 2] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32232))))) : (((arr_25 [i_13 + 2] [i_13 + 3] [i_13 - 2] [i_13 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)12651)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_25 = (unsigned char)158;
                        arr_55 [i_13] [i_1] [i_13] [i_13] [(unsigned short)11] = min((((/* implicit */unsigned long long int) (unsigned char)27)), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) == (13LL)))), (min((((/* implicit */unsigned long long int) (unsigned char)99)), (15978982130509208039ULL))))));
                        arr_56 [i_0] [i_1] [(signed char)11] [18LL] [i_13] = ((/* implicit */unsigned short) ((7923218560487207645ULL) < (((/* implicit */unsigned long long int) 0LL))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        arr_59 [i_0] [i_13] [i_13 - 1] [13U] [i_13] [i_0] = ((((((/* implicit */_Bool) min((72577278U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_13 + 3]))) : (1408550590U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15978982130509208047ULL)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)40)), ((short)12651)))) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_15] [i_15] [i_15] [i_1]))))));
                        arr_60 [i_0] [i_0] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 10523525513222343971ULL)))) < (min((((/* implicit */unsigned long long int) arr_18 [i_0] [13] [13] [i_13 + 3])), (((((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_13 + 1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10523525513222343974ULL)))))));
                        var_26 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)38462)), (2191864635991347318LL)))) + (0ULL))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 612278992U)) : (max((9969352891187556092ULL), (((/* implicit */unsigned long long int) (unsigned short)21244))))))));
                        var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) min(((signed char)12), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) min(((_Bool)0), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */int) (unsigned char)4))));
                        arr_61 [i_13] [i_13] [i_13] [i_15] [i_0] = 433233994U;
                    }
                    for (unsigned int i_16 = 2; i_16 < 18; i_16 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) arr_51 [i_1] [i_16]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_17 = 1; i_17 < 18; i_17 += 1) /* same iter space */
                        {
                            arr_67 [(_Bool)1] [i_1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-1))));
                            var_29 = ((/* implicit */_Bool) (short)-6249);
                            arr_68 [i_0] [i_1] [i_13] [i_16 + 1] [i_1] [i_13] [i_16] = ((/* implicit */unsigned char) ((_Bool) (short)-23152));
                        }
                        for (long long int i_18 = 1; i_18 < 18; i_18 += 1) /* same iter space */
                        {
                            arr_72 [i_13] [i_1] = ((/* implicit */unsigned int) (short)-18472);
                            arr_73 [i_13] = ((/* implicit */_Bool) -357296489);
                            var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_38 [i_13 - 2] [i_13] [i_16 + 2] [i_18 + 2] [i_18 + 2])), ((short)28690)))), (((unsigned long long int) arr_38 [i_13 - 2] [i_13] [i_16 - 1] [i_18 - 1] [i_18 + 2]))));
                        }
                    }
                    var_31 = min((((/* implicit */unsigned long long int) 0U)), (min((((unsigned long long int) (short)-16668)), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))));
                }
                for (unsigned int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_20 = 3; i_20 < 19; i_20 += 4) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 1) 
                        {
                            {
                                arr_83 [12] [12] [i_19] [i_21] [12] [i_20] [(unsigned short)17] = arr_70 [i_0] [i_0] [i_0] [i_0] [i_20] [i_21] [i_21];
                                var_32 = max((-985923045), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 985923052)) ? (((/* implicit */int) (unsigned char)1)) : (-357296489))))));
                                arr_84 [i_0] [i_1] [i_21] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) (unsigned char)224)), (5696340113748690107LL))))) ? (min((((((/* implicit */_Bool) 886855308U)) ? (533244374536586942LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned char)10] [i_1])))));
                                arr_85 [i_21] [i_1] [i_19] [i_0] [i_21] = ((/* implicit */long long int) (unsigned short)32991);
                            }
                        } 
                    } 
                    arr_86 [i_0] [i_0] [(unsigned short)14] = ((/* implicit */short) max((((/* implicit */long long int) 1759542687U)), (max((((/* implicit */long long int) arr_54 [i_0] [i_0] [i_1] [i_0] [i_19])), (-1944644516203338638LL)))));
                    var_33 = ((/* implicit */unsigned short) arr_80 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_19]);
                    arr_87 [i_0] [i_0] [i_19] [i_1] = ((((/* implicit */_Bool) 7610468885957898865ULL)) ? (max((((/* implicit */unsigned long long int) (short)11553)), (0ULL))) : (min((11328122990191506602ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */short) (unsigned char)81);
}
