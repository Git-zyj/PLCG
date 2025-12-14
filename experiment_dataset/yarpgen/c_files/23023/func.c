/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23023
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_19 = ((unsigned char) arr_4 [i_0]);
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                }
                for (unsigned short i_3 = 3; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    var_21 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_6 [i_1] [0LL] [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1])))))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [0ULL] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (unsigned char)47))))) : (((unsigned long long int) (unsigned char)115)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_7 [i_0 - 1] [i_0] [i_0 - 1] [i_0])))))));
                    var_22 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) (unsigned char)48)), (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) : (arr_0 [i_1])))))));
                }
                for (unsigned short i_4 = 3; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    arr_13 [i_1] = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0 - 1] [(unsigned char)6] [i_5] [i_5] [i_1] [(unsigned char)6] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_5] [i_6])), (min((((/* implicit */int) (unsigned char)194)), ((~(((/* implicit */int) arr_16 [8] [i_1] [i_1] [(short)2] [(signed char)3]))))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((long long int) (unsigned char)0)))));
                                var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)215)), ((+(((/* implicit */int) (short)29381))))))), (min((arr_6 [i_1] [i_6] [i_4 - 1] [i_1]), (arr_6 [i_1] [(unsigned short)0] [i_4 - 1] [i_1])))));
                                arr_19 [i_0] [i_1] [i_0] [(unsigned char)12] [i_0] [i_1] = ((/* implicit */short) max((max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)47))))), (min((((/* implicit */long long int) arr_1 [i_6])), (7867269225764206854LL))))), (((long long int) arr_6 [i_0] [i_0] [i_4 - 2] [i_1]))));
                            }
                        } 
                    } 
                    arr_20 [i_4] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) arr_7 [i_1] [i_4 + 1] [i_1] [i_4])), ((-(((/* implicit */int) (unsigned char)59))))))));
                    arr_21 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) arr_16 [i_4] [i_1] [i_1] [i_1] [i_0]);
                }
                arr_22 [i_1] = ((/* implicit */unsigned int) max((-3748699602791134917LL), (((/* implicit */long long int) min((arr_5 [i_0 - 1] [i_1]), (arr_5 [i_0 - 1] [i_1]))))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (signed char)-41))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_15)))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_7] [i_7]))));
        arr_26 [(signed char)13] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_23 [i_7] [i_7]))));
        var_27 = ((/* implicit */signed char) (~(arr_24 [i_7])));
    }
    /* vectorizable */
    for (signed char i_8 = 2; i_8 < 14; i_8 += 2) 
    {
        var_28 = ((/* implicit */long long int) (!(arr_23 [i_8 - 2] [i_8])));
        var_29 = ((/* implicit */unsigned char) arr_23 [i_8] [i_8 - 1]);
    }
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9] [(unsigned char)8] [i_9] [(unsigned char)8])) ? (((/* implicit */int) ((unsigned short) arr_4 [i_9]))) : (((/* implicit */int) (_Bool)1)))))));
        var_31 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((_Bool)0), ((!(((/* implicit */_Bool) arr_10 [i_9]))))))), (((((/* implicit */_Bool) arr_30 [(_Bool)0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)18)))) : (930177879U)))));
        arr_33 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_9] [i_9])) ? (min((arr_0 [i_9]), (arr_0 [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_9] [i_9])), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        var_32 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (((/* implicit */int) arr_8 [i_9] [i_9])) : (((/* implicit */int) arr_32 [i_9])))), (((/* implicit */int) ((_Bool) arr_8 [i_9] [i_9])))));
    }
}
