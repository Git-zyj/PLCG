/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205831
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (signed char)63);
        var_11 = ((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [(unsigned char)5] [(unsigned char)5])) | (var_1)))) ? ((~(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_9 [i_0] [i_0]))))))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */long long int) arr_0 [i_1] [i_2])) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (-618815694146835585LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))))))) ? (((((/* implicit */_Bool) min((arr_8 [i_0]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)121)), (var_7)))) : (((((/* implicit */int) arr_5 [i_0])) << (((((/* implicit */int) arr_5 [i_1])) - (137))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                {
                    arr_16 [i_4] [i_3] [6] = ((/* implicit */signed char) arr_11 [i_3] [i_3]);
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_7 [i_4] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (unsigned short)36006)) : (((/* implicit */int) arr_1 [i_3]))))))) : (arr_0 [i_0] [i_4])));
                    var_15 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (var_2) : (((/* implicit */int) arr_3 [i_4]))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)82)) ^ (((/* implicit */int) (signed char)-52)))) % (((/* implicit */int) min((arr_15 [i_4 - 1] [i_4] [i_4] [i_3]), (((/* implicit */unsigned char) arr_3 [i_4])))))));
                                var_17 = ((/* implicit */unsigned long long int) (~(var_2)));
                                var_18 = ((/* implicit */int) arr_12 [i_3] [i_0]);
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)89)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_5] [i_3] [i_3]))) : (((((/* implicit */_Bool) (-(arr_21 [i_0] [i_3] [i_4 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)5] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_3] [i_4 + 1] [i_0])) : (((/* implicit */int) var_6))))) : (arr_8 [i_4 - 1])))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_4 + 1] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4 + 1])) != (var_5)))), (((arr_21 [i_4 + 1] [i_4] [i_4]) | (((/* implicit */unsigned long long int) arr_7 [i_4 - 1] [i_4] [i_4]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_30 [i_7 - 1]))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) -7105619123482090050LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        for (signed char i_13 = 2; i_13 < 13; i_13 += 4) 
                        {
                            {
                                arr_44 [i_9] [(unsigned short)15] [i_9 + 1] [i_9 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_13] [i_12] [i_9] [i_8] [i_7])) ? (((/* implicit */int) var_10)) : (var_5)))) : ((+(arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] [i_13] [i_13])))));
                                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1119300425)) || (((/* implicit */_Bool) (unsigned char)72)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_7 + 1] [i_9 + 2] [i_9 + 2] [(signed char)1] [(signed char)1]))) : ((+(18446744073709551615ULL)))));
                                arr_45 [i_7] = ((unsigned char) ((arr_29 [i_7 - 1] [i_9] [i_13 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_22 -= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)96))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 2; i_15 < 16; i_15 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) arr_34 [i_7 + 1] [i_8] [i_14] [i_14] [i_8] [i_9]);
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) arr_46 [i_9 + 2] [i_7 - 1] [i_7] [i_7]))));
                                var_25 ^= ((/* implicit */long long int) arr_49 [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 15; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_49 [i_7 - 1]))));
                                arr_60 [i_7] [i_8] [i_8] [i_7] [i_17] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)20))));
                                arr_61 [i_17] [i_7] [i_7] [i_8] = (~(((((/* implicit */int) var_3)) ^ (arr_53 [i_7] [i_7] [i_7] [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = arr_56 [i_7] [i_7 + 1] [14LL] [i_7 - 1] [i_7 - 1] [i_7];
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_7 - 1])) && (((/* implicit */_Bool) 13LL))));
    }
    var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned short i_18 = 0; i_18 < 17; i_18 += 2) 
    {
        for (unsigned int i_19 = 0; i_19 < 17; i_19 += 2) 
        {
            for (int i_20 = 1; i_20 < 14; i_20 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_22 = 2; i_22 < 16; i_22 += 4) 
                        {
                            arr_73 [i_18] [i_19] [i_19] [i_18] [i_22] = ((/* implicit */long long int) var_5);
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (9223372036854775807LL) : (arr_34 [i_18] [i_19] [i_19] [(signed char)7] [i_22] [i_22])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) arr_51 [i_22] [i_20] [i_20 - 1] [i_21] [i_22])) : (((/* implicit */int) arr_27 [i_21]))))) : (4994905451072404728LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)4095)) : (var_5)))) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (((arr_52 [i_18] [i_19] [i_20] [i_21] [i_22] [i_20]) | (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_18])))))));
                        }
                        for (long long int i_23 = 2; i_23 < 15; i_23 += 1) 
                        {
                            arr_77 [i_18] [13ULL] [i_20] [i_21] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_20 + 1] [i_23 - 1] [i_23 - 1]))))) ? ((+(((/* implicit */int) arr_43 [i_20 + 2] [i_23 - 1] [i_20])))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) arr_43 [i_20 + 1] [i_23 + 2] [i_23 + 2]))))));
                            var_31 = ((/* implicit */unsigned int) min((min((((unsigned long long int) arr_76 [i_18] [i_20] [i_18] [i_21] [i_18] [i_21])), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) arr_68 [(unsigned char)11] [(_Bool)1] [i_20] [(_Bool)1] [i_23]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_49 [i_20])) == (((/* implicit */int) var_6))))))))));
                            var_32 = ((/* implicit */unsigned long long int) min((((long long int) ((-6833719073801272341LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (6833719073801272341LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned short) (signed char)-56))))))));
                        }
                        arr_78 [(_Bool)1] [i_20 + 1] [i_18] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4994905451072404727LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_64 [i_19]))))))))));
                    }
                    for (unsigned char i_24 = 3; i_24 < 15; i_24 += 2) 
                    {
                        var_33 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((arr_36 [i_24] [i_24] [i_24 - 3] [i_24] [i_24]), (var_3)))))))));
                        arr_82 [i_18] [i_19] [i_19] [i_20] [i_24] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */_Bool) arr_34 [9LL] [(_Bool)1] [9LL] [i_24] [i_24 - 2] [i_24])) ? (((/* implicit */int) (signed char)67)) : (arr_63 [i_18]))) - (67)))))));
                        arr_83 [i_18] [i_18] [i_24] [i_18] = ((/* implicit */unsigned long long int) ((long long int) min((var_4), (((long long int) var_0)))));
                        var_34 *= ((/* implicit */unsigned char) (((_Bool)1) ? (16065599334181580958ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1806)))));
                    }
                    for (signed char i_25 = 0; i_25 < 17; i_25 += 1) 
                    {
                        arr_87 [i_25] = ((/* implicit */unsigned int) var_4);
                        var_35 = ((/* implicit */unsigned long long int) var_0);
                    }
                    arr_88 [i_18] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_20] [15LL] [i_19] [i_18] [i_18]))))), (min((-1820808168), (var_5))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_26 = 2; i_26 < 13; i_26 += 1) 
                    {
                        for (signed char i_27 = 0; i_27 < 17; i_27 += 4) 
                        {
                            {
                                var_36 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_6)) ? (arr_41 [i_26] [i_26] [i_26 + 1] [i_26] [i_26] [i_26 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                                arr_95 [8LL] [i_19] [i_19] [i_26] [i_27] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_41 [i_19] [i_19] [i_19] [i_19] [i_20 + 2] [i_26 + 1])) ? (((var_8) ? (-5168839888001301621LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)75))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_42 [i_18] [i_18] [i_20] [i_26] [i_26] [i_26] [i_27]) : (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
