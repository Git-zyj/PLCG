/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49444
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
    var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(var_0)))))) ? ((~(max((var_0), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)52)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_2 - 3] [i_0] [i_2 - 2] [i_2 - 3]), (((/* implicit */long long int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [7U] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (var_8))) : (((unsigned long long int) var_0))))) ? ((-(((arr_5 [i_2] [i_0]) >> (((/* implicit */int) arr_2 [i_0])))))) : ((~(((unsigned int) arr_1 [i_0]))))));
                    arr_9 [(_Bool)1] [i_0] [i_2] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? ((+(arr_7 [i_0] [i_0] [i_2] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18284850410426440724ULL)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (signed char)38))))))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)38)) && (((/* implicit */_Bool) 488379043U))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))))) : (((/* implicit */short) ((((((((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? ((+(arr_7 [i_0] [i_0] [i_2] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18284850410426440724ULL)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (signed char)38))))))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)38)) && (((/* implicit */_Bool) 488379043U))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
                    arr_10 [i_0] [i_0] [7U] [i_2 - 2] = ((/* implicit */short) ((((/* implicit */int) ((short) var_0))) | ((-(((/* implicit */int) arr_2 [i_2 - 3]))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) var_12);
    }
    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_18 [i_3 + 1] [(unsigned short)0] [(short)14] [i_5] = ((/* implicit */short) arr_12 [i_3] [(short)14]);
                    arr_19 [i_3 - 1] [6ULL] [15] [15] = ((/* implicit */signed char) ((unsigned long long int) (~(((var_10) << (((((/* implicit */int) arr_12 [6] [6])) - (60))))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)127)) <= (((/* implicit */int) (signed char)27))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 3) 
            {
                {
                    arr_25 [i_7] [i_6] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1]))))) >= (((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1]))))));
                    var_16 = ((/* implicit */short) (+(var_3)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) arr_15 [i_9]);
                                arr_32 [i_6] [i_6] [i_7] [i_6] [i_7 + 3] = ((/* implicit */unsigned char) 7);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((((arr_31 [i_3 + 1] [i_3 + 1] [i_3 - 1]) < (arr_31 [i_3 + 1] [i_3 + 1] [i_3 - 1]))) ? (((((((/* implicit */_Bool) arr_20 [i_3] [i_3])) ? (4529883351918298805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) >> (((((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_3])) ? (-8) : (((/* implicit */int) arr_27 [i_3] [i_3 - 1] [14U] [i_3])))) + (59))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_29 [i_3] [0ULL] [(short)8] [(short)8] [i_3] [(short)9]))))))));
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))), (max((arr_29 [(unsigned char)14] [i_3] [(short)11] [i_3] [(short)4] [i_3]), (((/* implicit */unsigned char) var_9))))))), ((+(arr_26 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3])))));
    }
    /* LoopNest 3 */
    for (unsigned char i_10 = 3; i_10 < 14; i_10 += 3) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (signed char)38))), (((((/* implicit */int) var_11)) >> (((arr_16 [13LL] [i_10 + 1] [i_10 + 1] [i_10 + 1]) - (1703329282U)))))))) ? (((((/* implicit */unsigned long long int) arr_31 [7] [i_10] [i_10])) - (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_26 [i_12] [i_11] [6U] [i_10] [i_10])))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [(signed char)3] [(short)12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [i_10] [i_10]))))))))));
                    arr_42 [i_10] [13ULL] [13ULL] [i_12] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_38 [i_12 + 1] [i_10 - 2]))))));
                    arr_43 [(unsigned char)13] [i_12] = ((/* implicit */short) ((((unsigned int) ((int) var_7))) + (((/* implicit */unsigned int) (~(var_1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_11);
}
