/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249543
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (((long long int) ((short) var_9)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_10) : (((/* implicit */long long int) arr_2 [i_0]))))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) < (arr_4 [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_9) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((((unsigned int) arr_7 [i_2] [i_2 + 1])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])) >= (((/* implicit */int) arr_7 [i_2] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 9; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 - 1])) ^ (((/* implicit */int) arr_9 [i_2 - 1]))))) ? (((((/* implicit */_Bool) (~(var_15)))) ? (max((arr_11 [i_1] [i_1] [(signed char)3] [(signed char)3]), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1] [i_1])))) : (arr_11 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned char)229))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))))), (min((arr_14 [i_1] [i_1] [i_1] [(signed char)2]), (var_2))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_11)) / (((/* implicit */int) var_5)))))))));
        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)2))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_19 [i_6] = (+(((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6])))))) : (var_1))));
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 10; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 2; i_9 < 10; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_14 [4U] [i_9] [i_8] [i_9]);
                        var_27 *= var_3;
                        arr_27 [i_9] [i_9] [(unsigned char)10] [i_6] [8LL] [i_6] = ((/* implicit */unsigned char) arr_15 [(unsigned short)1] [i_7 - 2] [i_7 - 2]);
                        var_28 *= ((/* implicit */signed char) (+(arr_5 [i_7])));
                    }
                    arr_28 [i_6] [i_6] [11LL] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) >= (var_4)))), (min((arr_0 [(signed char)6] [(signed char)6]), (((/* implicit */unsigned char) arr_7 [i_6] [i_7]))))))), (min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [1U] [1U])) ? (arr_6 [i_6] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_7] [i_7] [i_8]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 4; i_10 < 10; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_35 [i_6] [i_6] [i_8] [(unsigned char)6] [(unsigned char)6] [8LL] = ((/* implicit */unsigned short) (+(arr_32 [i_6] [i_6] [i_6] [i_7 - 3] [i_8] [i_10] [i_11])));
                                var_29 = ((/* implicit */signed char) var_6);
                                arr_36 [1U] [i_7] [i_7] [1U] [i_7] = ((/* implicit */unsigned int) max((arr_34 [i_10 - 4] [i_10 + 1] [i_7 - 2] [i_7 - 2]), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [5LL] [i_10 + 1] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_10 + 1]))) : (arr_20 [i_6])))))))));
                            }
                        } 
                    } 
                    var_30 = (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_7] [i_7] [7] [i_6]))))) ? (((/* implicit */unsigned long long int) arr_21 [i_7 - 1] [i_7 - 2])) : ((+(arr_14 [i_6] [i_6] [i_8] [i_8]))))));
                    var_31 = min((((((/* implicit */_Bool) arr_31 [i_6] [i_7 - 3] [(unsigned char)9] [i_8])) ? (((/* implicit */long long int) var_9)) : (arr_32 [i_8] [i_8] [i_7] [i_7 - 2] [i_6] [(short)4] [i_6]))), (((/* implicit */long long int) arr_23 [(short)1])));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_8 [i_6]))));
    }
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        for (unsigned char i_13 = 2; i_13 < 21; i_13 += 3) 
        {
            {
                var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) var_17)))));
                var_34 = ((/* implicit */long long int) ((unsigned char) var_16));
            }
        } 
    } 
}
