/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23893
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 2] [i_0 - 2] [i_1] = ((/* implicit */unsigned char) ((_Bool) -1LL));
                    arr_9 [i_1] = ((/* implicit */signed char) ((long long int) -1));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(1186684087))))));
                }
            } 
        } 
        var_22 = arr_1 [i_0];
    }
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    arr_20 [i_3] [i_3] [i_5] = ((/* implicit */short) var_8);
                    arr_21 [i_5] [i_3 - 2] = ((/* implicit */_Bool) (~(-5611066645281762652LL)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) arr_23 [i_3] [i_6] [i_7]);
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_10 [i_3 + 1]) ? (((/* implicit */int) arr_10 [i_3 - 1])) : (((/* implicit */int) arr_10 [i_3 - 2]))))) ? (((((/* implicit */_Bool) 5611066645281762640LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2444))) : (-5611066645281762640LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1500812111)) || (((/* implicit */_Bool) (short)19044))))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((907056798), (((/* implicit */int) (signed char)64))))))) ? (2050280919) : ((+(((int) (signed char)-126))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) (unsigned char)241);
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -5666896689524146702LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)49850))))) > (((((/* implicit */_Bool) ((unsigned long long int) (short)-7490))) ? (((/* implicit */long long int) -1500812111)) : (-5652434356149780879LL)))));
                }
            } 
        } 
        arr_27 [i_3 - 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)255))));
        /* LoopNest 2 */
        for (signed char i_8 = 2; i_8 < 14; i_8 += 1) 
        {
            for (int i_9 = 1; i_9 < 13; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11308463029151539943ULL)) ? ((~(((/* implicit */int) (unsigned char)143)))) : (((int) -5666896689524146702LL)))))));
                                var_29 = ((/* implicit */signed char) (+(1022534963)));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25056))) : (((unsigned long long int) 698499285))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */long long int) -295627948)) : (4611686018427387903LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned short)65535)) ? (-652705590) : (-59304110))) + (652705643)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1825661260)) ? (((/* implicit */long long int) 131071)) : (-5611066645281762641LL)));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)9]))) : (arr_22 [i_3] [i_8 - 2] [i_9 + 1] [12LL] [i_8] [i_8])))) << (((((/* implicit */int) (signed char)34)) - (22))))))));
                        var_34 = ((/* implicit */int) arr_41 [i_12] [i_9] [i_9] [i_9] [i_3 - 1]);
                    }
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        arr_44 [i_3] [i_3] [i_8] [i_9] [i_9] [i_13] = ((/* implicit */long long int) arr_32 [(unsigned char)9] [i_3 - 1] [i_3 - 2] [i_3]);
                        var_35 = ((/* implicit */unsigned short) (-(-2140357415)));
                        var_36 = ((/* implicit */int) arr_14 [i_3 - 1] [i_9]);
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)16)) ? (11596983032965571392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
                        arr_45 [i_9] [i_8 - 1] = ((/* implicit */signed char) arr_23 [i_3] [i_8 - 2] [i_13]);
                    }
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)19)))))));
                    var_39 = (!(((/* implicit */_Bool) 5611066645281762652LL)));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned int) ((short) (unsigned char)26));
    }
    for (unsigned int i_14 = 2; i_14 < 14; i_14 += 4) /* same iter space */
    {
        arr_50 [i_14] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) -1500812111)) - (2305843009213693951LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-1))) / (-2305843009213693952LL))) : (((/* implicit */long long int) 7U)))));
        /* LoopSeq 4 */
        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 1) 
        {
            arr_55 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((_Bool)1) ? (830534752) : (752602039)))) ^ (min((arr_33 [i_14 + 1] [i_14 + 1] [i_15 + 1] [i_15] [i_15 + 1]), (((/* implicit */unsigned int) (short)0))))));
            arr_56 [i_15] = ((/* implicit */unsigned short) arr_38 [i_14] [i_14] [i_14] [i_15]);
            var_41 = ((/* implicit */unsigned short) var_10);
        }
        for (short i_16 = 1; i_16 < 14; i_16 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */short) ((var_2) >> (((((min((-2274238678975536006LL), (((/* implicit */long long int) (_Bool)1)))) | (((/* implicit */long long int) arr_14 [i_14 - 2] [i_14 - 1])))) + (2274238678669199776LL)))));
            var_43 = ((/* implicit */long long int) arr_39 [12] [i_16 + 1] [i_16 + 1]);
        }
        for (short i_17 = 1; i_17 < 14; i_17 += 1) /* same iter space */
        {
            var_44 = min((((/* implicit */int) arr_57 [i_14 + 1] [i_17])), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16899))))) ? (((((/* implicit */_Bool) -8219608211343780915LL)) ? (((/* implicit */int) (short)1)) : (1500812111))) : (((/* implicit */int) arr_13 [i_17] [i_17])))));
            var_45 += ((/* implicit */unsigned char) var_7);
            var_46 *= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_4)) ? (arr_19 [i_14] [i_14] [i_17] [i_17]) : (((/* implicit */long long int) arr_33 [i_14] [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
            {
                arr_64 [i_14] = ((/* implicit */long long int) arr_52 [i_17 - 1] [i_14 - 2]);
                var_47 -= ((/* implicit */_Bool) max((arr_36 [i_14] [(_Bool)0] [i_14] [(signed char)9] [i_14 - 1]), (((/* implicit */unsigned long long int) -1LL))));
                var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_40 [i_17] [i_17] [i_17] [i_17] [i_17 + 1] [i_17]))));
                var_49 *= ((/* implicit */unsigned short) 15616905048617002165ULL);
            }
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
            {
                arr_69 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_68 [i_17 - 1] [i_17 + 1] [i_14 - 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 4; i_20 < 14; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        {
                            arr_76 [i_14] [i_17] [i_17] [i_19] [4] [i_21] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)46)))));
                            arr_77 [i_21] = ((/* implicit */short) arr_70 [i_21] [i_17]);
                            arr_78 [i_21] [i_21] [i_19] [(unsigned char)4] [i_21] [i_14] = ((/* implicit */unsigned long long int) (-(arr_61 [i_14 + 1] [i_17 + 1])));
                        }
                    } 
                } 
            }
            var_50 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))) >> (((((/* implicit */int) (unsigned char)243)) - (212))))));
        }
        for (short i_22 = 1; i_22 < 14; i_22 += 1) /* same iter space */
        {
            arr_81 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) (_Bool)1))));
            arr_82 [i_14 - 1] [i_14 - 1] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_12 [i_22])) ? (var_9) : (((/* implicit */long long int) arr_43 [i_14] [(unsigned char)10] [10LL] [i_22] [i_22 + 1])))))) ? (((/* implicit */int) arr_65 [i_14 - 2] [8ULL] [i_14 - 2])) : (arr_47 [i_14])));
        }
        arr_83 [i_14] = ((/* implicit */unsigned char) arr_35 [i_14] [(_Bool)1] [i_14] [i_14] [i_14] [i_14 + 1] [i_14]);
        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) arr_24 [i_14 - 1]))));
    }
    var_52 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -9003152545233427005LL)) : ((~(var_18)))));
}
