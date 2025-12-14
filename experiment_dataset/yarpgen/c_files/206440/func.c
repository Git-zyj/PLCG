/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206440
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 2])), (arr_1 [i_2 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-116)) + (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 2] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)115)))))));
                                var_21 += ((/* implicit */signed char) ((var_15) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [(short)8] [i_2 + 1] [i_2 + 1])) >= (((/* implicit */int) arr_10 [(unsigned char)4] [i_1] [(unsigned short)4] [i_2 + 1] [i_2 - 1])))))));
                                var_22 = ((/* implicit */int) (((~(arr_1 [i_3 - 1]))) % (max((arr_1 [i_0]), (arr_1 [i_1])))));
                                var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (unsigned short)27578)))), ((~(((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) << (((((/* implicit */int) (unsigned char)41)) - (39)))))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((max((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [(unsigned short)3] [8U])))), (((int) arr_6 [i_3] [i_2 - 1] [i_1] [i_0])))) + (((/* implicit */int) (signed char)-15)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [(unsigned char)5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((-4567966753332324944LL), (((/* implicit */long long int) (unsigned char)20)))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_8 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_3 [i_2] [i_2]))) >> (((((((/* implicit */int) arr_4 [i_5] [(short)6] [(short)5])) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_5])))) - (47))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) var_4);
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_20 [i_7] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)8057)) << (((((/* implicit */int) var_8)) - (184)))));
                            var_27 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1))))));
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(arr_1 [i_0]))))));
                            arr_26 [i_0] [i_0] [i_2] [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned long long int) (short)-1)), (arr_25 [i_9] [(signed char)6] [i_2 - 1] [i_8] [i_8] [(short)3] [i_8]))) : (((/* implicit */unsigned long long int) 4567966753332324944LL)))) - (((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_13 [(unsigned short)2] [i_0])), (-1395502547))) * (((/* implicit */int) (signed char)-116)))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            arr_29 [i_0] [(unsigned short)0] [i_2] [2ULL] [i_10] &= ((arr_16 [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1]) - (arr_16 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2]));
                            var_29 = ((/* implicit */_Bool) 2769849528698348724LL);
                            var_30 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_12)) ? (-7931149794337833631LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        }
                        for (unsigned short i_11 = 2; i_11 < 12; i_11 += 1) 
                        {
                            arr_32 [i_0] = var_8;
                            var_31 = ((/* implicit */signed char) ((((int) arr_15 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0])) == (((/* implicit */int) max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_32 = ((/* implicit */unsigned short) (short)-32425);
                            var_33 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7350063501588435852LL))));
                            arr_33 [i_0] [(unsigned short)11] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_23 [i_11 - 1]) ? (((/* implicit */int) arr_23 [i_11 - 2])) : (((/* implicit */int) arr_23 [i_11 + 1]))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_23 [i_11 + 1]))))) : ((-(((/* implicit */int) var_8))))));
                        }
                        var_34 = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_1] [(_Bool)1] [i_8]) + (((/* implicit */unsigned int) 2042498628))));
                    }
                }
                for (long long int i_12 = 2; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    var_35 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_1 [i_12 + 1])))));
                    var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (short)9193))))), (((((/* implicit */_Bool) ((var_16) << (((((/* implicit */int) var_11)) - (66)))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)137)), (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            {
                                var_37 += ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [3U] [(short)9] [(unsigned short)7] [i_12 - 2] [i_12 - 2] [i_1] [i_1]))));
                                arr_42 [i_14] [i_0] [(signed char)2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_39 [i_12 + 1] [i_12] [i_12] [i_12] [i_1]))));
                                arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((-3454587357365796945LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 2) 
                {
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)48151)))))));
                    var_39 &= ((((/* implicit */_Bool) 5849109710591827953ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_15 - 2] [(unsigned short)6] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)11] [i_15])) : (((/* implicit */int) arr_24 [i_0] [i_15] [i_15] [i_0] [i_0] [i_1] [(_Bool)1]))))) % (((arr_40 [(signed char)8] [(_Bool)1] [(unsigned short)8] [i_15] [(_Bool)1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_16 = 3; i_16 < 10; i_16 += 1) 
                {
                    arr_50 [i_0] [i_0] [(_Bool)1] [(short)9] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-46))));
                    var_40 = ((/* implicit */int) min((var_40), ((~(((/* implicit */int) arr_8 [i_0] [i_1]))))));
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_0])) > (((/* implicit */int) (_Bool)1))));
                    arr_51 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0]))))) << (((((/* implicit */int) arr_4 [(unsigned char)0] [1ULL] [i_16 - 1])) - (29)))));
                }
                var_42 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((arr_47 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((unsigned char) (_Bool)0)))))) ? ((~(((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_13))));
                var_43 += ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_1]))))));
            }
        } 
    } 
    var_44 &= ((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_8))));
}
