/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245746
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1444)))))) ? (((/* implicit */int) min(((short)22), (((/* implicit */short) var_11))))) : (((/* implicit */int) var_0)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_8)))) ? (((/* implicit */int) arr_11 [i_2] [i_1])) : (arr_6 [i_0] [i_1] [i_2])))) || (((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)64063)))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)19387)) : (((/* implicit */int) (unsigned short)19387)))), (max((var_1), (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-17)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [6] [i_1])) * (((/* implicit */int) (short)22)))))))) : (arr_10 [i_0] [i_1] [i_0])));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                var_23 |= ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 + 1] [(unsigned char)1] [i_4]);
                                var_24 -= ((/* implicit */unsigned int) ((((_Bool) (signed char)57)) ? ((~(((/* implicit */int) arr_5 [i_2] [10] [i_4])))) : (((/* implicit */int) (signed char)68))));
                                var_25 = ((((/* implicit */_Bool) (signed char)-20)) && (var_18));
                                var_26 = ((/* implicit */unsigned short) ((signed char) arr_7 [i_0] [i_1] [i_3] [(_Bool)1]));
                            }
                            arr_15 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)101))))), (var_12))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0] [i_0]);
                /* LoopSeq 4 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_1] [i_1]) < (((/* implicit */unsigned long long int) var_12)))))))))) : (var_9)));
                    var_29 -= ((/* implicit */unsigned long long int) arr_0 [(signed char)19]);
                    arr_18 [i_1] = ((/* implicit */unsigned char) ((max((min((arr_3 [i_0] [i_0]), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_5)))) != (((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_16 [i_1] [i_1] [(unsigned char)2] [i_0]))))));
                    arr_19 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */int) ((_Bool) (signed char)-10));
                    arr_20 [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (((((/* implicit */_Bool) 13544908530588458961ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1])) >> (((min((-576460752303423488LL), (((/* implicit */long long int) (_Bool)1)))) + (576460752303423491LL))))) : (min((((((/* implicit */_Bool) 3008371475U)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_16 [i_1] [(signed char)19] [(signed char)19] [i_0])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-4211)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                }
                for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))) >> (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6 + 1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_6] [(short)7])) : (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [(_Bool)1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (min((((/* implicit */long long int) var_18)), (var_9)))))));
                    var_31 = ((/* implicit */unsigned int) var_15);
                }
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
                                arr_34 [i_8 + 2] [i_1] [i_7] [i_7] [i_7] [i_0] [8U] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1])))));
                            }
                        } 
                    } 
                    var_33 -= ((/* implicit */short) ((max((max((arr_13 [i_0] [1LL] [1LL] [i_7]), (((/* implicit */int) arr_28 [i_0] [i_0] [(short)10] [(_Bool)1])))), (((/* implicit */int) (!(var_5)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7] [i_1] [i_0])) ? (var_3) : (var_1)))))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
                    {
                        for (signed char i_12 = 2; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * ((-(((/* implicit */int) var_5))))))) + (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (max((((/* implicit */unsigned long long int) var_14)), (9786934648114033487ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_1] [i_10] [i_11]))) : (arr_8 [i_10] [i_10] [i_1]))))))));
                                arr_43 [i_0] [i_1] [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) max((-373647391), (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) 812817484459560421LL))))));
                                arr_44 [i_12 - 1] [i_10] [i_11] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((arr_3 [i_1] [i_1]), (arr_6 [21U] [(signed char)15] [i_11 + 1]))) >> ((((~(13ULL))) - (18446744073709551595ULL)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_6)) << (((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_4 [i_1] [i_0])))) - (27395)))))));
                                var_35 = ((/* implicit */unsigned short) var_11);
                                arr_45 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_28 [i_12] [i_11] [i_10] [i_1])) ? (min((((/* implicit */long long int) (signed char)-4)), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17))))))), (((/* implicit */long long int) var_18))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((arr_25 [i_0]), (arr_25 [i_1]))))));
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_48 [i_13] [i_10] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_13] [i_13] [i_13] [i_13]))))) : (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */long long int) arr_46 [i_10] [i_10] [i_10] [i_10] [i_0])) : ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7191))) : (5769265304466363216ULL)))) ? (((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_10] [i_13])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned char) arr_11 [i_13] [i_0]);
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */unsigned long long int) 4294967293U)) - (((((/* implicit */_Bool) (short)-4612)) ? (var_8) : (((/* implicit */unsigned long long int) -2034786617)))))))));
                            var_39 = (+(((/* implicit */int) ((_Bool) arr_33 [i_0] [i_0] [i_10] [i_1] [i_14] [i_1] [i_14]))));
                        }
                        arr_51 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)210))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12895))))) : (((/* implicit */int) ((((/* implicit */int) arr_25 [i_0])) >= (arr_30 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    arr_52 [i_0] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12918))) * (arr_35 [i_0] [i_0] [i_0] [i_0])));
                    var_41 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_38 [(unsigned char)10] [i_10] [i_10])) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (signed char)34)))))) - (((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_0]))));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4612))))))) == ((~(max((((/* implicit */long long int) -1579077724)), (var_14)))))));
    var_43 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) max((var_15), (((/* implicit */int) var_6))))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_12))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (var_2))))))))));
    var_44 = ((/* implicit */short) (~(var_1)));
    var_45 = ((/* implicit */unsigned short) var_6);
}
