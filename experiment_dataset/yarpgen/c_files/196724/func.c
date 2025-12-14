/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196724
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1]))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) 2305843009213693951LL);
                arr_8 [i_1] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) min((var_2), (var_16)))), (var_18))), (arr_0 [i_1])));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_19 = ((/* implicit */long long int) (_Bool)0);
                    arr_12 [12ULL] [(unsigned char)5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (_Bool)0))));
                    var_20 = ((((/* implicit */int) arr_2 [13U])) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))));
                }
                for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_21 -= ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))) / (max((arr_23 [i_0] [i_1] [(_Bool)1] [i_4 - 1] [(unsigned char)7] [7LL] [i_4 + 1]), (((/* implicit */unsigned int) arr_1 [10U] [i_4])))))));
                                var_22 -= ((/* implicit */int) ((((unsigned long long int) var_15)) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [12])))))));
                                var_23 &= ((/* implicit */int) min((((/* implicit */long long int) (~(947456819)))), (((long long int) arr_19 [5LL] [i_1] [i_3] [i_3 + 1] [i_4 - 1] [10ULL]))));
                                arr_24 [i_0] [i_1] [12] [i_4 - 1] [i_5] [i_1] [i_3 + 1] |= ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    arr_25 [i_0] [(short)11] = ((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1])))));
                    var_24 = ((/* implicit */short) (!(((_Bool) (_Bool)0))));
                }
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_25 -= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_18)) ? (var_16) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6])) || (((/* implicit */_Bool) (unsigned short)21807))))))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        arr_33 [i_0] [i_7] [11U] [11U] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) : ((+(var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_6] [i_1] [i_7 - 2]))) : (((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) : (var_7))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-102)))))));
                        arr_34 [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)24188)) ? (((/* implicit */long long int) 1836149016)) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_38 [10] [i_0] [i_1] [i_6] [10U] |= ((/* implicit */long long int) arr_21 [i_0] [i_1] [(signed char)8] [i_8] [i_8 - 1] [i_0]);
                        var_26 = ((/* implicit */int) (unsigned short)27403);
                        arr_39 [4] [i_1] [4] [i_8] = ((/* implicit */unsigned int) arr_30 [i_0] [8] [i_6] [i_6]);
                        var_27 &= ((/* implicit */signed char) (+(((unsigned int) 1793079652))));
                    }
                    for (short i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_44 [i_0] [i_1] [i_1] [i_6] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) 947456819)))));
                        var_28 |= ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), ((unsigned char)60)));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            arr_48 [i_10] [i_9] [i_9] [i_6] [(unsigned short)5] [i_0] &= ((/* implicit */signed char) ((((/* implicit */long long int) max((((int) 947456819)), ((+(((/* implicit */int) (unsigned short)21807))))))) + (min((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [4ULL]))))), (1511969553014963536LL)))));
                            var_29 = ((/* implicit */long long int) min(((unsigned short)21807), (((/* implicit */unsigned short) (signed char)92))));
                            arr_49 [i_10] [i_9] [i_1] [i_0] = ((/* implicit */int) var_15);
                            var_30 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 14; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_21 [(unsigned char)8] [i_1] [i_6] [i_9] [i_11 - 3] [i_11])))))), (((((/* implicit */_Bool) arr_50 [i_11 + 2] [i_11] [5U] [i_11 - 1] [i_11 - 3] [i_11 - 1])) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32767))))))));
                            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-32767)) / (max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)30))))));
                        }
                        for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(short)6] [i_1] [i_6] [i_9] [10LL] [i_6])))))));
                            var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_12]), (((/* implicit */unsigned char) (signed char)15)))))) : (18362976060227355945ULL))))));
                            var_35 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_1])) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_36 [11U] [i_1] [i_6] [i_9] [11U])))) && (((((/* implicit */_Bool) 951619348)) || (((/* implicit */_Bool) (signed char)20)))))))));
                        }
                        for (long long int i_13 = 1; i_13 < 15; i_13 += 2) 
                        {
                            arr_58 [i_0] &= ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) (short)1313))), ((~(((/* implicit */int) (signed char)19))))));
                            arr_59 [i_6] [(short)6] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)146)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_6]))) ? (((/* implicit */int) (unsigned short)12554)) : (((/* implicit */int) var_12))))) : (3643711865504461510LL)));
                        }
                    }
                    arr_60 [(short)1] = ((/* implicit */unsigned long long int) (-(((arr_23 [i_0] [i_0] [(unsigned char)9] [(unsigned char)9] [i_0] [15U] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_1] [i_6] [i_1] [i_6] [(_Bool)1])))))));
                }
            }
        } 
    } 
    var_36 &= ((/* implicit */unsigned long long int) var_15);
}
