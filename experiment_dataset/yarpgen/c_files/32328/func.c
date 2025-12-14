/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32328
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
    var_14 = var_12;
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23675)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) * (((((/* implicit */_Bool) 2147483647)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((int) 3200931158U)))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2943742209996234034LL)) & (4862781432262669579ULL)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) -9LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 8514083614083182232LL)) && (var_2))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] |= ((/* implicit */short) (!(((((/* implicit */int) var_1)) != (((/* implicit */int) var_0))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                {
                    arr_13 [1] [i_2] [(short)5] = ((/* implicit */signed char) ((unsigned char) ((var_7) - (((/* implicit */unsigned int) arr_4 [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)176)))) ? (((/* implicit */unsigned long long int) arr_18 [i_5] [i_5] [i_5 - 3] [i_5] [i_5 - 3] [(_Bool)1] [i_5 + 1])) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [(unsigned short)6] [i_1 - 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1 + 2]))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((var_3) / (((/* implicit */unsigned long long int) arr_9 [i_1 - 1])))))));
    }
    var_20 |= ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 1; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6))))) : ((-(162900894289456754LL)))))) + ((~(var_9)))));
                                var_22 = ((/* implicit */_Bool) ((long long int) (~(arr_31 [i_6] [(signed char)1] [i_6] [i_6 + 1] [i_6] [i_10]))));
                                arr_33 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32760))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */int) arr_41 [22ULL] [i_7] [22ULL] [22ULL])), (arr_26 [13] [13] [13])))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_7] [i_12] [i_6]))))) | (((/* implicit */unsigned long long int) arr_25 [i_12] [6LL] [i_12]))));
                                arr_42 [i_6] [i_7] [i_11 + 3] [i_12] [i_13] [i_6] [i_13] = ((unsigned int) min((arr_32 [i_6] [(unsigned short)23] [(unsigned short)23] [(unsigned short)23] [i_13]), (((((/* implicit */_Bool) var_5)) ? (arr_39 [i_11 + 2] [(short)18] [i_13]) : (((/* implicit */long long int) var_12))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) / (max((12846014316091111973ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))))));
                arr_43 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-13)) ? (4294967295U) : (((/* implicit */unsigned int) -385066447))));
                var_25 = ((/* implicit */short) var_7);
            }
        } 
    } 
}
