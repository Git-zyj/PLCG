/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239348
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)32750))))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_8 [(short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32750))))))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3061207005U)))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (~(arr_7 [i_1 - 1])));
    }
    for (short i_2 = 3; i_2 < 21; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) ((205935710) % (((/* implicit */int) (short)-32751))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_16 [(unsigned short)7] [i_2] = ((/* implicit */unsigned short) 261120ULL);
            arr_17 [i_2 - 2] [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
            arr_18 [i_3] [6LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 - 1])));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 22; i_4 += 4) 
        {
            arr_22 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32741)) ? (arr_5 [3LL]) : (((/* implicit */unsigned long long int) 2097136))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
            arr_23 [(unsigned short)0] [(unsigned short)0] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_4)))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 22; i_5 += 2) 
        {
            arr_26 [i_2] = ((((/* implicit */long long int) var_2)) - (-7965816770720871170LL));
            arr_27 [i_2 - 2] [20LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_2 + 1]))));
        }
    }
    var_10 = ((/* implicit */_Bool) max((min((var_8), (((/* implicit */unsigned int) (unsigned char)165)))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-67)), (-34422627))))));
    var_11 = var_0;
    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */unsigned int) ((int) var_4))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1)))))));
    var_13 = ((/* implicit */_Bool) var_7);
}
