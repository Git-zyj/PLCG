/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212171
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((var_18), (((/* implicit */unsigned int) var_19)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_12)))))))) < ((~(arr_2 [i_2]))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) : (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_21 *= ((/* implicit */unsigned int) arr_12 [i_3] [i_0] [i_0] [i_1] [i_0]);
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)17])));
                    }
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_23 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_1 [i_2]))) != (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_14 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_4])))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((((((var_13) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_18)))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_14 [14LL] [18LL] [15U] [(unsigned short)7])) * (((/* implicit */int) var_12))))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_5 + 1]) < (arr_10 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 1])))))));
                            arr_18 [i_1] [i_2] = ((/* implicit */unsigned short) ((((var_8) + (2147483647))) >> (((((/* implicit */int) var_19)) - (51705)))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((short) min((var_10), (((/* implicit */int) var_17))))))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_26 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_14))))))) != ((-(arr_5 [i_6 - 1] [i_6 - 1])))));
                            arr_22 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) / (((/* implicit */int) arr_13 [16U] [i_2] [i_4] [i_6 - 1])))) * (((/* implicit */int) ((short) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_11))))))));
                            var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_2] [i_2] [i_2] [i_2]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))))) != (((/* implicit */unsigned int) max((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_11)) - (134))))), (((/* implicit */int) var_1)))))));
                            arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) arr_5 [i_6 - 1] [i_6 - 1]);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) (-(var_15)));
                            var_29 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8))))));
                            arr_27 [i_7] [14] [i_2] [i_1] [14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [9U]))) : (arr_1 [i_1])));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_30 = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_5))))), (((var_8) - (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_1] [i_8 + 1]))))))) ? (((/* implicit */unsigned int) ((var_13) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_4])) : (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) var_4))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (arr_10 [i_8 + 1] [(unsigned short)11] [i_8] [i_8 + 1] [i_1]))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */int) ((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_3)))) < ((~(((/* implicit */int) var_0))))))) : (((/* implicit */int) var_9))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_8 + 1] [6ULL] [0LL] [i_0])) : (((/* implicit */int) arr_13 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))))))));
                            arr_31 [i_0] [i_0] [(short)6] [i_2] [i_0] [i_8] [i_8] = ((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_1] [i_8]);
                        }
                    }
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_18);
                    var_32 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_13)) / (arr_26 [i_1] [i_1]))) * (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) | (min(((~(var_10))), (((((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_2] [i_2])) ^ (((/* implicit */int) var_6))))))));
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_19))));
        var_34 &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (arr_4 [i_0] [i_0] [i_0]))) ? ((-(var_10))) : (((var_7) ? (((/* implicit */int) ((arr_21 [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [17LL])))))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_33 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_36 *= ((/* implicit */unsigned char) (-(((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))));
                                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) arr_17 [i_0] [(_Bool)1]))));
                                var_38 = ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_3))) / (var_10)))) ? (max((((((/* implicit */int) arr_9 [i_9] [i_9] [i_11] [14U])) + (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_2)));
                                arr_46 [i_0] [i_9 - 3] [2U] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_17))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_9] [i_11] [(short)16]))))) ? ((+(var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_10 + 1] [i_11] [i_0] [i_12] [i_9 - 3])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_15)))))) % ((+(var_15))))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((short) var_18)), (var_9)))) ? (((/* implicit */long long int) (-(((int) arr_13 [(_Bool)1] [13] [i_9] [(_Bool)1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) % (min((((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (576460752303423424LL)))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(arr_15 [i_0] [(_Bool)1] [i_10 + 1] [i_10 + 1] [i_14] [i_14])))) && (((_Bool) var_19))))) != (((/* implicit */int) arr_40 [i_0] [(unsigned short)19] [i_0] [i_0])))))));
                        var_42 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_25 [i_0] [i_9] [i_9 + 1] [i_14] [i_14] [i_9])))) * ((+(((/* implicit */int) var_14))))))) ? (var_8) : (((((/* implicit */_Bool) ((arr_17 [i_0] [9LL]) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) var_11))))))));
                        var_43 *= ((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (arr_5 [i_9 - 3] [i_9 - 3]))))));
                        arr_52 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_15 [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 - 1]))) * (((((((/* implicit */int) var_17)) / (((/* implicit */int) var_4)))) & (((/* implicit */int) var_16))))));
                        arr_53 [(short)16] [i_9] [i_10] [i_14] [i_14] = ((((/* implicit */_Bool) ((var_7) ? (((var_18) >> (((var_8) + (225493447))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) max((var_5), (((/* implicit */short) arr_20 [i_14] [i_10] [0ULL] [i_9] [i_0])))))))));
                    }
                }
            } 
        } 
    }
    for (int i_15 = 2; i_15 < 21; i_15 += 4) 
    {
        arr_56 [i_15 - 1] [i_15 - 1] = ((/* implicit */int) (((-(arr_55 [i_15 - 1] [i_15]))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
        arr_57 [i_15] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((var_7) ? (((/* implicit */int) var_0)) : (var_8))) : (((/* implicit */int) ((unsigned char) var_18))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_15 - 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17))))) ? ((~(((/* implicit */int) arr_54 [(unsigned char)17])))) : (((/* implicit */int) ((((/* implicit */int) arr_54 [i_15])) > (((/* implicit */int) var_3)))))))));
    }
    var_44 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (var_15)))) >= (((/* implicit */int) var_13))));
    var_45 = ((/* implicit */_Bool) var_14);
}
