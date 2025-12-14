/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22237
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-2287938450147070243LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (arr_1 [i_0 - 2])))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (+(262143LL))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            arr_7 [i_1 + 1] [20] [20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 1] [i_1]))));
            arr_8 [i_0] [(signed char)3] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 262143LL))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_0])) < (((/* implicit */int) (unsigned short)20940))))) : (((/* implicit */int) ((short) (unsigned short)32767)))));
            arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59053)) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 1])) - (50653)))))) : (arr_1 [i_0])));
            arr_10 [(unsigned char)6] [i_1] = ((/* implicit */int) (unsigned short)6482);
            arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1])) == (arr_1 [i_1]))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12288)) >> (((18446744073709551603ULL) - (18446744073709551592ULL))))))));
        }
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_14 [i_0] [i_2] [17LL] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((long long int) (unsigned char)138)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12288)))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                var_18 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) 0U))))));
                arr_17 [i_0 - 2] [i_2] [i_3] [0LL] |= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [(short)9])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967290U)))));
                arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_0 - 2] [i_0])) ^ (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_0]))));
            }
            arr_19 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (8ULL))));
            arr_20 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) -8206746525971958084LL));
        }
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_4]);
        arr_25 [i_4] = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned short)53248))))))));
        var_20 = ((/* implicit */unsigned int) 18446744073709551615ULL);
        arr_26 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12288)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((long long int) 262139LL)) >> (((((/* implicit */int) (unsigned short)32768)) - (32729)))))) ? ((-(((((/* implicit */_Bool) 18446744073709551604ULL)) ? (970574623077558664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)58745)))) | (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_34 [i_6] [i_7])))))))));
                    arr_36 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)44595))));
                }
            } 
        } 
        arr_37 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) arr_29 [2ULL])))), (((/* implicit */int) ((18446744073709551600ULL) <= (arr_28 [i_5])))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 3) 
            {
                {
                    arr_43 [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551609ULL), (0ULL)))) ? (((((/* implicit */_Bool) arr_34 [i_9 + 1] [i_5])) ? (arr_32 [i_9] [i_5] [i_5]) : (((/* implicit */int) (unsigned short)44596)))) : ((-(801126240)))))) ? ((~(((/* implicit */int) arr_35 [14LL] [i_9 - 1] [i_5])))) : (((/* implicit */int) ((unsigned char) min(((unsigned short)44595), ((unsigned short)65535)))))));
                    var_22 *= ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */int) (unsigned char)235)) >> (((((/* implicit */int) (unsigned short)65526)) - (65513))))) | (((((/* implicit */_Bool) arr_31 [i_8])) ? (801126240) : (((/* implicit */int) arr_29 [i_5])))))));
                }
            } 
        } 
    }
}
