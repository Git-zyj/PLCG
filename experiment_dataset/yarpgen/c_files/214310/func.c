/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214310
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [0LL] &= ((/* implicit */_Bool) max((max((arr_0 [(unsigned short)10]), ((-(var_1))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) (short)3))))) != ((+(var_2))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = (unsigned char)122;
                    arr_9 [i_0] [i_2] [i_1 - 1] = ((/* implicit */int) ((unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0]))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_2 - 1] [i_3] [(unsigned char)9] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), (arr_4 [i_3] [(_Bool)1] [i_0]))))) : (((arr_7 [i_0 + 1] [i_1] [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [(unsigned char)6] [i_0]))))))));
                        var_20 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((long long int) 17590247118904021287ULL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0])) != (((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3])) - (var_8)))))))));
                        var_21 -= ((/* implicit */signed char) 2169582415395207605ULL);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 11; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_11 [i_5 - 1] [i_5] [i_5 - 2] [(_Bool)1])) : (((/* implicit */int) arr_11 [i_5 - 2] [(signed char)1] [(signed char)1] [i_5]))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 1] [i_2] [i_1 - 2] [i_1 + 1] [10]))) : (var_13)));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_23 [i_0 - 1] [i_0] [i_2 + 1] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]);
                            arr_24 [i_0] [i_1 + 1] [i_0] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11)) >> (((((/* implicit */int) (unsigned short)58673)) - (58666)))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_27 [i_0 - 1] [i_1] [i_2 - 1] [i_0] [i_0])));
                            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_1] [6ULL] [i_2 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4957368737872339616LL))))) : (((/* implicit */int) arr_4 [i_1] [i_4] [i_1]))));
                            var_24 = ((/* implicit */unsigned int) ((_Bool) arr_22 [i_1 - 1] [i_0 + 1] [i_4] [i_4] [i_0]));
                            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_0 - 1] [i_2 + 1] [i_0] [10] [i_1 + 1])) ? (((((/* implicit */_Bool) -9177567462519433047LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_15))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [(unsigned char)10] [i_4] [(unsigned char)10])))))));
                            arr_30 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_1 - 1] [i_2] [i_4]);
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4] [i_4] [i_1] [i_4])) ? (((/* implicit */int) ((short) (short)28447))) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [6ULL] [i_2 + 1] [i_4]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 3; i_8 < 10; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (short)32748))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [1U] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_8] [i_0] [i_1] [(_Bool)1])))) : (((/* implicit */int) arr_25 [i_0] [i_8 - 2] [i_8 - 2] [i_8 - 3] [i_8 + 2] [i_8 - 3]))));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = (unsigned char)60;
                        var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_8 - 3] [i_1])) >> (((arr_26 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 2]) - (6549557896771492557LL)))));
                        var_28 = ((/* implicit */long long int) (-(((arr_27 [i_0] [i_0] [6] [i_1] [i_0]) >> (((var_16) + (4613318531637250113LL)))))));
                        arr_35 [i_0] [i_0 - 1] [i_1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (+(arr_7 [i_2 - 1] [i_1 + 1] [i_0 - 1])));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2 - 1] [i_0] [i_1 - 1] [8LL])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((signed char) -1513796633))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11422))))), (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_9] [i_9])) * (((/* implicit */int) arr_28 [i_0] [i_2 - 1] [i_0] [i_0]))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [(short)9] [i_0] [i_0]))))) != (var_15))))) % (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_0 - 1] [i_0]))) : (arr_2 [i_10] [i_10]))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))))));
                            arr_41 [i_0] [i_0] [i_1 + 1] [(unsigned char)1] [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_2] [i_2])) ? (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_9]) : (((/* implicit */int) (short)7515))))) ? ((~(var_9))) : (max((var_18), (((/* implicit */long long int) arr_22 [i_0] [i_1] [i_2] [i_9] [i_0]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            arr_44 [i_0] [i_9] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1732905162181046443LL))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_1 - 2]))) != (var_1))))));
                            var_31 = ((((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_1 - 1] [i_0 - 1] [i_0])) - (((((/* implicit */_Bool) 17479844465985447559ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                        {
                            arr_47 [i_0] [i_2] [i_2] = ((/* implicit */long long int) arr_0 [i_0]);
                            var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                            var_33 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) arr_6 [i_0 + 1] [i_0] [i_0]))), (min((((long long int) (signed char)-21)), (((/* implicit */long long int) max((((/* implicit */short) arr_45 [i_0] [i_0] [10LL] [i_0 - 1] [i_0])), (arr_10 [i_0] [i_1 + 1] [(unsigned char)0] [i_9] [i_0]))))))));
                        }
                        arr_48 [11LL] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) (unsigned char)252));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_53 [i_0] [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) var_7);
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]))) < (((((_Bool) arr_8 [i_0 - 1] [i_1] [i_2] [i_13])) ? (((/* implicit */unsigned long long int) ((int) arr_51 [i_0] [i_1] [i_2]))) : (max((arr_27 [i_13] [i_1] [i_1 + 1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_4)))))))))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) != ((~(((/* implicit */int) arr_1 [i_0]))))));
                        arr_54 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_14)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0 + 1]))) % (var_2)))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_6), (((/* implicit */short) arr_49 [i_0] [(signed char)7] [i_0] [i_0 - 1] [i_0]))))) ? (((((/* implicit */_Bool) arr_49 [i_0] [9ULL] [10LL] [i_0] [i_0])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43248))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_28 [i_0] [i_0] [(signed char)9] [i_0])) : (((/* implicit */int) var_11)))))))));
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (unsigned char i_15 = 3; i_15 < 10; i_15 += 3) 
            {
                for (unsigned char i_16 = 3; i_16 < 10; i_16 += 3) 
                {
                    {
                        arr_63 [i_14] &= ((/* implicit */unsigned long long int) arr_1 [i_14]);
                        arr_64 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)13932))) != (var_17))), ((!(((/* implicit */_Bool) var_7)))))))));
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_18)) ? (3942844341U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_8)))) < (((var_16) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))))));
}
