/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210568
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 619749774U))))) <= (min((min((1122414784), (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */short) arr_1 [i_0])))))))));
                var_20 = ((/* implicit */long long int) 7);
                var_21 = ((/* implicit */unsigned int) ((unsigned short) min((max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_1])))), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    arr_10 [i_0] [15ULL] [i_2 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((arr_9 [i_1] [i_1] [i_1]) ? (572181546U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (max((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) ((signed char) arr_8 [i_0] [(short)0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(short)12])))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_2 + 1]))) ? (((unsigned long long int) var_7)) : (arr_2 [i_2 + 2])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_13 [i_1] [(short)7] [i_2 + 3] [i_4] [i_4]));
                                arr_18 [(unsigned char)15] [i_0] [i_0] [i_0] [2LL] = ((/* implicit */unsigned short) (-(arr_12 [i_2] [i_2] [(short)13])));
                                var_23 = ((/* implicit */_Bool) (-(var_11)));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) (signed char)1))), (((((/* implicit */_Bool) var_7)) ? (131071U) : (3722785749U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) >= (((arr_9 [i_0] [i_0] [(unsigned short)16]) ? (arr_20 [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))))) : (arr_7 [0U] [i_5])));
                    arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [0]))))) ? (((min((var_7), (((/* implicit */unsigned int) var_6)))) % (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0]), ((short)-32092))))))) : (3722785750U)));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((unsigned int) arr_13 [i_5] [16LL] [i_5] [(unsigned char)3] [i_5])) : (max((((/* implicit */unsigned int) var_4)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) var_8)))))));
                }
                for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_26 |= ((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_6 + 1]);
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((arr_16 [i_6] [i_1]) + (2147483647))) << (((((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1671736347U)) : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))) - (1671736347ULL)))));
                            var_28 = ((/* implicit */unsigned long long int) max((max((arr_20 [i_6 - 1] [i_6 - 1]), (arr_14 [i_6 + 1] [i_6 + 1] [i_0] [i_6 - 2]))), (min((arr_20 [i_6 - 1] [i_6 - 3]), (arr_14 [i_6 - 2] [i_6 + 1] [i_0] [i_6 - 2])))));
                        }
                        for (signed char i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) ((unsigned short) ((13303328238276895511ULL) ^ (((/* implicit */unsigned long long int) -6306201581030912044LL)))));
                            var_30 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_27 [(unsigned char)12] [i_0] [i_6] [i_0] [i_0]))) % (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [8] [i_0])), (arr_14 [i_0] [i_1] [i_0] [i_7])))) && (((/* implicit */_Bool) max((3722785750U), (((/* implicit */unsigned int) (short)32089))))))))));
                            var_31 = ((/* implicit */unsigned int) arr_27 [i_9 - 1] [i_0] [i_0] [i_0] [i_0]);
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) arr_23 [i_1]))), (arr_27 [i_9] [i_9] [i_9] [i_0] [i_0]))))));
                        }
                        for (signed char i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_6 + 1] [i_7] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_26 [i_0] [13U] [i_6] [13U] [i_10] [i_10]), (((/* implicit */unsigned short) var_15))))), (((arr_32 [i_0] [i_1]) ? (((/* implicit */int) arr_32 [i_0] [i_1])) : (((/* implicit */int) var_3))))))) : (((unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) 861344648U)))))));
                            arr_35 [i_0] = ((/* implicit */signed char) max((((min((var_5), (var_16))) | (((/* implicit */unsigned long long int) ((3931224704U) % (((/* implicit */unsigned int) 994075356))))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (signed char)8)), (3722785739U))), (min((572181557U), (((/* implicit */unsigned int) (short)-32120)))))))));
                            arr_36 [(_Bool)1] [i_0] [i_6] [i_7] [i_10 + 2] = max(((+(max((arr_14 [7] [7] [i_0] [i_7]), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)1)) * (((/* implicit */int) (signed char)1)))) / (((/* implicit */int) var_15))))));
                        }
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) ((signed char) var_12)))))) ? (((((/* implicit */_Bool) arr_19 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 1])) ? (arr_20 [i_0] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (var_7) : ((+(3035862082U))))))));
                    }
                    var_34 = ((/* implicit */_Bool) (+(max((-1703578760174655826LL), (((/* implicit */long long int) 4294967292U))))));
                    arr_37 [i_1] [i_1] [i_6] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_28 [i_6 - 1] [12] [i_6 - 3] [i_6 - 1])) ? (((((/* implicit */_Bool) (short)-32074)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)113)))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_4 [i_0] [(signed char)3])) : (-30340196))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 16; i_12 += 3) 
                        {
                            {
                                arr_44 [i_11] [i_11] [i_11] [i_11] [(short)2] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_20 [i_12 - 2] [i_6]))), (max((arr_16 [1LL] [i_1]), (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (13115879141169587965ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3391797397U))))))));
                                var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32074)), ((unsigned short)57354)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [(signed char)8] [11U] [i_1])) != (((/* implicit */int) (unsigned short)0)))))) : (3423680011U)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_13 = 3; i_13 < 15; i_13 += 1) 
                    {
                        var_36 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_13 + 2] [i_13 + 2] [i_6 - 1] [i_6 + 1]))) / (var_16));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (var_18) : (arr_7 [i_14] [i_14]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32074)))))))) ? (((/* implicit */int) min(((short)-32757), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) ((short) max((((/* implicit */int) var_17)), (2124087175)))))));
                            var_38 = ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 405587580U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 3] [i_6])))))));
                            arr_49 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_6 + 1] [i_0] [i_6 - 1])) / (max((var_16), (((/* implicit */unsigned long long int) arr_15 [i_0] [(short)15] [i_6 - 3] [(signed char)3] [i_0] [i_0] [i_14]))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_6] [(unsigned short)0] [i_14]))));
                            arr_50 [i_0] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_11 [8ULL] [(signed char)1] [i_6] [i_13 + 1] [i_14])))) ? (((long long int) 67108864)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_6] [i_0] [i_14])) ? (((/* implicit */int) arr_29 [i_0] [i_1] [(short)13] [i_13] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_17))))))));
                        }
                    }
                }
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned int) ((unsigned short) var_9));
    /* LoopNest 2 */
    for (signed char i_15 = 2; i_15 < 8; i_15 += 2) 
    {
        for (unsigned int i_16 = 1; i_16 < 8; i_16 += 1) 
        {
            {
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-78)), ((short)14615)))) ? (((((/* implicit */_Bool) ((arr_9 [i_16] [(unsigned short)16] [i_16]) ? (var_10) : (var_10)))) ? (((/* implicit */unsigned long long int) arr_12 [i_16 + 2] [i_16 + 2] [i_16 + 1])) : (((((/* implicit */_Bool) arr_30 [i_15 - 2] [i_15 - 2] [i_15] [i_15 + 2] [i_15 + 1] [i_15])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % ((+(var_7)))))))))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 8; i_17 += 1) 
                {
                    for (signed char i_18 = 2; i_18 < 7; i_18 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -7976226138451932941LL))))), (((((/* implicit */_Bool) arr_41 [i_18] [i_17 + 2] [i_17 + 2])) ? ((((_Bool)1) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))))) : (((unsigned long long int) (_Bool)1))))));
                            var_42 = ((/* implicit */int) max((((/* implicit */unsigned int) var_13)), (((unsigned int) ((long long int) (short)5196)))));
                        }
                    } 
                } 
                arr_64 [i_15] [i_15 + 2] [i_15] = ((/* implicit */unsigned short) ((((unsigned int) -7976226138451932941LL)) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_16 + 2] [i_16 - 1] [i_16 + 2])) * ((-(((/* implicit */int) (signed char)123)))))))));
            }
        } 
    } 
}
