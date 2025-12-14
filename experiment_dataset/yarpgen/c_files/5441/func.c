/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5441
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */long long int) var_8);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_16);
    }
    for (signed char i_1 = 3; i_1 < 9; i_1 += 4) /* same iter space */
    {
        var_19 = max((((/* implicit */unsigned int) var_10)), (arr_4 [i_1]));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1 - 2] [1] [i_1] = ((/* implicit */long long int) -847753166);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((847753178), (((/* implicit */int) (short)6313))))) ? (((long long int) arr_3 [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 847753150)) ? (((/* implicit */int) arr_10 [i_1 - 2] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_3])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_1 [i_2] [i_1]))))) == (((var_16) >> (((-847753166) + (847753175)))))))) : (max((((((/* implicit */_Bool) 847753161)) ? (((/* implicit */int) arr_1 [i_1] [i_3])) : (((/* implicit */int) arr_10 [i_1] [i_1] [2LL])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) (unsigned char)7)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((arr_14 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 2] [i_4]) < (arr_14 [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_4 + 1]))) ? (((((/* implicit */_Bool) 12ULL)) ? (arr_14 [i_4 - 2] [(signed char)6] [i_4] [i_4 - 1] [i_4 - 2]) : (arr_14 [i_4 - 2] [(signed char)8] [i_4 + 1] [i_4 - 1] [i_4 - 1]))) : (((((/* implicit */_Bool) arr_14 [i_4 - 2] [i_4] [(unsigned char)6] [i_4 + 1] [i_4])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_14 [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_4])))));
                                arr_18 [i_1] [i_2] [i_2] [i_1] [9ULL] [i_5] = ((((unsigned int) (_Bool)1)) / (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1]))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7562))) - (max((min((3423303569U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (~(-847753147))))))));
                                arr_19 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_10 [i_1] [i_1 + 1] [i_4])) % (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 3] [i_3]))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_3 - 1]))))) ? (((/* implicit */int) min(((unsigned char)204), (((/* implicit */unsigned char) arr_6 [i_1] [i_2] [i_3]))))) : (((/* implicit */int) min((arr_10 [i_1 - 3] [i_3 + 1] [i_5]), (arr_6 [i_1] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1 + 1])) && (((/* implicit */_Bool) var_16)))))));
                }
            } 
        } 
    }
    var_25 = (!(((/* implicit */_Bool) var_10)));
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (unsigned char)31))) / (((/* implicit */int) var_5))))) + (((((/* implicit */_Bool) arr_20 [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : (var_16)))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
        {
            for (int i_8 = 3; i_8 < 14; i_8 += 1) 
            {
                {
                    arr_27 [i_6 - 1] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 847753154)) ? (4038456387U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))) >> ((((-(28ULL))) - (18446744073709551584ULL)))))) ? (var_16) : (var_16)));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_32 [i_9 + 1] [i_7] [i_7] [i_7 - 2] [i_7 + 1] [i_7]))))), (((((28ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) & (((/* implicit */unsigned long long int) (+(arr_26 [i_8] [i_8]))))))));
                                arr_34 [i_7] [(short)10] [i_10] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_0) << (((arr_20 [i_6]) - (2303598492U))))) <= (4294967279U))))) != (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19498)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_16))))));
                                var_28 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_9 - 2])) && ((_Bool)1)))), (((((/* implicit */_Bool) (short)7562)) ? (((/* implicit */int) arr_25 [i_7 - 2] [i_9 - 3] [12LL])) : (((/* implicit */int) arr_25 [i_7 + 1] [i_9 - 3] [8U]))))));
                                var_29 = ((/* implicit */unsigned long long int) (((~(max((847753154), (-1528441407))))) == (arr_32 [i_6] [i_6] [i_7 - 2] [i_6] [i_9] [i_10])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 += ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((int) 18446744073709551607ULL))))));
        var_31 = ((/* implicit */long long int) ((int) max((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */long long int) var_3)) : (arr_24 [1LL] [i_6 - 1] [i_6 + 2]))), (((/* implicit */long long int) (unsigned char)238)))));
    }
    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            for (signed char i_13 = 3; i_13 < 11; i_13 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) max((max((((/* implicit */int) (signed char)-111)), (arr_22 [i_11 + 1]))), ((+(((/* implicit */int) arr_37 [i_11 - 2])))))))));
                    arr_44 [i_11] [i_11] = ((/* implicit */unsigned char) ((5843096596881504827ULL) * (((((/* implicit */_Bool) 847753178)) ? (arr_43 [(signed char)11]) : (17098168733094976028ULL)))));
                    /* LoopSeq 3 */
                    for (int i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        arr_48 [i_11 - 1] [i_11 - 1] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((847753161) >> (((arr_30 [i_11] [i_12] [i_13 - 2] [i_14 + 1] [i_12]) - (1368625110))))), (((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)123))))))) ? (((((/* implicit */_Bool) arr_31 [i_11 + 1] [i_12] [i_11] [i_14 + 1] [i_12])) ? (arr_40 [i_11 - 2] [i_12] [i_14 + 1]) : (arr_40 [i_11 + 2] [i_12] [i_14 + 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_32 [i_11] [i_11] [i_11] [i_14] [(_Bool)1] [i_12])), (arr_38 [i_13 - 1])))) && ((!(((/* implicit */_Bool) var_5)))))))));
                        var_33 = ((int) -847753181);
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (((((/* implicit */unsigned long long int) min((1767713066), (arr_28 [i_11])))) % ((~(arr_43 [i_13])))))));
                        arr_49 [i_11] [i_11] [i_11] [i_14] [i_11] [i_13 - 2] = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((arr_23 [i_11] [i_11] [i_11]) ? (((/* implicit */int) (unsigned short)56148)) : (1465550733)))), (min((((/* implicit */unsigned int) (short)7562)), (1815093776U))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_24 [i_11] [i_12] [i_12])) : (arr_43 [(short)12]))) != (((/* implicit */unsigned long long int) 567182104U)))))));
                    }
                    for (int i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        arr_52 [i_11] [i_12] [i_13] [i_12] [i_11] [i_12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_11])), (1491839407973988014ULL)))) ? (max((((/* implicit */unsigned long long int) arr_32 [i_13] [i_13] [i_13 + 2] [i_13] [i_13 - 3] [i_13])), (10148558968755670220ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6)))))))), (((/* implicit */unsigned long long int) (unsigned short)42519))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (short)-7566))))), (((((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_13 - 3] [i_13 + 2] [i_13] [i_13])) ? (((/* implicit */long long int) arr_32 [i_13] [i_13] [i_13] [i_13 + 2] [i_13 - 1] [i_13])) : (arr_29 [i_13] [i_13] [i_13] [i_13 - 2] [i_13] [i_13]))))))));
                        var_36 = ((((((/* implicit */_Bool) (unsigned short)54718)) ? (arr_43 [i_13 - 3]) : (((/* implicit */unsigned long long int) arr_32 [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_11 - 2] [i_11 + 2])))) / (((/* implicit */unsigned long long int) ((long long int) arr_43 [i_13 + 1]))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((1491839407973988007ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))) : (min((((/* implicit */int) (signed char)-102)), (arr_36 [i_12] [i_13 - 1])))))) ? (((/* implicit */unsigned int) max((arr_42 [(_Bool)0] [12] [i_13 - 3]), (arr_42 [i_11] [i_11] [i_13 - 3])))) : ((((!(((/* implicit */_Bool) (unsigned char)124)))) ? (((unsigned int) arr_54 [i_13])) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10843)) % (var_1))))))));
                        var_38 &= ((/* implicit */short) ((signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))), (((var_12) >> (((arr_32 [(_Bool)1] [i_12] [i_13] [i_12] [i_16] [(unsigned char)1]) + (1475060728))))))));
                        arr_55 [i_11] [i_11] [i_16] [i_11] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) arr_39 [i_11] [i_13 - 1] [i_11 + 1])), (var_0)))));
                    }
                    arr_56 [i_11 + 1] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((arr_20 [i_12]) / (min((arr_20 [i_11 - 2]), (arr_20 [i_13 + 1])))));
                }
            } 
        } 
        arr_57 [i_11] [i_11 + 1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) (signed char)111))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_11 + 1] [i_11] [i_11 + 2])) ? (((/* implicit */int) arr_37 [i_11])) : (arr_28 [i_11])))) : (var_7))));
        arr_58 [i_11] [i_11 + 2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (signed char)-89)))));
        /* LoopSeq 2 */
        for (signed char i_17 = 3; i_17 < 11; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                for (int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    {
                        arr_69 [i_11] [i_11] [i_11] [(unsigned char)1] [i_18] [i_19] = ((/* implicit */int) ((long long int) ((_Bool) arr_29 [0] [i_17 - 1] [i_19] [i_19] [i_19] [i_19])));
                        var_39 -= ((/* implicit */_Bool) ((max((((/* implicit */long long int) (signed char)76)), (arr_38 [i_11]))) / (((((/* implicit */_Bool) 2575341513660229553ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_38 [i_11 + 1])))));
                        var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) arr_46 [i_17 - 3] [i_17] [i_17 - 3] [i_17] [i_11 - 1] [i_11 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_11] [i_19] [i_19]))) : (var_12)));
                        var_41 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) / (2034093766)))) ? (arr_28 [i_18]) : (((/* implicit */int) ((_Bool) arr_31 [i_11] [i_11] [i_11] [i_19] [i_18])))))));
                        var_42 += ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_42 [i_17 + 2] [5U] [i_19]))))), (((((/* implicit */_Bool) ((signed char) arr_22 [i_11]))) ? (min((((/* implicit */unsigned int) arr_32 [i_11 - 1] [i_11 - 1] [i_18] [i_19] [4] [i_11 - 1])), (var_15))) : (((((/* implicit */_Bool) arr_41 [i_18] [i_18] [i_18])) ? (var_14) : (((/* implicit */unsigned int) var_4))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 3) 
                    {
                        {
                            arr_79 [i_11] [i_11] [i_20] [i_21] [i_22] = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned int) arr_36 [i_11] [i_17 - 1])) : (var_12)))) / (arr_38 [i_11]))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2479873499U))))));
                            var_43 = ((/* implicit */int) max((233716924U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)72)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                for (short i_25 = 0; i_25 < 13; i_25 += 2) 
                {
                    {
                        var_44 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (max((arr_41 [i_25] [i_23] [i_11 + 2]), (((/* implicit */unsigned char) arr_72 [i_25] [i_24] [i_23] [i_11]))))))) ? (max((((/* implicit */unsigned long long int) var_6)), ((~(arr_67 [i_24]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (short)7564))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)162))))) : (((((/* implicit */long long int) arr_86 [i_11] [i_24])) + (arr_38 [i_11]))))))));
                        var_45 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7550))) : (((((/* implicit */_Bool) var_16)) ? (1381050413U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7566)))))))) | (((((/* implicit */_Bool) min((var_12), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11 - 1] [i_11] [i_11 + 1]))) : (arr_43 [i_11 + 2])))));
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((16U) >> (((((/* implicit */int) var_8)) + (78)))))), (((arr_43 [2ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3051)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7580))))) ? (((unsigned long long int) 0U)) : (max((arr_67 [i_25]), (arr_67 [i_24]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((-1298058266), (((/* implicit */int) var_6))))), (max((arr_75 [i_11] [i_11] [i_11] [2U]), (((/* implicit */unsigned int) var_17)))))))));
                    }
                } 
            } 
            var_47 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((int) arr_29 [i_11 - 2] [i_11 - 2] [i_23] [i_23] [i_23] [i_11 + 2]))) ? (max((arr_30 [i_11] [i_11] [i_11] [i_23] [(_Bool)1]), (((/* implicit */int) (_Bool)1)))) : (((int) var_0)))) / ((~(((((/* implicit */_Bool) -1629079420)) ? (((/* implicit */int) arr_33 [i_11] [i_11 - 2] [i_11] [i_11] [i_11 + 2])) : (((/* implicit */int) arr_47 [i_23] [i_23] [i_23] [i_23] [i_23] [(_Bool)1]))))))));
        }
    }
}
