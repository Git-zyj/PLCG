/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19678
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_4 [3ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0 - 1] [(short)8])))) && ((!(((/* implicit */_Bool) var_1))))))) ^ (((/* implicit */int) ((signed char) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) & (var_1))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_8 [i_2 + 1])))))))));
                    var_18 = ((/* implicit */unsigned char) ((short) ((((unsigned long long int) (unsigned char)255)) ^ (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))));
                    var_19 = ((((min((((/* implicit */unsigned int) var_14)), (62U))) >> (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_7 [i_1] [(short)17] [i_2 - 2])))) - (6728))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2])))))));
                    arr_13 [(unsigned char)22] [i_1] [i_1] [(short)7] = ((/* implicit */unsigned char) ((max((var_8), (min((var_7), (((/* implicit */unsigned long long int) (short)-29618)))))) <= (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_11 [i_0] [i_1] [(signed char)19] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22487)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)8128)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (unsigned char)127);
                                arr_19 [1ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0 + 2] = ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((((/* implicit */int) arr_10 [i_0])) >> (((((/* implicit */int) var_4)) + (135)))))));
    }
    for (signed char i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] [(unsigned short)0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned short)16384)))))));
        arr_25 [(signed char)18] = ((max((var_3), (((/* implicit */unsigned long long int) (signed char)32)))) << (((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [(unsigned char)11] [(unsigned char)11] [i_5])) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) (unsigned short)8118))))) - (6741))));
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_5])), ((unsigned short)57418)))) && ((!(((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 2] [i_5]))))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [10ULL])))))) : (arr_9 [2ULL] [(short)20] [(signed char)19])))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 22; i_6 += 2) /* same iter space */
    {
        arr_31 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_6 - 3] [i_6 - 1])) && (((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_6]))));
        arr_32 [(unsigned short)21] [i_6 - 1] = ((/* implicit */short) var_9);
        var_21 += ((/* implicit */unsigned short) (+(((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    }
    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_8 [i_7 - 1])) || (((/* implicit */_Bool) var_6)))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((arr_23 [i_7] [i_7]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_15 [3ULL] [3ULL] [i_7] [i_7] [i_7 - 2] [3ULL]) : (((/* implicit */unsigned long long int) arr_33 [i_7])))))))))))));
    }
}
