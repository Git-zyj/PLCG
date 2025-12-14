/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51119
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
    var_18 = ((/* implicit */_Bool) (-(2404287687U)));
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) != (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23)))))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_2]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            var_22 = (~(((((/* implicit */int) arr_6 [i_2] [i_4 - 2] [i_2])) << (((/* implicit */int) arr_6 [i_2] [i_4 + 1] [i_2])))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4573))) % (arr_4 [i_0] [i_3]))))) ? (arr_9 [i_0] [i_0]) : (((/* implicit */long long int) var_2))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) var_5)) : (-575283189))) << (((arr_6 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_1] [0U] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))) ? (max((((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)14))))), (((/* implicit */long long int) arr_11 [i_4 - 2] [i_3] [i_2] [i_1] [i_0])))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)13)), ((-(((/* implicit */int) arr_7 [i_1] [i_1]))))))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */int) (unsigned char)0);
                            var_26 = max((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [(unsigned short)5]))) & (arr_9 [i_0] [i_5]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_5]))))));
                            arr_15 [i_2] [i_1] [i_1] [1U] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) var_16)), ((-(arr_10 [i_0] [i_0] [i_0] [i_3]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned char)2] [i_3] [i_0])))));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) (~(max((arr_5 [i_1] [i_2] [i_3] [i_6]), (arr_5 [i_0] [i_1] [(short)10] [i_6])))));
                            var_28 = ((/* implicit */int) 2404287687U);
                        }
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((arr_17 [i_7] [i_2] [i_2] [i_7 + 2]), ((+(arr_17 [(short)0] [i_2] [i_2] [i_7 - 1])))));
                        var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)32767))) ? (max((((/* implicit */unsigned long long int) arr_20 [i_1] [(unsigned short)2] [i_1] [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_19 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2291131072U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_5 [i_0] [(unsigned char)10] [i_2] [i_7 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)23)), (arr_20 [i_0] [i_1] [i_2] [i_1]))))) : (((var_8) ? (((/* implicit */unsigned long long int) arr_14 [i_7] [i_7] [i_0] [i_1] [i_0])) : (2ULL)))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-67))))) && ((!(((/* implicit */_Bool) (+(arr_8 [i_0] [i_1] [i_2] [i_7]))))))));
                        var_32 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11322))) : (var_11)))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [0ULL] [(short)3] [i_2] [i_2] [i_7]))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)3684))))))), (((/* implicit */int) (signed char)-17))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_33 |= ((/* implicit */unsigned short) arr_10 [i_0] [1] [i_7 + 1] [(signed char)11]);
                            var_34 = ((/* implicit */int) arr_3 [i_1]);
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((140737488355200LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_13)) : (arr_9 [i_1] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) * (arr_23 [i_7 + 2] [i_7 + 2] [i_2] [i_2] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)48))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) == (arr_4 [(signed char)1] [i_1])))), (max((arr_5 [i_0] [i_1] [i_2] [i_7]), (((/* implicit */unsigned long long int) 3096409452036810489LL))))))) ? (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */long long int) arr_26 [i_0] [6LL] [i_1] [i_9])) : (arr_9 [i_0] [i_1]))))) : (((int) arr_23 [i_1] [i_1] [i_7 + 1] [i_7 + 1] [i_1] [i_1] [i_9]))))));
                            var_37 = ((/* implicit */short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_25 [i_0] [11ULL] [i_2] [i_7] [i_7] [i_2])))))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_10 = 2; i_10 < 23; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_10 + 1] [i_10 - 1])) ? (((/* implicit */long long int) (+((~(((/* implicit */int) arr_32 [i_10] [i_10]))))))) : (arr_30 [1])));
                    var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15359)) ? (max((((arr_34 [(unsigned char)19] [i_11] [3]) ? (-4484943161515364368LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_12] [i_10 + 1]))))), (((/* implicit */long long int) ((unsigned char) arr_34 [i_10] [i_11] [(unsigned short)3]))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [8ULL])))))) : (((((/* implicit */_Bool) arr_32 [i_12] [i_12])) ? (((/* implicit */long long int) 31U)) : (arr_30 [(short)16])))))));
                    arr_35 [i_10] [i_10] [i_10] = ((/* implicit */signed char) max((((int) max((((/* implicit */signed char) var_1)), ((signed char)-24)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15361)) - (((/* implicit */int) arr_32 [i_10] [i_11]))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (short)-15361)), (arr_30 [i_12])))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_42 [i_10] [i_12] |= ((/* implicit */unsigned short) (-(max((max((((/* implicit */unsigned long long int) arr_37 [i_10 - 1] [i_11] [6U] [5] [(short)14] [(short)8])), (var_9))), (((/* implicit */unsigned long long int) max(((unsigned short)0), (((/* implicit */unsigned short) (short)0)))))))));
                                arr_43 [i_14] [i_10] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_39 [i_10] [i_12] [i_10])) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (2147483647)))))));
                                arr_44 [i_10] [4ULL] [i_12] [(_Bool)1] [i_10] [i_13] [i_14] = ((/* implicit */unsigned int) (((-(((((/* implicit */int) arr_39 [i_11] [(signed char)2] [i_10])) / (((/* implicit */int) var_5)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((805306368U), (((/* implicit */unsigned int) arr_37 [i_10] [(_Bool)1] [i_11] [i_12] [i_11] [i_14]))))))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */int) arr_29 [i_12]);
                }
            } 
        } 
        arr_45 [(short)0] [i_10] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [8U] [i_10 - 2] [8U]))));
    }
    /* vectorizable */
    for (unsigned char i_15 = 2; i_15 < 14; i_15 += 2) 
    {
        /* LoopNest 3 */
        for (short i_16 = 4; i_16 < 14; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (long long int i_18 = 1; i_18 < 14; i_18 += 2) 
                {
                    {
                        arr_58 [7LL] [i_16] [i_15 + 1] [(signed char)10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_55 [i_18 - 1] [i_17] [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) (short)-32765)))) <= (((/* implicit */int) ((_Bool) arr_52 [i_15])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 1; i_19 < 14; i_19 += 3) 
                        {
                            arr_61 [i_15] [(unsigned char)6] [i_19] [(unsigned short)4] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)89))));
                            var_41 ^= arr_39 [i_18 - 1] [i_18] [i_15];
                            arr_62 [i_15] [i_16] [i_17] [i_15] [i_19] [(unsigned short)7] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)27767)) || (((/* implicit */_Bool) (unsigned short)8191)))))));
                        }
                    }
                } 
            } 
        } 
        var_42 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 31LL)) ? (((((/* implicit */int) (signed char)12)) << (((((/* implicit */int) (signed char)-66)) + (82))))) : (((((/* implicit */int) (unsigned char)15)) ^ (((/* implicit */int) arr_34 [i_15] [i_15 - 1] [0]))))));
        arr_63 [i_15] [i_15] |= ((/* implicit */short) ((((((/* implicit */int) var_4)) >> (((5711711912848675818ULL) - (5711711912848675800ULL))))) << ((((~(((/* implicit */int) arr_32 [i_15] [18U])))) + (171)))));
        var_43 = ((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_15] [i_15 - 1] [i_15] [i_15 - 1])) <= (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            for (unsigned short i_21 = 0; i_21 < 15; i_21 += 1) 
            {
                {
                    var_44 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57349))))) ? (var_6) : (((/* implicit */int) ((((/* implicit */int) arr_64 [i_15] [i_15])) < (((/* implicit */int) arr_52 [i_21])))))));
                    var_45 = ((/* implicit */unsigned long long int) (signed char)-56);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 3) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            {
                arr_76 [(unsigned char)10] [i_23] = max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)194))))), (arr_74 [i_23]));
                /* LoopNest 3 */
                for (unsigned int i_24 = 1; i_24 < 12; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 1; i_25 < 10; i_25 += 3) 
                    {
                        for (unsigned long long int i_26 = 2; i_26 < 12; i_26 += 1) 
                        {
                            {
                                arr_84 [i_24 - 1] [i_22] [i_24] [i_24] [i_25 - 1] = ((/* implicit */unsigned char) var_5);
                                var_46 = ((/* implicit */short) (((_Bool)0) ? ((+((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)7652))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
