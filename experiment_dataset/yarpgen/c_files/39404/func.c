/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39404
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) (((~(-7298534385539836468LL))) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43231)))))));
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (-(arr_8 [i_0] [i_0] [i_0])));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_10))));
                                arr_15 [i_0] [13] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]);
                                var_22 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_4 [(unsigned char)22] [(unsigned char)22]))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned char) max((max((var_6), (((/* implicit */int) ((((/* implicit */int) (short)23285)) < (((/* implicit */int) var_9))))))), (arr_2 [(unsigned char)17] [i_1])));
                    arr_20 [23] [i_1] [i_0] [i_5 + 1] = ((/* implicit */short) (signed char)-127);
                }
                var_24 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 4) 
        {
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max(((+(-9223372036854775807LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_7 + 2] [i_7 + 2]))))))))));
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_14 [i_6] [i_7] [i_8] [(_Bool)1] [i_9 + 1]))));
                        var_27 = ((/* implicit */long long int) max((var_1), (max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))))));
                        arr_35 [i_6] [i_7] [i_7] [i_8] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((18446744073709551595ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))))))) & ((+(-1954936771174205237LL)))));
                        arr_36 [(_Bool)1] [i_7] [1] [19] [(signed char)5] [i_7] = (-(((/* implicit */int) (_Bool)1)));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (+(arr_2 [i_6] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))) : ((+(arr_31 [i_6]))))) : ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)138)) <= (((/* implicit */int) (unsigned char)109)))))))));
                    }
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((var_0) >= (((/* implicit */int) var_12)))))));
                        var_30 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_10]))))) | (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 9223301668110598144LL)))))));
                    }
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_42 [i_6] [i_7 - 1] [i_7] [i_8] [i_11] [i_11] = ((/* implicit */long long int) var_14);
                        arr_43 [i_6] [i_7 + 3] [i_8] [i_11] [i_7] = ((/* implicit */unsigned long long int) ((short) ((signed char) ((((/* implicit */int) arr_24 [(unsigned short)9])) / (((/* implicit */int) (unsigned char)255))))));
                    }
                    var_31 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) (_Bool)1)))))));
                    var_32 = ((/* implicit */unsigned char) ((short) (unsigned char)2));
                }
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                {
                    arr_46 [(signed char)18] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-127))))));
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) max(((short)-2809), (((/* implicit */short) (unsigned char)92)))))))) / (max((max((5547449074288054577LL), (((/* implicit */long long int) (unsigned short)4620)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)147)) / (((/* implicit */int) (_Bool)1))))))))))));
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22309)) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)7140)))))));
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) 1680533190)) + (272678883688448ULL))), (((/* implicit */unsigned long long int) max((arr_44 [i_12] [i_7 + 3] [i_6]), (((/* implicit */int) (unsigned char)154))))))))));
                }
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    arr_50 [i_6] [(signed char)16] [i_6] [i_6] = max((((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) -9223372036854775807LL))))), (max((((((/* implicit */_Bool) (short)23285)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) (signed char)-8)))));
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 19; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 3; i_15 < 19; i_15 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */short) -9223372036854775807LL);
                                arr_58 [i_6] [i_7 + 4] [(signed char)7] [i_14 - 1] [i_15] [14LL] [i_7] |= ((/* implicit */int) var_11);
                                arr_59 [i_6] [i_7] [i_13] [i_14] [i_15] [i_7] &= ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_15)) ? (var_1) : (arr_51 [i_6] [i_7 + 2] [i_7 + 2]))) : (min((((/* implicit */int) arr_54 [(short)19] [(short)19] [i_13] [i_13] [i_13])), (arr_51 [(signed char)11] [(signed char)11] [i_13]))))) > (((((/* implicit */_Bool) (unsigned char)179)) ? (((((/* implicit */_Bool) arr_54 [i_6] [(signed char)4] [i_13] [i_14] [i_15])) ? (1783606673) : (((/* implicit */int) (signed char)23)))) : (((/* implicit */int) arr_17 [i_7] [i_14 - 1] [i_7])))));
                                arr_60 [i_6] [0] [i_13] [(unsigned short)15] [i_13] [i_14] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_7] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-32767))))) : (((long long int) var_12))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                    {
                        arr_63 [i_6] [i_7 + 4] [i_16] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_47 [i_7 + 2] [i_16 + 1] [i_16 - 1] [i_16])) ? (((/* implicit */int) var_9)) : (var_0)))));
                        arr_64 [i_6] [i_7 - 1] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (short)-10182)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)43231)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)17978)))))));
                        var_37 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_54 [i_6] [15LL] [15LL] [i_16 - 2] [i_6])))) / (((/* implicit */int) arr_54 [i_6] [(signed char)6] [i_7] [i_13] [i_13]))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        arr_67 [i_6] [i_7 + 4] [i_13] [i_17] = (short)-1;
                        arr_68 [i_17] [i_13] [i_7 + 1] = ((/* implicit */long long int) max((((((/* implicit */int) (short)32767)) / (((/* implicit */int) arr_22 [i_7 - 1] [i_7 + 3])))), (((/* implicit */int) max((arr_53 [i_7 - 1] [i_7 + 3] [i_7 + 3]), (arr_53 [i_7 - 1] [i_7 + 1] [i_7 + 1]))))));
                    }
                }
            }
        } 
    } 
}
