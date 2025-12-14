/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48148
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
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_2 [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (-472178268)));
        arr_3 [i_0] = arr_1 [i_0 - 2];
        arr_4 [i_0 - 1] = ((/* implicit */int) ((arr_0 [i_0 - 2]) >= (arr_0 [i_0 + 1])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_2] [i_1] [i_1]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                                arr_17 [i_1 + 3] [i_3] [i_1] [i_1 + 3] [i_0] = ((/* implicit */unsigned short) (-((-(472178268)))));
                                arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3641729459186646598LL))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)65531);
                }
            } 
        } 
    }
    for (long long int i_5 = 4; i_5 < 9; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_0 [i_5]), (((((/* implicit */_Bool) 9223372036854775789LL)) ? (arr_0 [i_5]) : (((/* implicit */int) arr_1 [i_5]))))))), (((unsigned long long int) ((unsigned short) var_15)))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_15 [i_5 - 3] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */int) arr_14 [i_5 - 4] [i_5] [i_5 + 2] [i_5] [i_5 - 4]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_5] [i_5]))))) : (((arr_21 [i_5] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_3)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_25 [i_6] [i_6]), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) arr_24 [i_6] [i_6])) : ((+(-1508775973)))));
        arr_27 [i_6] = ((/* implicit */unsigned short) -6886936436469344684LL);
    }
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        arr_31 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_7])) ? (((unsigned int) (unsigned short)60738)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(6886936436469344672LL)))) ? (((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_13)))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (short)-32761))))))))));
        arr_32 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) max((281474976710656ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [i_7])))))))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_24 [i_7] [i_7])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)17320)) : (((/* implicit */int) (unsigned short)65531)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            arr_37 [i_7] [i_8] [i_8] = ((/* implicit */signed char) -1345742432);
            arr_38 [i_8] [(unsigned short)10] [i_7] = ((/* implicit */long long int) ((int) (+(arr_25 [i_8] [i_7]))));
        }
    }
    var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) 0ULL))));
}
