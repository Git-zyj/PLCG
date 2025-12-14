/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45252
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_1))) > (((/* implicit */unsigned int) max((var_0), (var_8)))))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_14)) ? (var_9) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */long long int) var_8)) : (var_12))))))));
    var_19 &= var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(short)1] [i_2] [i_2] [i_4] [i_3] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [3U] [3U] [i_4])) : (((/* implicit */int) arr_1 [i_0]))))));
                                arr_14 [2ULL] [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 4] [i_2]))) : (arr_16 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1])));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4922)) ? (var_0) : (((/* implicit */int) arr_11 [(signed char)4] [i_1] [i_1] [i_1] [i_1]))))) ? (((((((/* implicit */int) arr_2 [i_2])) + (2147483647))) >> (((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [(unsigned short)1]) - (497048259U))))) : (((int) var_11))));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_0] [(unsigned short)9] [i_2] [(short)8] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_2 [i_0]))))));
                        arr_21 [i_0] [8U] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_5 [i_0])))));
                        arr_22 [i_0] [i_1] [i_2 - 2] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0 - 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_0] [i_0 - 1] [5]))));
                        arr_23 [i_0] [(unsigned char)6] [2LL] = ((arr_8 [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2 - 2]) * (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 + 3]));
                        arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) var_11);
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) min((var_21), (arr_9 [i_2] [i_2] [i_2] [i_2])));
                        arr_29 [i_1] [i_1] [i_1] [(short)7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_2 + 4] [(unsigned char)3])) ? (((/* implicit */int) arr_15 [0U] [i_0 - 1] [i_2 + 4] [i_2])) : (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_2 - 2] [i_2]))));
                    }
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_25 [(signed char)9] [(signed char)9] [i_1] [i_1] [i_1] [i_1]))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0] [1LL] [(unsigned char)9] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_11))) - (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            {
                var_24 *= ((/* implicit */signed char) var_5);
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) 
                    {
                        var_25 += ((/* implicit */int) arr_36 [i_8] [8LL] [i_8] [i_11]);
                        arr_40 [i_8] [(_Bool)1] [i_8] [i_11] = ((/* implicit */long long int) ((_Bool) (short)-4922));
                    }
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((int) ((int) arr_35 [i_9] [i_9] [i_9] [i_9]))))));
                }
                arr_41 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_8] [i_8])) >= (((arr_33 [i_8] [i_8]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_33 [i_8] [i_8]))))));
            }
        } 
    } 
}
