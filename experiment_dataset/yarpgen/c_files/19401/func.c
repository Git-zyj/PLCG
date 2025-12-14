/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19401
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
    var_11 = min((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-5)), (1019108287)))), (4094432543U));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */short) arr_1 [(signed char)5]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((var_9) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4)))))));
                            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3 - 2] [i_3 - 2]))));
                            arr_14 [i_2] [i_2] [i_0 - 2] [i_2] [i_0 - 1] = ((/* implicit */_Bool) (-(var_2)));
                            var_15 *= ((/* implicit */unsigned char) var_1);
                            arr_15 [i_0 - 1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((-(((/* implicit */int) (unsigned short)45575)))) : (((/* implicit */int) (signed char)-119)));
                        }
                        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 3) 
                        {
                            var_16 ^= var_5;
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (_Bool)1))));
                            arr_18 [i_2] = ((/* implicit */short) (_Bool)1);
                        }
                        for (unsigned char i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            arr_21 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)-24355))))) ? (45920106U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_18 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-81))));
                        }
                        var_19 = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) -2147483635);
    }
    for (signed char i_7 = 2; i_7 < 24; i_7 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */_Bool) (unsigned short)47971)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32242))) | ((+(1724136170U)))))));
        arr_24 [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_10), (arr_3 [(unsigned char)21] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_7] [i_7 - 2] [i_7] [i_7] [i_7]), (((/* implicit */short) arr_12 [(_Bool)0] [i_7] [i_7] [i_7] [(_Bool)0] [(_Bool)0])))))) : (1944586755U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
        {
            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1015)) ? ((((-(((/* implicit */int) arr_9 [(unsigned char)14] [i_7 + 1] [i_7 + 1] [i_7] [(short)12])))) - (((/* implicit */int) var_7)))) : (((((/* implicit */int) ((((/* implicit */int) var_0)) >= (1)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (unsigned char)53)))))))));
            arr_27 [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) max(((_Bool)1), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)113))))))) / (((/* implicit */int) var_7))));
            var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)68)) % (((/* implicit */int) (unsigned short)10999))))) | (max((((/* implicit */unsigned int) var_9)), (var_8))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2U)) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_20 [i_8] [i_8] [(unsigned short)16] [i_7] [i_7 - 1])))))));
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 22; i_9 += 3) 
            {
                for (short i_10 = 1; i_10 < 22; i_10 += 1) 
                {
                    for (signed char i_11 = 3; i_11 < 24; i_11 += 1) 
                    {
                        {
                            arr_38 [i_11 - 3] [i_8] [i_9 + 3] [i_8] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (short)23247)) : (((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) (signed char)-99))));
                            arr_39 [i_11] [(_Bool)1] [i_10 + 1] [i_9] [(_Bool)1] [i_7] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)15145)), (var_8)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)118)), (var_10))))))));
                        }
                    } 
                } 
            } 
            arr_40 [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)164)))))));
        }
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
        {
            arr_45 [i_7] [i_12] = ((/* implicit */short) min((((/* implicit */int) (unsigned short)32640)), (-553725664)));
            var_24 = ((/* implicit */short) var_0);
            /* LoopSeq 2 */
            for (unsigned int i_13 = 1; i_13 < 21; i_13 += 4) 
            {
                arr_49 [i_7] [i_7] [i_7 + 1] = ((/* implicit */signed char) (-(0U)));
                arr_50 [i_13] [i_13] [i_12] [i_7] = 2737325169U;
                var_25 += ((/* implicit */short) var_5);
            }
            for (unsigned int i_14 = 1; i_14 < 24; i_14 += 4) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (short)14193)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) : (1526512296U)));
                /* LoopNest 2 */
                for (short i_15 = 4; i_15 < 24; i_15 += 3) 
                {
                    for (unsigned short i_16 = 1; i_16 < 24; i_16 += 1) 
                    {
                        {
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-70)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((((/* implicit */int) (short)-4241)) <= (((/* implicit */int) (short)-31549))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_20 [i_7] [i_7] [(unsigned short)10] [(signed char)6] [i_16 + 1])))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)73))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)236))))))) ? (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_42 [i_12] [i_14 - 1] [i_16 + 1])))) ^ ((~(((/* implicit */int) (_Bool)1)))))) : ((+(((((/* implicit */int) (signed char)-1)) - (var_3)))))));
                            var_30 = max((arr_26 [(short)10] [i_7 + 1] [i_7 + 1]), (((/* implicit */signed char) (_Bool)1)));
                        }
                    } 
                } 
                var_31 &= ((/* implicit */short) (_Bool)1);
                var_32 ^= ((/* implicit */short) ((min((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (short)-9374))))), (var_8))) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            }
            arr_58 [i_12] |= ((/* implicit */signed char) var_4);
            var_33 = ((/* implicit */short) min((((((/* implicit */int) (short)2560)) % (1549543955))), (((((/* implicit */_Bool) (-(-1356100675)))) ? (((((/* implicit */_Bool) (short)8984)) ? (1933523326) : (((/* implicit */int) arr_30 [(signed char)18] [(unsigned char)6] [i_7])))) : ((+(((/* implicit */int) arr_26 [i_12] [i_7 - 1] [i_7 - 1]))))))));
        }
    }
    for (signed char i_17 = 2; i_17 < 24; i_17 += 1) /* same iter space */
    {
        arr_62 [i_17] = (signed char)50;
        var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-125)), (arr_52 [i_17] [i_17 - 1] [(short)6]))))));
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-19)) && (((/* implicit */_Bool) (signed char)2))));
    }
    for (signed char i_18 = 2; i_18 < 24; i_18 += 1) /* same iter space */
    {
        arr_65 [i_18 - 2] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)12864))))) ? ((~(max((((/* implicit */unsigned int) (short)21989)), (var_2))))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-30)))))))));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            for (int i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                {
                    arr_70 [(_Bool)1] [i_18] [i_20] = ((/* implicit */unsigned int) (short)19976);
                    var_36 += ((/* implicit */int) (((~(var_6))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35411))) : (var_2)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (unsigned short)29434)) << (((((/* implicit */int) (short)-27164)) + (27180))))))))));
                    arr_71 [i_18] [i_19] [i_19] [i_20] = ((/* implicit */signed char) arr_0 [i_18]);
                    arr_72 [i_18] [i_18 - 2] [i_18 - 2] [i_18] = ((/* implicit */short) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)22706))))))) / ((-((+(1158383256U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        for (short i_22 = 4; i_22 < 22; i_22 += 3) 
                        {
                            {
                                arr_78 [i_18] [i_21 - 1] [i_20] [i_20] [i_19] [i_18] [i_18] = ((/* implicit */short) (signed char)-3);
                                var_37 = ((/* implicit */short) ((max((arr_56 [i_18 - 1] [i_18 - 1] [i_21] [i_21 - 1] [i_21 - 1] [i_18]), (arr_56 [(_Bool)1] [i_18 - 1] [i_18 - 2] [i_19] [i_21 - 1] [i_18]))) ? ((-(((/* implicit */int) arr_56 [i_18 - 1] [i_18 - 1] [i_18 - 2] [i_21] [i_21 - 1] [i_18])))) : ((~(((/* implicit */int) var_1))))));
                                arr_79 [i_18 + 1] [i_19] [(signed char)0] [i_18] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
