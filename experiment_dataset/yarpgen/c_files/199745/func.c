/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199745
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 &= ((/* implicit */signed char) -1);
                arr_6 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0 + 4])) ? ((-(((/* implicit */int) (short)1099)))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_1 [i_1] [i_1])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0])) && (((/* implicit */_Bool) 5917185597949132609ULL)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((long long int) arr_1 [i_0] [(short)8])) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))));
                        arr_13 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        arr_14 [13U] [i_0] [i_1] [i_1] [i_1] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12529558475760419016ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 2] [(unsigned char)16] [i_0 - 2] [(unsigned char)16]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) - (var_4)))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) 3586701066U);
                        var_14 = ((/* implicit */unsigned char) (+(((12529558475760419026ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0])))))));
                        var_15 = ((/* implicit */short) arr_4 [i_0]);
                        arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_16 [i_0] [i_1] [i_1]));
                    }
                    var_16 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_22 [(unsigned char)8] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_5]);
                        var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1]))) : (arr_8 [i_0] [i_1] [i_1])))));
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            arr_29 [i_0] [i_6] [i_2] [(unsigned short)4] [(unsigned short)4] [(signed char)2] &= ((/* implicit */unsigned char) ((arr_23 [i_7]) != (((/* implicit */int) var_7))));
                            var_18 += ((/* implicit */short) var_8);
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) ((signed char) arr_26 [12U] [8LL] [i_0 + 2] [(unsigned char)16] [i_0 + 2]));
                            var_20 = ((/* implicit */long long int) (unsigned short)0);
                            arr_32 [i_0] [i_8] [i_8] [15LL] [i_8] [0ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -5924089267867520391LL)) - (5917185597949132633ULL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_5 [i_0] [i_6])))))));
                            var_21 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_1] [(short)15]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])) : (arr_16 [i_0] [i_0] [i_0 - 1]));
                        }
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) var_9);
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            arr_39 [i_0] = ((var_3) - (arr_2 [i_0]));
                            arr_40 [i_0 - 3] [i_1] [2LL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) / (arr_23 [i_0])));
                        }
                        arr_41 [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_0 - 3] [i_6])) : (((/* implicit */int) ((unsigned short) var_9)))));
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        arr_44 [i_11] [i_0] [(signed char)10] [i_0] [6LL] = arr_11 [i_0 - 3] [i_0 - 2];
                        var_24 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) arr_18 [i_0] [i_0] [12ULL] [i_0])) + (38)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) << (((((((/* implicit */int) arr_18 [i_0] [i_0] [12ULL] [i_0])) + (38))) + (58))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((long long int) var_4)))));
                    }
                    var_26 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 4] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 16; i_13 += 2) 
                        {
                            {
                                arr_49 [i_2] [i_2] [i_2] [i_2] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)85))));
                                arr_50 [i_0] [i_1] [i_0] [i_12] [15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((12529558475760418989ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [10] [i_0] [10])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((max(((signed char)-86), (var_6))), (((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (-9223372036854775807LL))))));
                            arr_57 [(_Bool)1] [(_Bool)1] [i_0] [i_15] = ((/* implicit */short) (-(((/* implicit */int) arr_47 [i_0] [i_0] [i_14] [i_0] [i_14]))));
                            arr_58 [i_0] [i_0] [i_14] [i_0] = ((((/* implicit */int) ((unsigned char) ((int) arr_10 [(short)13] [(unsigned char)10] [i_1] [i_0])))) < (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_20 [(_Bool)1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) var_9);
}
