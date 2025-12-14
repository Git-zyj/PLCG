/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46690
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
    var_10 |= ((/* implicit */short) (-(max((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_9))))), (max((((/* implicit */long long int) var_4)), (var_1)))))));
    var_11 = (unsigned char)185;
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)155)), ((short)-1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        var_13 |= ((/* implicit */unsigned char) 18446744073709551615ULL);
                        arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (22ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_14 ^= ((/* implicit */short) (~(((/* implicit */int) var_8))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)47))));
                    }
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((3002531829027885172LL), (((/* implicit */long long int) (short)15827)))))));
                    arr_15 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (5ULL) : (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (var_4))))))))) >= (var_0)));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_24 [i_6] [i_5 + 3] [i_1] [i_1] [i_1] [i_6] |= ((/* implicit */unsigned int) var_2);
                                var_16 = ((/* implicit */signed char) ((long long int) min(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)0)))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (unsigned char)158);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-108))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (min((var_0), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)31078)))), (((/* implicit */int) min(((short)643), ((short)-656)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 4; i_7 < 8; i_7 += 1) /* same iter space */
                    {
                        var_18 -= ((/* implicit */signed char) 5543456603924819056ULL);
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                        var_20 = ((/* implicit */signed char) var_8);
                    }
                    for (short i_8 = 4; i_8 < 8; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned char)52))));
                        var_22 *= ((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)72))))));
                    }
                    var_23 = (!(((/* implicit */_Bool) var_9)));
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 3; i_10 < 6; i_10 += 2) 
                    {
                        for (int i_11 = 2; i_11 < 8; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) (short)-23031);
                                var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_21 [i_0] [i_0])))) == (((long long int) var_3))));
                            }
                        } 
                    } 
                    arr_40 [i_9] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)1008))));
                }
                var_26 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)31078))) < (arr_21 [i_1] [i_0]))) && (((/* implicit */_Bool) (-(arr_21 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)72))));
        var_28 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_6)), (min((12903287469784732559ULL), (((/* implicit */unsigned long long int) var_6)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12903287469784732560ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)))) ? ((-(5543456603924819056ULL))) : (((/* implicit */unsigned long long int) var_4))))));
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((458362418203702826LL), (((/* implicit */long long int) (_Bool)0))));
                        var_30 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) var_7)) | (3428926220U))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((-8607139051172518906LL) / (((/* implicit */long long int) var_7))));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)191)) % (((((/* implicit */int) (short)32741)) + (((/* implicit */int) var_8))))));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_8))) >= (-970285754))))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)96)) + (((/* implicit */int) (unsigned char)229))));
                        }
                    } 
                } 
            }
            for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
            {
                var_35 = ((/* implicit */_Bool) (unsigned char)203);
                arr_63 [i_12] [i_13] [i_19] = min((var_3), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)26409)) ? (672577162U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31072))))))));
                arr_64 [i_12] [i_12] [i_13] [i_19] = ((/* implicit */signed char) var_8);
            }
            for (unsigned short i_20 = 4; i_20 < 11; i_20 += 1) 
            {
                arr_68 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32741))) / (6627455963516063722LL)));
                arr_69 [i_12] [i_13] [i_20 - 4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) -1763762963)) : (3622390133U)));
            }
            for (signed char i_21 = 0; i_21 < 14; i_21 += 3) 
            {
                arr_74 [i_21] [i_13] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (11727572313350445834ULL)))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (672577160U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46237))))) : (((/* implicit */unsigned int) (~(var_7))))));
                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (+(((((((/* implicit */_Bool) 6719171760359105785ULL)) ? (2906745567U) : (672577158U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                /* LoopSeq 1 */
                for (int i_22 = 2; i_22 < 11; i_22 += 3) 
                {
                    var_37 = ((/* implicit */int) var_0);
                    var_38 = ((/* implicit */unsigned int) max(((+(((((/* implicit */int) var_8)) << (((-458362418203702829LL) + (458362418203702851LL))))))), (((((/* implicit */int) arr_60 [i_13] [i_22 - 2] [i_22 - 1] [i_22 + 3])) * (((/* implicit */int) min((var_5), (var_5))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    for (short i_24 = 2; i_24 < 10; i_24 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (333128129U)))), ((~(arr_70 [i_13] [i_21]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) var_2))))) : (var_1)))));
                            arr_82 [i_12] [i_13] [i_13] [i_21] [i_23 - 1] [i_24 + 1] [i_13] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_49 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_24 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_24 + 3]))) : (var_0))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (unsigned char)16)))))));
                            var_40 = ((/* implicit */_Bool) min((var_40), (((((((/* implicit */_Bool) ((var_8) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106)))))) ? (((/* implicit */int) max(((short)-12264), (((/* implicit */short) (unsigned char)218))))) : (((int) var_5)))) < (arr_67 [i_12] [i_12])))));
                            var_41 = ((/* implicit */unsigned int) var_2);
                            var_42 |= ((/* implicit */unsigned int) ((unsigned char) (((-(var_1))) <= (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
            }
            arr_83 [i_13] [i_13] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_80 [i_13] [i_13] [i_12] [i_13])))));
            arr_84 [i_12] = ((/* implicit */long long int) ((((/* implicit */long long int) 895895831U)) > (1779234319398891249LL)));
        }
        /* LoopNest 2 */
        for (unsigned int i_25 = 2; i_25 < 13; i_25 += 4) 
        {
            for (long long int i_26 = 0; i_26 < 14; i_26 += 1) 
            {
                {
                    var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) ((unsigned int) var_4))))));
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (+(max(((~(6719171760359105773ULL))), (((/* implicit */unsigned long long int) var_4)))))))));
                    var_45 = ((/* implicit */short) (-(max((-458362418203702829LL), (((/* implicit */long long int) var_5))))));
                    var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((((((long long int) var_0)) + (9223372036854775807LL))) << (((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_49 [i_26] [i_26] [i_25 - 2] [i_25 - 2]))))) - (221))))))));
                }
            } 
        } 
        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)31078)) + (((/* implicit */int) (signed char)48))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))))) : (((((6719171760359105782ULL) + (((/* implicit */unsigned long long int) 620001211)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned char i_28 = 0; i_28 < 21; i_28 += 3) 
        {
            arr_95 [i_27] = ((/* implicit */int) ((((((/* implicit */_Bool) 11727572313350445834ULL)) && (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) ((var_7) | (var_4))))));
            /* LoopNest 3 */
            for (unsigned int i_29 = 0; i_29 < 21; i_29 += 2) 
            {
                for (unsigned char i_30 = 1; i_30 < 19; i_30 += 4) 
                {
                    for (int i_31 = 0; i_31 < 21; i_31 += 2) 
                    {
                        {
                            arr_103 [i_29] [i_29] [i_28] [i_29] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_93 [i_27]))));
                            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_93 [i_29])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))) : (var_1))) : (((/* implicit */long long int) ((var_7) & (var_7))))));
                            arr_104 [i_31] [i_31] [i_31] [i_31] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (-998377380) : (((/* implicit */int) (_Bool)1))));
                            arr_105 [i_27] [i_28] [i_27] [i_30] [i_31] = ((/* implicit */short) var_5);
                            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) var_9))));
                        }
                    } 
                } 
            } 
        }
        var_51 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2050024330)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13)))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_2))))));
    }
}
