/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197814
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((_Bool)1), (((((/* implicit */_Bool) var_5)) || ((_Bool)1)))))), (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), ((unsigned short)65535))))) : ((~(4294967295U)))))));
        var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((15970742605785807124ULL) * (((/* implicit */unsigned long long int) 3084957924750177970LL)))), (((/* implicit */unsigned long long int) arr_3 [i_1] [15LL]))))) ? (((((/* implicit */int) (!((_Bool)1)))) & (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [(unsigned char)1])) : (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_0))))))));
        var_16 = ((/* implicit */_Bool) ((-613048169993652214LL) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        arr_4 [(short)14] [(short)14] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_2 [4U] [i_1 + 3]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) ((_Bool) ((((/* implicit */int) arr_2 [i_4 - 1] [(signed char)0])) != (((/* implicit */int) arr_3 [6LL] [6LL]))))));
                    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - ((((-2147483647 - 1)) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((((/* implicit */int) var_4)) + (((/* implicit */int) var_2))))))) : (min((arr_5 [i_4] [i_4 + 1]), (((/* implicit */long long int) (signed char)122))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 3; i_6 < 9; i_6 += 4) 
            {
                for (short i_7 = 2; i_7 < 9; i_7 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (arr_20 [i_7 + 1] [i_6 - 3] [i_6 - 3] [i_6 - 3]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_25 [i_8] [i_2] [i_7 + 1] [i_6 - 3] [i_5] [i_2] [i_2] = ((/* implicit */_Bool) var_9);
                            var_19 = ((/* implicit */int) ((2249492879514152039LL) >> (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_21 [i_2] [i_2] [i_6] [i_8])))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) % (arr_19 [i_6 - 1] [i_6 - 3] [i_6] [i_2])));
                        }
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_22 [i_2] [i_2] [i_6 - 2] [i_7] [i_2]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2]))))) : (2476001467923744496ULL)));
                arr_28 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (short)17833))))) : (((((/* implicit */_Bool) arr_20 [i_2] [(unsigned short)6] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_8)) : (var_6)))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_23 = var_7;
                            var_24 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_1)))) == (((/* implicit */int) arr_33 [i_11] [i_10] [i_2] [i_5] [i_2]))));
                            var_25 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)31));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_21 [i_2] [(_Bool)0] [i_2] [i_11]))));
                            var_27 = ((/* implicit */short) (unsigned short)42886);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    var_28 = ((/* implicit */signed char) var_8);
                    var_29 = (~(var_6));
                }
                for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    arr_39 [i_2] [i_2] = ((/* implicit */short) -66838340776530156LL);
                    arr_40 [i_2] [i_2] [i_9] [i_2] = (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9] [(unsigned short)16]))) : (arr_5 [i_2] [i_9]))));
                }
                for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    arr_43 [i_14] [i_2] [5ULL] = ((/* implicit */unsigned short) ((var_11) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned short)65515))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_30 += ((/* implicit */short) arr_9 [i_2] [i_5]);
                        arr_47 [i_15] [i_14] [(_Bool)1] [i_2] [i_9] [i_5] [i_2] = ((/* implicit */unsigned short) ((long long int) 4294967295U));
                        var_31 = ((/* implicit */short) var_12);
                        arr_48 [i_2] [i_2] [(unsigned short)4] [i_9] [(unsigned short)4] [i_15] [i_2] = ((((/* implicit */_Bool) var_1)) ? (arr_38 [i_15] [i_2] [i_9] [i_5] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 2; i_16 < 7; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */short) -2330115283752558623LL);
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_16] [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 2])) - (((/* implicit */int) arr_44 [i_16 - 2] [i_16] [i_16 - 2] [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16]))));
                    }
                    for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        arr_55 [i_2] [i_17] [i_9] [i_14] [i_17] |= ((/* implicit */unsigned int) arr_5 [i_17] [i_17]);
                        arr_56 [i_17] [i_2] [i_9] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)16807)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))));
                        var_34 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) var_0))))));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) ((arr_16 [i_2]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2])))));
                    arr_60 [i_2] [(short)8] [i_5] [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_27 [i_18] [i_9]));
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_5] [i_5]))))) || (((/* implicit */_Bool) var_8)))))));
                    var_37 = ((/* implicit */unsigned short) var_4);
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_2] [i_9] [i_9] [i_19])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_2] [i_9] [i_5] [i_2])))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
            for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                arr_68 [i_2] = ((/* implicit */unsigned char) ((-3084957924750177961LL) - (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)224))))));
                var_40 = ((/* implicit */unsigned char) ((arr_36 [i_2] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                /* LoopSeq 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_71 [0] [(unsigned short)0] [i_2] [8LL] [i_2] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [i_22])) : (((/* implicit */int) arr_17 [6LL]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        var_41 = ((/* implicit */_Bool) (+(arr_26 [i_2] [i_2] [i_2] [i_2])));
                        var_42 = ((/* implicit */unsigned short) (-(var_6)));
                    }
                }
                for (short i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_44 |= ((/* implicit */short) arr_49 [(unsigned short)0] [(_Bool)1] [i_21] [i_24] [i_25 - 1] [i_21]);
                    }
                    for (short i_26 = 0; i_26 < 10; i_26 += 1) 
                    {
                        arr_82 [i_26] [i_26] [i_24] [i_2] [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [13ULL] [13ULL]))))) : (arr_36 [i_26] [i_26])));
                        arr_83 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (+(((var_4) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (short)-32758)))));
                    }
                    arr_84 [i_2] [i_5] [i_21] [i_2] [i_24] [i_24] = ((/* implicit */int) ((287667426198290432LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)5095)) : (((/* implicit */int) (short)-20200)))))));
                }
            }
            var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) var_12))));
            arr_85 [(_Bool)1] |= ((/* implicit */_Bool) var_9);
        }
        arr_86 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) arr_1 [i_2])))))));
        var_46 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_46 [i_2] [i_2] [i_2])) ^ ((~(((/* implicit */int) (signed char)-62))))))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32763))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (min((var_11), (((/* implicit */long long int) arr_81 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_27 = 0; i_27 < 25; i_27 += 3) 
    {
        arr_90 [i_27] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_89 [i_27])) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_88 [i_27])), (var_9)))), (((unsigned int) arr_89 [i_27])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8895))));
        arr_91 [i_27] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) * (((((unsigned int) (unsigned char)192)) << (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)203)), (var_3)))) - (11733)))))));
    }
    var_47 = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */_Bool) (short)-27312)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) >> (((max((((((/* implicit */int) var_2)) >> (((var_11) - (490070542760768870LL))))), (var_12))) - (705907556)))));
    var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) (_Bool)1))));
}
