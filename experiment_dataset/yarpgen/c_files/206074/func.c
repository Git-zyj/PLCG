/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206074
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) <= (18446744073709551615ULL)))), (max((((/* implicit */unsigned long long int) 1049963033U)), (18446744073709551609ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [6ULL] [4U] [i_2] [i_3] [(unsigned char)10] [(signed char)10])) + (((/* implicit */int) ((signed char) 18446744073709551609ULL)))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((18446744073709551609ULL), (((((/* implicit */_Bool) (signed char)36)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [10U]))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (max((arr_0 [i_0 + 4]), (((/* implicit */unsigned int) (unsigned char)32))))))));
                                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_1] [i_0 + 1] [i_3 + 2])) ? (arr_10 [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_0] [(_Bool)1] [i_3 - 1] [i_0]) && (((/* implicit */_Bool) arr_6 [i_0] [i_0])))))))) : (((765053471U) & (3245004267U)))));
                                var_23 = ((/* implicit */unsigned int) (signed char)-59);
                                var_24 -= ((/* implicit */short) max((min((((arr_8 [i_0 + 3] [i_1] [3ULL] [i_3] [i_4] [3ULL]) / (var_3))), (((/* implicit */unsigned long long int) arr_13 [8ULL] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 3] [3U])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [(unsigned char)7]))))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_3 + 2] [i_3 + 2]))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(unsigned short)1] &= ((/* implicit */signed char) ((unsigned long long int) (-(arr_10 [i_0 + 1]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                            {
                                var_25 ^= ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_0 + 4]))));
                                var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)66))));
                            }
                            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                            {
                                arr_26 [i_0] [i_1] [i_0] [(_Bool)1] [7U] = ((/* implicit */unsigned int) ((unsigned short) (short)12795));
                                var_27 += ((/* implicit */signed char) var_14);
                            }
                            arr_27 [i_0] [i_0] [(unsigned char)2] [i_5] [i_6] = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_28 = ((((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_1] [i_10])), (var_1))) : (((/* implicit */unsigned long long int) max((arr_0 [(signed char)3]), (((/* implicit */unsigned int) (unsigned short)511))))))) / (((/* implicit */unsigned long long int) arr_15 [i_0 - 1])));
                        arr_33 [i_0 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3131781647445637492ULL)) ? (((((/* implicit */_Bool) var_17)) ? (15314962426263914108ULL) : (18446744073709551586ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3079990031U)) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12800)))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4194303U)))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) 3219380364U)) : (13933090298816249575ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [(unsigned short)5] [(unsigned short)5]))))))) - (3219380317ULL)))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_29 *= max((var_0), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-1)), (max((var_5), (((/* implicit */unsigned int) (short)6358))))))));
                        var_30 = min(((+(6ULL))), (((/* implicit */unsigned long long int) arr_13 [i_0] [1ULL] [0ULL] [10ULL] [i_0 + 2] [i_0 + 4])));
                    }
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_31 ^= max((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 3] [i_0 + 2] [i_0 + 4] [i_0 + 3] [i_0 + 3] [i_0 + 1]))) : (arr_5 [i_0 + 3]))), (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) << (((/* implicit */int) (_Bool)1))))));
                        arr_40 [(unsigned short)10] [(unsigned char)5] = ((/* implicit */short) ((_Bool) 8757573430513752754ULL));
                        arr_41 [i_0 + 4] [i_0 + 4] [i_1] [1U] [i_0 + 4] = ((/* implicit */signed char) min((((arr_9 [i_12] [i_12] [i_0 + 4] [i_0 + 4]) ? (((/* implicit */int) (unsigned short)49075)) : (((/* implicit */int) arr_13 [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0] [i_0])))), (((((/* implicit */int) (unsigned short)16460)) / (((/* implicit */int) arr_13 [i_9] [i_0 + 3] [i_0 + 4] [i_0 + 4] [(unsigned char)7] [i_0 + 1]))))));
                        var_32 += ((/* implicit */short) arr_32 [3ULL] [i_1] [3U] [(_Bool)1] [i_12]);
                        var_33 |= ((/* implicit */unsigned int) arr_11 [i_0] [i_9] [(unsigned short)5] [i_0]);
                    }
                    /* LoopSeq 3 */
                    for (short i_13 = 1; i_13 < 10; i_13 += 1) 
                    {
                        arr_44 [i_0 + 3] [i_0 + 3] [(unsigned short)2] [4U] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_0] [3ULL] [6U] [3ULL] [(unsigned short)6] [i_13])) << (((arr_7 [i_1]) - (12150049709410901362ULL)))))) % (((((/* implicit */unsigned long long int) var_11)) | (8757573430513752785ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_45 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) var_4);
                        arr_46 [(signed char)2] [(signed char)2] [2U] [6U] |= ((/* implicit */unsigned long long int) (short)6358);
                        var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [1U] [(unsigned short)6] [i_13 + 1] [i_0 + 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_9 [i_0] [(_Bool)1] [i_13 + 1] [i_0 + 2])))))) : (((arr_9 [(signed char)1] [i_1] [i_13 + 1] [i_0 + 2]) ? (arr_7 [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_13 + 1] [i_0 + 3])))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        arr_49 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)22367)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_0 + 3] [i_0 + 4] [i_0 + 3])))))) : (min((((/* implicit */unsigned long long int) (unsigned short)16453)), (max((arr_3 [5U] [5U] [i_9]), (var_0))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            arr_53 [(signed char)4] [i_1] [i_9] [(unsigned short)7] [(unsigned short)10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_0 + 3])) ? (((((/* implicit */_Bool) 9345785556796375314ULL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16458))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_14] [i_9] [i_1] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)43174)))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_23 [i_0] [i_0] [i_9] [i_14] [i_15] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43174)))))));
                            var_36 *= ((/* implicit */_Bool) ((signed char) ((unsigned long long int) var_4)));
                            arr_54 [9U] [i_9] [i_1] [i_14] [i_15] [i_14] [i_1] = ((/* implicit */unsigned short) (+((((_Bool)1) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)0)) << (4ULL)))));
                            arr_57 [(_Bool)1] [(unsigned short)3] [(unsigned char)6] [(unsigned short)3] [i_16] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-1)), ((~(max((1629898826U), (((/* implicit */unsigned int) var_14))))))));
                            var_38 = arr_9 [i_0] [i_0] [i_9] [i_0];
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_61 [i_17] [i_14] [i_9] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)184);
                            arr_62 [8U] [(_Bool)1] [i_1] [i_9] [i_14] [i_14] [i_17] = ((/* implicit */unsigned int) (unsigned short)40803);
                            var_39 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (arr_23 [i_17] [i_17] [i_0] [i_1] [i_1] [i_0]) : (max((459205948U), (((/* implicit */unsigned int) (unsigned char)69))))))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            arr_65 [i_0] [i_1] [i_9] [i_1] [i_14] [i_18] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_43 [i_0] [i_0] [i_0 + 3])))) * (((/* implicit */int) ((short) arr_64 [i_0 + 4] [9U] [i_0] [9U])))));
                            arr_66 [i_0] [8U] [i_9] [1U] [i_9] |= ((/* implicit */short) (-(((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [3U])) && (((/* implicit */_Bool) (signed char)-107))))) * (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)53817))))))));
                            var_40 = ((/* implicit */unsigned long long int) (-(2692486486U)));
                            arr_67 [i_0] [(signed char)7] = ((/* implicit */_Bool) (unsigned char)218);
                            var_41 -= ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_18] [1ULL] [i_9] [(_Bool)1] [i_0 + 3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_60 [i_0] [i_1] [2ULL] [10ULL] [i_0 + 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [1U] [1U] [i_0 + 1] [i_14] [(signed char)9] [1U]))) & (514127123U))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            arr_71 [i_0] [(short)8] [6ULL] [1U] [i_19] [i_19] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16458)) >> (((1016246174U) - (1016246167U))))))));
                            var_42 += ((/* implicit */unsigned char) arr_34 [i_0 - 1] [i_1] [i_19] [i_14]);
                        }
                    }
                    for (unsigned int i_20 = 3; i_20 < 10; i_20 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)200))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10084001006733720792ULL)))) : ((-(10084001006733720795ULL))))) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 4]))) : (max((var_17), (((/* implicit */unsigned long long int) arr_75 [i_0] [i_1] [i_0] [i_1] [2U] [i_20]))))))));
                        arr_76 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((arr_17 [(unsigned char)8]), (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (max((4503597479886848ULL), (((/* implicit */unsigned long long int) arr_24 [i_0 + 1] [i_1] [i_20])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_20 - 1] [i_9] [i_9] [i_9] [i_0 + 3] [4U])))));
                        var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((arr_8 [i_0 + 1] [i_1] [(_Bool)1] [(unsigned char)4] [i_9] [i_20 + 1]), (((/* implicit */unsigned long long int) (signed char)17)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)52)), ((unsigned short)65530)))))))));
                        var_45 ^= ((/* implicit */signed char) 8362743066975830831ULL);
                    }
                    var_46 += ((/* implicit */unsigned short) arr_19 [i_0] [3U] [i_9]);
                }
                for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        arr_84 [i_21] [i_21] [(unsigned char)4] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_47 [i_0] [i_1])) ? (var_0) : (arr_17 [3ULL])))))));
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_36 [i_0] [i_1]) | (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (14394379028876373628ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)25))))))) : (arr_5 [i_0])));
                        arr_85 [4ULL] [i_21] [(signed char)6] [i_1] [(signed char)2] [7U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) max((var_7), (((/* implicit */short) var_8)))))))) ? (1570521615U) : (((((/* implicit */_Bool) (unsigned char)22)) ? (arr_15 [i_0 + 3]) : (arr_15 [i_0 + 3])))));
                        var_48 += ((/* implicit */unsigned char) max((min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (763698412U))), (max((((/* implicit */unsigned int) (_Bool)0)), (367591958U))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 13739854364642635279ULL)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (unsigned char)204)))))))));
                    }
                    arr_86 [i_0 - 1] [i_0 - 1] [(unsigned short)10] &= 18446744073709551609ULL;
                    var_49 -= ((/* implicit */signed char) min((((((/* implicit */int) (!(((/* implicit */_Bool) 1003643925U))))) ^ (((((((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1] [4U] [2U] [i_21])) + (2147483647))) << (((((/* implicit */int) (short)14)) - (14))))))), (((((/* implicit */int) arr_29 [i_0] [i_0 + 3])) - (((/* implicit */int) arr_42 [i_0] [i_1] [i_0 + 2] [6ULL] [i_0 + 2] [i_0]))))));
                }
                /* vectorizable */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_50 += ((((/* implicit */_Bool) arr_83 [(unsigned short)2] [i_0] [i_0] [(unsigned short)2])) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_0 - 1] [6U] [i_0 + 3] [5U] [i_0 - 1] [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 4) 
                    {
                        for (signed char i_25 = 0; i_25 < 11; i_25 += 4) 
                        {
                            {
                                arr_95 [i_0] [10U] [i_23] [i_24] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) arr_68 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_0]))) : (6ULL)));
                                var_51 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6219))) - (15413888581918803938ULL)))));
                            }
                        } 
                    } 
                    arr_96 [(_Bool)1] [i_1] |= ((/* implicit */unsigned long long int) 2758154819U);
                    var_52 = ((/* implicit */unsigned short) arr_55 [i_0]);
                }
                var_53 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (min((429373164U), (763698408U))) : (2861332518U)))) ? (2631783810U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))));
            }
        } 
    } 
    var_54 *= max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (signed char)-105)), (174752175U))));
}
