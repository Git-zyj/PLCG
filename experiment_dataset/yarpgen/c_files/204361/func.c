/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204361
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
    var_18 = ((/* implicit */signed char) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((unsigned int) 637100157U));
                        arr_12 [i_3] [i_1] [i_1] [i_3] = max((max(((-(arr_7 [i_0] [i_1] [(unsigned char)11] [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))), (max((((((/* implicit */_Bool) 1619187187)) ? (1564763530) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))), ((+(((/* implicit */int) var_2)))))));
                        arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1] [i_3])), ((unsigned short)12)))) / (((/* implicit */int) var_2))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_16 [i_4] [i_1] [i_3] [i_3] [i_1] [i_0] = ((signed char) (-(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [5U] [i_4])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [6ULL] [6ULL]))))));
                            var_20 = ((/* implicit */unsigned long long int) min((((long long int) arr_11 [i_3] [i_3])), (((/* implicit */long long int) ((unsigned int) var_9)))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_20 [i_0] [(signed char)11] [i_3] [i_3] [6LL] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_3]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_0] [i_3] [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [6] [i_3])))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_23 [i_3] [i_0] [i_3] [3ULL] [3ULL] [3ULL] [i_3] = ((/* implicit */unsigned short) ((((arr_11 [i_3] [i_2]) ? (((/* implicit */int) arr_11 [i_3] [i_1])) : (((/* implicit */int) (unsigned char)178)))) <= ((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) arr_8 [(unsigned char)9] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_3] [i_0] [i_3]))))));
                            arr_24 [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_14 [i_0] [i_3] [1LL] [i_0] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_2])) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((14704339752299749404ULL) > (((/* implicit */unsigned long long int) -1749632057)))))));
                            var_22 = max((((((((/* implicit */_Bool) 1619187187)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)1184)))) % (arr_19 [i_0] [i_1] [i_3] [i_3] [i_6]))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1])), ((unsigned short)37901)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (((~(var_15))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3271)))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [(signed char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (var_15)));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)117)) ? (arr_18 [i_0] [i_0] [i_2] [i_7] [i_8]) : (((/* implicit */unsigned int) arr_19 [(short)0] [i_7] [i_0] [i_1] [i_0]))));
                            var_26 = ((/* implicit */signed char) ((arr_10 [i_0] [i_1] [i_2] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_7] [i_0]))));
                            arr_30 [9ULL] [11ULL] [i_2] [9ULL] [i_8] = ((/* implicit */unsigned long long int) var_15);
                            arr_31 [i_0] = ((/* implicit */unsigned short) ((arr_11 [i_0] [i_7]) ? (((/* implicit */int) arr_11 [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_7]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [8U] [8U] [i_7] [i_0])) < (((/* implicit */int) arr_25 [0] [i_7] [i_2] [i_1] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((/* implicit */int) var_9))))) : (arr_7 [i_0] [i_1] [i_2] [i_7])));
                            var_28 = ((/* implicit */signed char) var_7);
                            arr_35 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [9ULL] = ((/* implicit */unsigned short) -4817733787611580384LL);
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((arr_7 [i_10] [i_2] [(signed char)5] [8U]) <= (((/* implicit */int) (unsigned short)7)))) ? (((arr_10 [(unsigned char)4] [i_1] [i_1] [i_0]) ? (arr_1 [i_2]) : (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) (signed char)-23))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_10] [i_2]))));
                        var_31 = ((/* implicit */unsigned char) ((((var_13) / (((/* implicit */int) (unsigned short)65534)))) <= ((~(((/* implicit */int) (unsigned short)1174))))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [(unsigned short)0] [(unsigned short)0] [i_2] [(unsigned short)0])) * (((/* implicit */int) arr_26 [(unsigned short)0] [4U] [i_1] [i_0]))));
                    }
                    var_33 = ((/* implicit */unsigned int) (-2147483647 - 1));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned int) 0ULL);
}
