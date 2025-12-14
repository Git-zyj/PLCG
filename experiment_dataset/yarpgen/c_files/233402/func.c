/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233402
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_0])), ((+(((/* implicit */int) arr_1 [i_0]))))));
        var_15 = ((/* implicit */short) 2147352576);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 1771517941U);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~(6906006205808145299ULL))))));
        var_17 = ((/* implicit */unsigned int) arr_4 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-8192))));
        arr_8 [i_1] = ((/* implicit */unsigned short) 1771517941U);
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_18 = ((/* implicit */short) ((unsigned int) arr_0 [i_2] [i_2]));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_19 = ((signed char) (signed char)(-127 - 1));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_20 ^= ((/* implicit */long long int) var_7);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) << (((var_0) - (870568412U)))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_14 [i_2] [i_2] [i_2] [i_2]))) % (((/* implicit */int) var_14))))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_19 [i_2] [i_4 + 1] [i_5 + 2] [i_5 + 3] [i_5 + 3])))))))));
                        }
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (9223372036854775807LL)));
                            var_24 = ((((/* implicit */_Bool) ((int) ((int) var_4)))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_10))) <= (((/* implicit */int) ((unsigned short) arr_17 [i_2] [i_2] [i_2] [i_2])))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_4 [i_2])))))));
                        }
                    }
                } 
            } 
            arr_23 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), (var_4)))) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1)))))))) ? ((-(((/* implicit */int) (signed char)95)))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_0))) ? (((/* implicit */int) ((signed char) (unsigned short)14680))) : (((/* implicit */int) arr_0 [i_3] [i_3])))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_3])))))));
        }
        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_26 [i_2] [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_2] [i_2] [i_2] [i_2] [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)41)), (var_13)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_8])))))));
            /* LoopNest 3 */
            for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
            {
                for (int i_10 = 2; i_10 < 9; i_10 += 1) 
                {
                    for (short i_11 = 3; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(var_0))))));
                            var_27 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10] [i_10 + 4])) ? (((/* implicit */int) arr_22 [i_8] [i_10] [i_10 + 4] [i_10] [i_10 + 3] [i_10 + 3] [i_10 + 1])) : (((/* implicit */int) (signed char)106)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) var_8);
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) 991886305))) / (((unsigned long long int) arr_33 [i_2] [i_14] [i_2])))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 2) 
                        {
                            var_30 = ((/* implicit */short) min(((~(var_11))), (((/* implicit */unsigned int) ((short) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_12])))));
                            arr_48 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((~(arr_11 [i_2] [i_13] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65512))))))));
                            var_31 += ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (short)-32749)), (arr_13 [i_8] [i_8]))), (arr_13 [i_2] [i_2])));
                            var_32 = ((/* implicit */unsigned short) max(((+(var_9))), (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) var_1)), (var_10)))))));
                        }
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            arr_52 [i_2] [i_16] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) var_8)));
                            arr_53 [i_12] [(signed char)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_12] [i_13] [i_12] [i_12] [i_12]))));
                            var_34 = ((/* implicit */short) (unsigned short)23);
                        }
                        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            arr_56 [i_12] [i_12] = ((/* implicit */short) min(((-(var_0))), ((-(arr_10 [i_2])))));
                            arr_57 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_13] [i_8] [i_13] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_8] [i_12] [i_8])))))) : (arr_11 [i_2] [i_8] [i_13])));
                            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)127)) ? (arr_13 [i_2] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_12] [i_13] [i_17]))))), (((/* implicit */long long int) arr_21 [i_2] [i_12] [i_12] [i_12] [i_2] [i_12] [i_2])))))));
                            var_36 &= ((((/* implicit */_Bool) 2791945261U)) ? (max((((/* implicit */long long int) ((short) 2679767333270932858LL))), (((long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_17] [i_17] [i_17] [i_17]))));
                        }
                        arr_58 [i_13] [i_12] [i_2] = ((/* implicit */long long int) (+(((unsigned int) ((((/* implicit */_Bool) arr_31 [i_12])) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) arr_31 [i_12])))))));
                        var_37 |= ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */int) (signed char)-81)) * (((/* implicit */int) (short)-24557)))) / (((((/* implicit */int) (signed char)107)) - (((/* implicit */int) (unsigned short)25091)))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            for (signed char i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_20 = 1; i_20 < 9; i_20 += 1) 
                    {
                        for (signed char i_21 = 2; i_21 < 10; i_21 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned short) ((unsigned char) arr_46 [i_2] [i_2] [i_18] [i_19] [i_20 + 4] [i_2]));
                                arr_70 [i_2] [i_18 - 1] [i_19] = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-24557)), (((((/* implicit */_Bool) 5370144254115177521LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)23112)))))))));
                                var_39 = ((/* implicit */long long int) var_8);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        for (short i_23 = 0; i_23 < 13; i_23 += 4) 
                        {
                            {
                                arr_77 [i_23] [i_18] [i_19] [i_22] [i_22] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_2] [i_18] [i_18] [i_18] [i_18] [i_18 - 1] [i_2])) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                                var_40 = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) >> (((arr_30 [i_2] [i_2] [i_2]) + (6459351805978404100LL)))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)-99))) : (((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned long long int) 9223372036854775792LL))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))))));
                    /* LoopSeq 1 */
                    for (short i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_25 = 1; i_25 < 12; i_25 += 3) 
                        {
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((unsigned char) 25165824)))));
                            var_43 = ((((((/* implicit */_Bool) var_8)) ? (arr_36 [i_2] [i_18 - 1] [i_19] [i_24] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_18]))))) / ((~(((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((long long int) ((unsigned short) (-(((/* implicit */int) arr_75 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                            arr_83 [i_25] [i_24] [i_25] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_25] [i_18 - 1]))) | (arr_46 [i_25] [i_25 + 1] [i_25] [i_18 - 1] [i_2] [i_2]))));
                            arr_84 [i_25] [i_18] [i_19] [i_24] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_2] [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_2] [i_25] [i_25]))) : (((long long int) ((unsigned char) var_6)))));
                        }
                        for (signed char i_26 = 0; i_26 < 13; i_26 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned short) 4268619409634537075ULL);
                            arr_87 [i_18 - 1] [i_26] [i_26] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)-99))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) var_0)))));
                        }
                        for (signed char i_27 = 0; i_27 < 13; i_27 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) arr_67 [i_2] [i_18] [i_19] [i_27] [i_27]))));
                            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) min(((((-(arr_82 [i_19] [i_18] [i_18] [i_24] [i_27] [i_24]))) + (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-24559)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_2])) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)31)))))))))));
                        }
                        for (int i_28 = 0; i_28 < 13; i_28 += 4) 
                        {
                            var_48 ^= ((/* implicit */long long int) (signed char)127);
                            var_49 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (min((arr_62 [i_18 - 1] [i_18 - 1]), (((/* implicit */int) var_3))))));
                            var_50 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-95));
                            arr_92 [i_2] [i_2] [i_2] [i_2] [i_2] = (+(((/* implicit */int) var_7)));
                        }
                        arr_93 [i_19] = arr_44 [i_19] [i_19] [i_19] [i_19] [i_19];
                        var_51 = ((/* implicit */unsigned short) ((unsigned char) min(((unsigned short)65535), (arr_49 [i_19] [i_18 - 1] [i_2] [i_18 - 1] [i_18 - 1]))));
                        var_52 = ((/* implicit */unsigned char) var_12);
                        arr_94 [i_2] [i_18 - 1] [i_2] [i_24] [i_24] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) 3936231465059009930LL))), (var_0)));
                    }
                }
            } 
        } 
        arr_95 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2139095040U)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43272))) <= (arr_71 [i_2] [i_2])))) : (((/* implicit */int) (signed char)-32))));
    }
    var_53 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)105))) : (((long long int) ((short) -5211688452912511119LL)))));
}
