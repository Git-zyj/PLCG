/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47349
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
    var_14 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23684))));
            var_16 += (!(((/* implicit */_Bool) (unsigned short)23684)));
            arr_5 [i_0] [i_0] [8U] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)41855))))));
        }
        var_17 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4160749568U)) ? (((/* implicit */int) (unsigned short)41846)) : (((/* implicit */int) (short)28946))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_4)) : (var_11)));
                    var_19 = arr_11 [13U] [(unsigned short)3] [i_4] [i_4];
                    var_20 -= ((/* implicit */unsigned short) var_7);
                    arr_12 [i_2] [i_2] |= ((/* implicit */_Bool) (~(3911132502U)));
                }
                for (int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) (short)28946);
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_6] [i_6] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_6]))));
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26253))) * (arr_9 [i_2 + 1] [i_2 + 1] [i_6])));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)28936)) >= (((/* implicit */int) (short)28937))))) <= (((/* implicit */int) (short)28936)))))));
                            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) -1280540434)) ? (var_12) : (((/* implicit */int) arr_13 [i_2] [i_3] [i_5] [i_2 + 1])))) : ((+(((/* implicit */int) arr_18 [i_2 + 1] [i_2 + 1] [i_7] [i_7])))))), (((/* implicit */int) max((((unsigned short) var_6)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-23034))))))))));
                            var_25 = ((/* implicit */short) ((383834794U) == (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_2))))))));
                            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 126518592U)) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28923)))));
                        }
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                        {
                            arr_27 [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23703))) + (302737032081599087LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) ? ((~(((/* implicit */int) arr_7 [(short)4] [(short)4])))) : (((/* implicit */int) arr_20 [i_2 + 1] [i_2 + 1] [i_5] [i_9])))))));
                            var_27 = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1])), (((((/* implicit */_Bool) -7857424975342643326LL)) ? (((/* implicit */int) (short)28973)) : (((/* implicit */int) (signed char)127))))))));
                            var_28 *= ((/* implicit */unsigned int) arr_9 [i_2] [i_3] [i_7]);
                        }
                        arr_28 [(signed char)3] [(signed char)3] [i_5] [i_3] [i_7] = ((/* implicit */_Bool) arr_14 [i_2]);
                        arr_29 [i_7] [i_2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-117)) & (((/* implicit */int) (signed char)1))));
                        arr_30 [i_2 - 1] [i_7] [i_7] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((302737032081599083LL) >= (((/* implicit */long long int) var_11)))))) <= (((/* implicit */int) min((arr_7 [(short)1] [(short)1]), (((/* implicit */short) (!(((/* implicit */_Bool) var_7))))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_2] [i_2] [i_5] [i_10] [i_2] [i_3] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (unsigned short)23681)) : (((/* implicit */int) (short)-28936))))));
                        var_29 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_7 [i_2 - 1] [i_5])))) >= (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
                        var_30 = 1006632960;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_2] [(signed char)10] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */signed char) (unsigned short)41851);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15762598695796736LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-11))));
                        var_32 *= ((/* implicit */signed char) var_4);
                    }
                    arr_38 [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */int) (signed char)-13)) / (((/* implicit */int) (unsigned short)65524))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_42 [i_2] [i_12] [(_Bool)1] [i_3] = ((/* implicit */signed char) var_12);
                    arr_43 [(unsigned short)18] [12U] [12U] [i_12] = (~(((/* implicit */int) arr_40 [(unsigned short)2] [i_12] [i_12] [i_12])));
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)122)) ? (((/* implicit */long long int) 2057624888)) : (-1LL)));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (signed char)-109))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) -1805559135)), (((((/* implicit */_Bool) (short)28936)) ? (((/* implicit */unsigned int) -1453873631)) : (126518592U))))))));
                    arr_49 [i_2] [(short)16] [i_14] = ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) 1280540431)) : (2360563111U));
                }
                for (unsigned short i_15 = 4; i_15 < 15; i_15 += 4) 
                {
                    arr_52 [i_2 - 1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (unsigned short)65525)), (var_6))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_15 - 3] [i_2 - 2])) >> (((var_6) - (1652910216U))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                    {
                        arr_56 [i_2 + 1] [i_3] [i_16] [i_16] = (i_16 % 2 == zero) ? (((/* implicit */signed char) ((2360563090U) << (((((arr_15 [2U] [2U] [i_15] [i_16] [i_16] [i_3]) ? (((/* implicit */unsigned int) var_10)) : (var_5))) - (326912435U)))))) : (((/* implicit */signed char) ((2360563090U) << (((((((arr_15 [2U] [2U] [i_15] [i_16] [i_16] [i_3]) ? (((/* implicit */unsigned int) var_10)) : (var_5))) - (326912435U))) - (750231783U))))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_2 - 2] [i_3] [i_15 - 1] [i_16])) ? (((/* implicit */int) arr_48 [i_15 - 4] [i_3] [i_2 - 2])) : ((-(((/* implicit */int) arr_40 [i_2] [i_3] [i_2] [i_16]))))));
                    }
                    for (short i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
                    {
                        arr_60 [i_2] [i_3] [i_3] [i_17] = (~(2360563111U));
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_65 [(_Bool)1] [(_Bool)1] [i_15] [i_17] [i_17] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)32797))))));
                            var_37 = ((/* implicit */short) arr_61 [i_17] [i_17] [i_15] [i_17] [i_15]);
                            arr_66 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_17] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) 8458798873561975455ULL)) ? (arr_47 [i_2 - 2]) : (((/* implicit */long long int) 41831149U)))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_8))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 4; i_20 < 17; i_20 += 4) 
                        {
                            {
                                var_38 *= var_6;
                                arr_75 [i_2] [i_2] [i_15] [i_19] [i_19] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_73 [i_15] [i_19] [i_2] [i_3] [i_3] [i_2] [i_15])) : (var_12))))) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) arr_36 [i_2 - 2] [i_20] [i_20] [i_2 - 2]))));
                                var_39 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1280540431)) ? (-1280540432) : (((/* implicit */int) (unsigned short)511)))), ((-((~(var_12)))))));
                                arr_76 [i_2] [i_2] [i_19] [i_3] [i_19] = arr_45 [(unsigned short)11];
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */int) (-(var_2)));
                    var_41 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)30630))));
                }
                for (signed char i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_22 = 0; i_22 < 19; i_22 += 1) /* same iter space */
                    {
                        arr_81 [i_21] [(_Bool)1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_22] [i_21] [i_3])) >> (((var_4) + (1068075895)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_2] [i_2] [i_2 - 2]))))) : ((~(524287U))))) << ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)511)) || (((/* implicit */_Bool) 41831149U)))))))));
                        arr_82 [15ULL] [9U] [9U] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2660614526U)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_79 [5] [i_3] [i_3] [12U]))))) ? ((~(((/* implicit */int) arr_54 [6U] [6U] [i_21] [6U])))) : (((((/* implicit */_Bool) 651368039U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65535)))))) >= (((/* implicit */int) ((unsigned char) var_4))));
                    }
                    /* vectorizable */
                    for (signed char i_23 = 0; i_23 < 19; i_23 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */int) min((var_42), ((+(((/* implicit */int) var_13))))));
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_68 [i_2] [i_2] [i_2] [i_2]))));
                    }
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1634352769U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (~(2660614509U)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (signed char)-116)) : (-1280540431)))))));
                }
            }
        } 
    } 
}
