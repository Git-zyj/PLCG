/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191748
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) 1503643304)) ^ (max((((unsigned int) (unsigned char)201)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (3006374571717539936LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (-3068415685669103993LL) : (-3068415685669103988LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) : ((((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7211672664694995816LL)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (arr_2 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3 - 3] [i_2] [i_1] [i_0]))))))));
                        var_13 += ((/* implicit */_Bool) 2825067859U);
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((_Bool) ((unsigned short) max((((/* implicit */unsigned short) var_1)), (arr_1 [i_4])))))));
        arr_13 [i_4] = ((/* implicit */long long int) var_3);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) var_5))))) << (((4063232) - (4063209))))) >> (((arr_3 [i_4] [i_4 + 3]) - (1111304198705560463LL))))))));
        var_16 ^= min((2006121132088020953ULL), (((/* implicit */unsigned long long int) (unsigned char)123)));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */int) arr_4 [17ULL] [i_4])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 - 2]))) - (max((arr_3 [i_4] [i_4]), (((/* implicit */long long int) (unsigned char)96))))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_4] [i_4 - 1])), (3384568387139258287ULL))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) arr_17 [i_5] [i_5]);
                    var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)1))));
                }
                for (signed char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                {
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) / (3068415685669103993LL)))) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)96)) ? (17896890911359747833ULL) : (((/* implicit */unsigned long long int) -7463441572671113225LL))))))));
                    var_21 |= ((/* implicit */unsigned char) max((arr_21 [i_8] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned short)1])) ? (arr_19 [(unsigned char)10] [i_6] [i_6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_8])) ? (((/* implicit */int) arr_10 [i_8] [i_6] [i_8] [i_8])) : (-1471066104)))))))));
                    var_22 += ((/* implicit */_Bool) min((((/* implicit */int) max((arr_11 [i_5 - 3]), (arr_11 [i_5 - 1])))), (((var_0) - (((/* implicit */int) (short)-24817))))));
                    var_23 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_24 += ((/* implicit */signed char) arr_7 [i_5] [i_6] [i_6] [i_9]);
                    var_25 ^= ((/* implicit */unsigned long long int) arr_2 [i_5 - 2] [i_5 - 2]);
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_32 [i_6] [i_10 + 1] [i_6] [i_6] [i_6] |= ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((arr_8 [i_5] [i_5 - 3] [i_11]) <= (((/* implicit */int) arr_1 [i_5 + 1])))))));
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_8 [i_5] [i_6] [i_5])) : (arr_21 [i_11] [11ULL])))))) ? (((/* implicit */int) (unsigned char)96)) : ((+((+(((/* implicit */int) var_6)))))))))));
                                var_28 |= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_5 - 3] [i_5 - 3] [i_10])) || (((/* implicit */_Bool) var_1))))), ((-(var_9))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) : (arr_3 [i_6] [i_11]))))))))));
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_5 - 1]) : (arr_8 [i_5 + 1] [i_5] [i_5 - 1])))) ? (arr_12 [i_5 - 3]) : (((/* implicit */int) ((((/* implicit */_Bool) 2825067866U)) && (((/* implicit */_Bool) arr_8 [i_5 - 3] [i_5 + 1] [i_5 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((var_9), (((/* implicit */unsigned int) (signed char)-107))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3384568387139258287ULL)) ? (((/* implicit */int) arr_31 [i_5] [i_6] [i_9] [i_9] [i_5 + 1] [i_9] [4])) : (((/* implicit */int) var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 + 1]))) / (2654006260846208162ULL))))))));
                                var_31 &= ((/* implicit */unsigned char) ((int) ((int) ((((/* implicit */int) (unsigned short)62559)) <= (((/* implicit */int) arr_36 [i_5 - 3] [i_6] [i_9] [i_6] [i_6]))))));
                                arr_37 [i_5] [i_6] [i_9] [i_12] [i_9] [i_5 - 2] [i_12] = ((/* implicit */unsigned short) ((((((((/* implicit */int) ((signed char) var_8))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_12] [i_9] [i_9] [i_6] [i_9] [i_5])) || (((/* implicit */_Bool) var_9))))))) >= (((((/* implicit */_Bool) arr_29 [i_5 - 3] [i_6] [i_9] [i_12] [i_9])) ? (((int) (unsigned char)91)) : (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_26 [i_9]))))))));
                                var_32 -= ((/* implicit */unsigned short) (!((_Bool)1)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    arr_40 [(signed char)3] [(unsigned short)1] [i_5 + 1] [(unsigned short)1] = ((/* implicit */unsigned char) (-(2825067859U)));
                    var_33 |= ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (signed char)107))))) && (((/* implicit */_Bool) (unsigned short)65533)))) ? (((/* implicit */long long int) var_9)) : (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [(signed char)3] [i_6] [i_6] [(signed char)3]))) : (arr_30 [(unsigned char)1] [i_5 - 3] [9] [i_5 + 1] [i_5] [i_5] [i_5]))), (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))));
                    var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                }
                var_35 += ((/* implicit */signed char) (unsigned short)6);
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_5] [i_5 - 3] [i_5 - 2] [i_5 - 1])) ? (var_0) : (((/* implicit */int) arr_39 [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 - 3]))))))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    for (unsigned short i_16 = 1; i_16 < 8; i_16 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
                            {
                                arr_47 [i_6] [i_6] [i_15] [i_16 - 1] [i_17] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(302852767515672996LL)))) || (((/* implicit */_Bool) (unsigned short)7))));
                                arr_48 [i_5] [i_6] [i_6] [8LL] [i_6] = ((/* implicit */short) 10102912407231350378ULL);
                                var_37 += min((((/* implicit */unsigned short) (unsigned char)15)), (((unsigned short) arr_28 [i_5] [i_5] [i_16 - 1] [i_16])));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_18 = 4; i_18 < 10; i_18 += 4) /* same iter space */
                            {
                                var_38 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)896))))));
                                arr_52 [i_5] [(signed char)9] [i_15] [i_16] [i_18] = ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32753)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)96)) - (67)))))) ? (((/* implicit */unsigned long long int) ((((-3679952414441707267LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (8896)))))) : (arr_7 [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 3]));
                                var_39 += ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_6] [i_6] [i_5 + 1] [i_5 + 1])) < (((/* implicit */int) arr_10 [i_18 - 2] [i_6] [i_18 + 2] [i_16]))));
                                var_40 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65533)) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047))) == (2147483648U))))));
                            }
                            for (unsigned long long int i_19 = 4; i_19 < 10; i_19 += 4) /* same iter space */
                            {
                                arr_56 [i_5] [i_6] [i_6] [i_15] [i_16] [i_16] [i_19 + 2] |= ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) var_1)), (7049890968129769031ULL))));
                                var_41 |= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_50 [i_15] [i_15] [i_15] [i_15] [i_16 + 1]), (arr_50 [i_5 + 1] [i_6] [i_15] [11U] [i_16 + 1])))) ? (max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (arr_50 [i_5] [7ULL] [i_5] [i_16] [i_16 + 1]))))));
                                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) max((arr_38 [i_19] [(unsigned short)0]), ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_43 [(unsigned short)4] [i_6] [(unsigned short)4])) * (((/* implicit */int) arr_18 [(unsigned char)9] [i_6] [i_15] [(unsigned short)10]))))))))))));
                            }
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_5 + 1] [i_5] [0U] [i_5])) ? (((/* implicit */int) arr_28 [i_5 - 3] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_6))))) > (max((arr_41 [i_5 - 3] [i_16 + 3] [i_6]), (arr_41 [i_5] [i_16 - 1] [i_15])))));
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_39 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_16 + 2])), (1469899443U)))) >= (((((/* implicit */_Bool) arr_41 [i_5 - 3] [i_16] [i_16])) ? (arr_41 [i_5 - 3] [i_5 - 3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            arr_57 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) min((max((((/* implicit */unsigned int) (unsigned char)54)), (arr_49 [i_16] [i_5 + 1] [i_16 + 3]))), (arr_49 [8ULL] [i_5 + 1] [i_16 + 3])));
                            var_45 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */unsigned long long int) -9223372036854775797LL)) : (10102912407231350388ULL)))) || (((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_5] [i_6] [i_15] [i_15] [i_16]))))))) ? (min((((arr_3 [i_16] [(signed char)4]) << (((((/* implicit */int) var_5)) - (96))))), (((/* implicit */long long int) ((unsigned short) arr_4 [(short)8] [(short)8]))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
}
