/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223259
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_2 - 3])) - (var_4)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [19] [(unsigned short)9])))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_2 [i_2 - 1]))));
                        var_20 = ((/* implicit */unsigned short) -1LL);
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */int) max(((-(-7LL))), ((~(-1LL)))));
                            var_22 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58212))) ^ (16LL));
                        }
                        var_23 = ((_Bool) ((unsigned char) ((long long int) var_0)));
                    }
                    for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            var_24 ^= ((/* implicit */unsigned short) ((((((arr_16 [i_0] [i_0]) < (var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_6 - 2] [i_1])) > (arr_0 [4LL]))))) : (max((((/* implicit */unsigned long long int) 4LL)), (3465599777587003376ULL))))) / (((/* implicit */unsigned long long int) arr_13 [i_6 + 1] [i_5] [15U] [i_1]))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17LL)) ? (11LL) : (-3228699076560894179LL)));
                            var_26 |= ((/* implicit */int) arr_7 [i_0] [i_6 + 1]);
                        }
                        var_27 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_4 [i_2 - 2])))) >> (((/* implicit */int) ((5277128899916954062LL) < (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_2 + 1] [16]), (((/* implicit */signed char) var_0)))))))))));
                    }
                    for (int i_7 = 4; i_7 < 19; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((var_13) ? (((((/* implicit */_Bool) arr_17 [i_0] [2U] [2U] [2U] [i_7] [(unsigned short)8])) ? (arr_6 [i_0] [i_2 - 3] [i_2 - 3] [i_7 - 1]) : (2961535644886418749ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7 - 2] [i_7 + 1] [i_2 - 3] [i_2 - 2])) && (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_20 [i_0] [i_7 - 3] [i_2 - 1] [i_0] [i_0] [i_7 - 4] [i_0]))))))))));
                            var_29 *= ((/* implicit */long long int) var_15);
                            arr_22 [i_0] [i_1] [i_2] [i_7 - 3] [17LL] [0ULL] = ((/* implicit */unsigned long long int) ((unsigned char) min((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (19LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_30 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_1 [4LL] [4LL]))));
                        var_32 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0]))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_20 [i_0] [i_0] [i_7 - 2] [i_7] [i_1] [i_0] [i_2 - 3]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 26LL)) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0]))))) / (((((/* implicit */int) (signed char)29)) << (((-1189240180) + (1189240201)))))))) : (var_3)));
                    }
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        arr_26 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_4);
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) || (((_Bool) min((13364445620219359065ULL), (((/* implicit */unsigned long long int) arr_21 [i_1] [(unsigned short)18] [i_2] [i_9 + 1] [i_1])))))));
                    }
                    var_35 = min((13160591903339729146ULL), (((/* implicit */unsigned long long int) (unsigned char)255)));
                    arr_27 [2] = ((/* implicit */int) var_3);
                }
            } 
        } 
    } 
    var_36 |= ((/* implicit */long long int) ((var_13) ? ((((-(var_14))) | ((+(((/* implicit */int) (signed char)29)))))) : (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (short i_10 = 4; i_10 < 8; i_10 += 1) 
    {
        arr_31 [i_10 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_11)))), (min((((((/* implicit */int) (signed char)-41)) + (((/* implicit */int) (signed char)-12)))), ((+(((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (unsigned int i_12 = 2; i_12 < 8; i_12 += 1) 
            {
                {
                    var_37 = ((/* implicit */_Bool) ((unsigned short) -1LL));
                    arr_39 [11U] [i_11] [i_12 + 2] = ((/* implicit */short) min((((/* implicit */long long int) 1822915775)), (-1LL)));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) (+(((/* implicit */int) (((-(1423917789U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1023LL)))))))))));
                                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_14] [i_14])) ? (-3228699076560894186LL) : (((/* implicit */long long int) (+((~(((/* implicit */int) arr_11 [i_14] [12LL])))))))));
                                arr_45 [i_13] [i_11] [i_13] [i_12] [i_11] [3LL] = ((/* implicit */unsigned short) arr_36 [i_14] [i_11] [i_10 + 4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 3; i_15 < 10; i_15 += 4) 
                    {
                        for (long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                        {
                            {
                                arr_51 [8ULL] [i_11] [i_11] [(unsigned short)2] [i_15] [i_15] [i_16 - 1] = ((/* implicit */signed char) (+(((long long int) (signed char)-59))));
                                var_40 = arr_43 [i_10] [i_10 - 1] [i_10] [i_10 + 4] [i_10 - 4];
                                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)60731))))) : (min((-3228699076560894168LL), (((/* implicit */long long int) -1))))))) ? (min((arr_24 [6LL] [i_10 - 1] [i_15 - 2] [i_16 - 1] [i_16]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_16 - 1] [i_10] [i_12] [i_10]))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_17)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        var_42 += ((((/* implicit */int) ((short) (_Bool)0))) >> ((((+(((var_0) ? (-3228699076560894168LL) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [(unsigned char)8] [i_12 - 2] [i_11] [(unsigned char)8]))))))) + (3228699076560894171LL))));
                        arr_54 [7U] [i_17] [i_11] [i_11] [i_10] [i_10 - 3] = min((((((/* implicit */_Bool) min((arr_14 [i_10] [i_10] [i_12 + 2] [i_12] [i_17] [i_10]), (((/* implicit */unsigned long long int) (unsigned short)54723))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) arr_43 [i_10 - 2] [i_11] [i_12] [i_17] [(signed char)7])));
                    }
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) ((arr_33 [i_11] [i_11] [i_12]) | (4102170790652803485LL)));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3978363582U)))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((2481425558U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        arr_61 [i_10] [i_10] [i_11] [i_11] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_59 [i_11] [i_19]) ? (arr_23 [i_12 + 2] [i_11] [i_11] [5] [i_12 + 2] [i_10 + 1]) : (-327611180)))) ? (((/* implicit */int) min((arr_53 [i_10 - 1]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_0))));
                        var_45 = ((/* implicit */unsigned char) -14LL);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 1) 
    {
        var_46 ^= ((/* implicit */long long int) ((((arr_8 [i_20] [i_20] [i_20]) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))))) & ((+((+(var_10)))))));
        var_47 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) ((short) var_14))))) + (2147483647))) << (((((/* implicit */int) var_2)) - (19132)))));
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            for (signed char i_22 = 1; i_22 < 16; i_22 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_23 = 2; i_23 < 16; i_23 += 3) 
                    {
                        for (unsigned char i_24 = 4; i_24 < 17; i_24 += 1) 
                        {
                            {
                                arr_75 [i_22] [(_Bool)1] [i_22] [i_21] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [12ULL] [12ULL]))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-12LL))) : (((/* implicit */long long int) max((var_14), (((/* implicit */int) (short)7243)))))))) ? (((/* implicit */int) ((_Bool) (~(919522559))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_69 [12U] [i_23] [i_22] [i_21])) >= (((/* implicit */int) (signed char)-29)))))))));
                                var_48 = ((/* implicit */unsigned long long int) ((max((327611179), (((/* implicit */int) var_17)))) >> (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned int) var_14)) : (316603730U)))))));
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_25 = 2; i_25 < 9; i_25 += 4) 
    {
        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_25 - 2] [i_25] [i_25 - 1] [i_25] [(unsigned char)10])) ? (((((/* implicit */_Bool) arr_48 [i_25] [i_25 - 2] [i_25 - 2] [i_25] [i_25] [i_25] [i_25])) ? (1595396534U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_25] [i_25 + 1] [i_25] [i_25 + 2] [i_25] [i_25]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        arr_79 [0] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_50 [i_25 - 1] [i_25 + 1])) : (((/* implicit */int) var_17))));
        arr_80 [i_25] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << ((((-(((/* implicit */int) (_Bool)1)))) + (13)))));
    }
}
