/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44686
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((max((((/* implicit */int) var_10)), ((~(((/* implicit */int) (unsigned short)40499)))))), (((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */unsigned char) ((var_9) ? (var_3) : (((/* implicit */int) (short)-14165))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))), (var_10))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) (~(1622860829)));
                    arr_9 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (1476109752)))), (max((arr_7 [i_2] [i_1] [i_0]), (((/* implicit */long long int) var_5))))));
                }
                for (long long int i_3 = 3; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (signed char)-27))));
                    arr_14 [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((signed char) (short)-11462));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-27)))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_1 [(unsigned short)14]))));
                }
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 18; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (1095896884) : (((/* implicit */int) (unsigned short)4))));
                        arr_22 [i_0] [i_1] [i_1] [(_Bool)1] [i_4 - 2] [i_1] = ((((((/* implicit */_Bool) 69818988363776ULL)) && (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_4])));
                        var_21 = ((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_0] [i_0]) - (((/* implicit */int) (signed char)-27)))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (signed char)20))))));
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 - 2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18917))) : (3760856897354470584LL))))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(-3760856897354470585LL))))));
                            var_25 *= ((/* implicit */_Bool) ((signed char) var_4));
                            var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48913))) | (-8733212191136087287LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))) : (-2158126204091507154LL)));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (8137453232307190225ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67)))));
                        }
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-(-3760856897354470599LL))))));
                            arr_29 [i_0] [17U] [i_4] [i_6] [i_8] [i_6] = ((((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) + (((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))))) | (659938199441825575LL));
                            var_29 = ((/* implicit */unsigned int) var_10);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_30 = ((((/* implicit */_Bool) var_6)) && (((((/* implicit */long long int) ((/* implicit */int) var_9))) < (281474976710400LL))));
                            var_31 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-11372)) ? (arr_24 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) var_11))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_38 [i_0] [0ULL] [i_4] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)63))));
                            var_32 = ((/* implicit */signed char) ((unsigned char) 3760856897354470575LL));
                            arr_39 [i_0] [16LL] [i_4] [16LL] [9U] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)252)) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-27)))))));
                        }
                        arr_40 [i_0] [i_4] [i_10] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4 - 2]));
                    }
                    for (long long int i_12 = 2; i_12 < 19; i_12 += 1) 
                    {
                        var_33 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (_Bool)0)) : (var_11)))) < (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_34 = ((unsigned long long int) var_8);
                        /* LoopSeq 2 */
                        for (short i_13 = 3; i_13 < 19; i_13 += 1) 
                        {
                            var_35 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-13))));
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) 1424152822))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                        }
                        for (int i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)28685)) <= (((/* implicit */int) arr_44 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_12 - 1] [i_12 - 2] [i_12 - 2]))));
                            arr_52 [(_Bool)1] [(short)11] [i_14] = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                            var_38 = ((/* implicit */unsigned char) var_11);
                            var_39 = ((/* implicit */signed char) var_12);
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_4] [i_4 + 2] [i_12 - 2] [4U])) * (((/* implicit */int) (signed char)-21))));
                        }
                        var_40 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_48 [i_12 + 1] [i_12] [i_12 + 1] [i_12 - 2] [i_12] [i_12] [(signed char)19]))));
                    }
                    var_41 += ((/* implicit */long long int) ((signed char) (signed char)-16));
                }
                /* LoopNest 3 */
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_62 [(signed char)19] [i_1] [i_15] [i_16] [(signed char)19] [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_1), (var_11)))) ? (((/* implicit */int) arr_57 [i_0] [i_1] [i_16])) : (((/* implicit */int) var_10))))));
                                var_42 = ((/* implicit */unsigned short) min((var_42), (var_8)));
                                arr_63 [i_0] [i_1] [i_15] [i_16] [i_17] [i_0] [(unsigned char)4] |= ((/* implicit */unsigned short) ((-3760856897354470585LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44483)))));
                                var_43 = ((/* implicit */signed char) (+((((((~(((/* implicit */int) (unsigned short)21068)))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) (unsigned short)58561)), (var_7))) - (1138587242352967843ULL)))))));
                                var_44 += ((/* implicit */int) ((((((long long int) (+(18446744073709551615ULL)))) + (9223372036854775807LL))) << ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))) > (18446744073709551615ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
