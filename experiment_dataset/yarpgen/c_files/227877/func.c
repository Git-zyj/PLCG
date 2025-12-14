/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227877
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
    var_14 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)13363));
    var_15 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_1)) : ((~(13092667874032240407ULL)))));
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                arr_6 [i_0] [i_1 - 2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_0)), (5759152593997938089ULL)));
                var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((-1904782050), (arr_2 [i_1] [i_0 + 1])))))))));
            }
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    arr_12 [i_1 + 3] = ((/* implicit */unsigned char) arr_0 [i_1 + 2]);
                    var_18 = ((/* implicit */unsigned short) (~(13092667874032240419ULL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23363)) ? (-7534711622570617208LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-99))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(_Bool)1]))))) ? (5354076199677311178ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned short)5623))))))))));
                    }
                }
                for (int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * ((-(((/* implicit */int) var_4))))));
                        arr_20 [i_0 + 1] [i_1 - 1] [i_6] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6811))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2]))) : (5354076199677311181ULL)));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16153))) : (13092667874032240415ULL))))));
                        var_23 = ((/* implicit */short) arr_4 [i_1 + 3]);
                    }
                    var_24 += ((/* implicit */short) (+(((/* implicit */int) arr_16 [(unsigned char)8] [i_1 - 1] [(unsigned char)8] [i_0 - 1] [(unsigned char)8]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) arr_10 [i_8] [i_6] [i_0] [i_1] [i_0] [i_0]);
                        arr_24 [i_0 + 1] [i_1 + 3] [8U] [i_6 - 1] [i_8 + 1] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55043))));
                    }
                }
                var_26 = ((/* implicit */short) arr_13 [i_0 - 1] [i_1 + 1] [i_1 - 2] [i_3 + 2]);
            }
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) 4893568374858171314ULL);
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_1 - 2] [(signed char)11] [12U] [i_0 + 1] [i_1 + 3] [i_0] [(signed char)10])) % (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_0 + 1] [i_0] [i_9] [i_1 + 1]))));
                arr_27 [i_9] [i_9] [(unsigned char)8] [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_9] [i_0 - 1] [i_9])) ? (((/* implicit */long long int) var_1)) : (var_7)))), ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : (5354076199677311236ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_9] [0U])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [6U] [i_9])) : (arr_2 [i_0] [i_1]))))))));
            }
            for (short i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                var_29 = ((/* implicit */long long int) max(((+(((arr_26 [i_0] [i_0] [(unsigned char)4]) ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_10]) : (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47526))) < (8795556151296LL)))), (arr_8 [i_0 + 1] [7LL] [i_1 - 2] [1ULL]))))));
                var_30 *= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_0 - 1]), (arr_5 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) < (2147483647))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)197)), (-6681392165657328810LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-104))))) : (max((((/* implicit */unsigned long long int) 7U)), (1656420713826442241ULL)))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_11 = 2; i_11 < 13; i_11 += 2) 
            {
                var_31 &= ((/* implicit */int) ((short) ((13092667874032240419ULL) + (((/* implicit */unsigned long long int) 156868880U)))));
                var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_0 + 1] [6ULL] [i_11 - 2] [i_11 - 1] [i_0 + 1] [i_0 - 1]))));
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                var_33 |= ((/* implicit */unsigned int) ((arr_25 [i_1 + 3] [i_1 - 2] [i_1 + 2]) <= (arr_25 [i_1 - 1] [i_1 + 2] [i_1 + 3])));
                var_34 = arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [i_12];
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_11))));
            }
        }
        arr_34 [(signed char)7] [i_0] = ((/* implicit */unsigned short) arr_28 [i_0 + 1] [i_0 - 1]);
    }
}
