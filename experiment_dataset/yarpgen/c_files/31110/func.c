/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31110
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0]))));
                arr_10 [i_2] [i_1] [i_2 + 2] = ((/* implicit */long long int) var_13);
                arr_11 [i_2] = ((/* implicit */_Bool) arr_9 [(short)13] [i_2] [i_2]);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) var_19);
                            arr_17 [i_4] [i_4] [i_2] [i_2] [12ULL] [i_0] = ((((/* implicit */_Bool) var_19)) ? (arr_8 [i_2] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                            var_22 &= ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2 - 1] [i_4] [i_2 - 1]);
                        }
                    } 
                } 
            }
            arr_18 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [8ULL] [2] [i_1 - 1])) >> (((((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_0] [2LL] [i_1 + 1])) - (96)))));
            arr_19 [i_0] = ((/* implicit */unsigned short) var_16);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_9 [i_6] [i_0] [i_0]))));
                        arr_26 [i_1] [i_5] = ((/* implicit */long long int) (_Bool)0);
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1]))))));
        }
        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 4) 
        {
            arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] |= ((/* implicit */_Bool) ((arr_14 [i_0] [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_7] [i_0] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_14 [i_0 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
            arr_30 [i_0] [i_0] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [12ULL] [(signed char)4] [10LL] [i_0 + 1] [i_7]))) == (-1LL)));
            arr_31 [i_0] = ((/* implicit */signed char) ((-4318902404107954205LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
        }
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (arr_8 [(short)6] [i_0 + 1] [i_0])));
        var_26 = ((/* implicit */signed char) (unsigned short)65535);
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        var_27 &= ((/* implicit */unsigned long long int) min((((unsigned char) ((int) arr_33 [i_8]))), (((/* implicit */unsigned char) arr_14 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]))));
        /* LoopNest 3 */
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 4) 
                {
                    {
                        var_28 = ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8 + 1] [i_8] [i_9 + 2] [(signed char)12] [i_10] [(unsigned short)3]))) / (arr_21 [i_8] [i_10] [i_8]))), (((/* implicit */unsigned long long int) arr_37 [11ULL] [i_8 + 1] [i_11 + 2] [i_8])))) < (max((((/* implicit */unsigned long long int) (signed char)-32)), (var_12))));
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((arr_36 [i_12] [i_12]), (((/* implicit */short) min(((signed char)-32), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_12] [i_9] [i_10] [i_11]))) > (arr_42 [i_8] [(unsigned char)7] [i_12]))))))))))));
                            var_30 = ((/* implicit */unsigned long long int) var_19);
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [i_8 + 1] [i_8] [i_8])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_40 [i_8] [(unsigned short)6] [i_9] [i_10] [i_9] [i_12])), (var_18)))) : (((((/* implicit */_Bool) arr_3 [i_8] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_8] [i_8]))) : (9223372036854775807LL)))))) || (((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) arr_41 [(signed char)8] [i_9] [i_9] [i_9 + 2] [i_8] [9U] [i_9 + 3]))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_32 &= ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) <= (((long long int) arr_12 [(unsigned char)6] [i_9] [(unsigned char)6] [i_9 + 3] [(unsigned short)12] [i_10])));
                            arr_46 [i_8] [i_8] [(unsigned short)10] [i_11] [i_13] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)2)) == (((/* implicit */int) max((((/* implicit */unsigned short) arr_32 [i_11] [i_8])), (var_19)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_10] [i_10])), ((unsigned short)255)))) : (((/* implicit */int) min((var_17), (((/* implicit */unsigned short) var_16)))))));
                            arr_47 [i_8] [0LL] [i_8] [i_8] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */int) arr_7 [i_11])), (arr_34 [i_8]))), (((/* implicit */int) arr_24 [i_8 + 1] [(short)8] [i_8] [i_8 + 1]))))) ? (((/* implicit */unsigned long long int) min((max((1200017452), (((/* implicit */int) (signed char)37)))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)32)), ((unsigned short)0))))))) : (var_12)));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_11 + 1] [i_11 + 1] [i_11 - 2] [i_11 + 2])) || (((/* implicit */_Bool) arr_23 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 2]))))) + (((/* implicit */int) arr_43 [i_8] [i_8]))));
                        }
                        var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_8)), (var_16)))) >= (((/* implicit */int) min((arr_12 [11LL] [11LL] [i_9 + 3] [i_9 + 3] [i_10] [i_8]), (arr_12 [i_8] [i_8] [i_10] [i_8] [i_8] [i_8]))))))), ((-(((((/* implicit */_Bool) 3289550170U)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_28 [i_11] [i_8])))))));
                    }
                } 
            } 
        } 
    }
    var_35 *= ((/* implicit */unsigned char) var_8);
    var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)255)), (max((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)162)))), (((/* implicit */int) (unsigned char)5))))));
}
