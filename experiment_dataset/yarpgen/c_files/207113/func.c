/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207113
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((int) arr_2 [i_0 - 3]));
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) var_15);
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_12)))))), (((((/* implicit */int) arr_5 [i_1] [i_1])) % (((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 1]))))));
        var_20 ^= ((/* implicit */unsigned short) var_15);
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) (~((~(((unsigned long long int) arr_9 [i_2]))))));
        var_22 = ((/* implicit */int) arr_3 [i_2] [i_2]);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((((/* implicit */_Bool) var_16)) ? (arr_7 [(unsigned short)0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [(short)12] [i_2]))))) : (arr_3 [i_2] [i_2])));
        arr_10 [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1971157169205754841LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33487))) : (var_4))) : (((long long int) (unsigned char)3))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) ? (arr_13 [i_3]) : (max((arr_11 [i_3] [i_3]), (((/* implicit */long long int) arr_12 [i_3] [i_3]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (long long int i_6 = 3; i_6 < 23; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
                            arr_22 [i_3] [1] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_17 [i_3] [(_Bool)1] [(unsigned char)6] [i_7]);
                            var_26 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 22; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) : (9223372036854775807LL))), (((7468973651063751731LL) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_14 [i_9 + 1] [(short)17] [i_3])))))));
                        arr_29 [i_3] [i_4 - 3] [i_4] [i_9] |= ((/* implicit */long long int) var_12);
                        var_28 |= ((/* implicit */short) arr_28 [i_3] [i_4 - 2] [i_8] [i_9] [i_9]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        arr_37 [i_3] [i_3] [i_3] [(short)22] = ((/* implicit */unsigned char) arr_33 [i_3] [(short)22] [i_10] [i_3]);
                        var_29 = ((((/* implicit */int) arr_21 [i_4 - 1] [i_4 + 1] [i_10] [i_10] [i_4] [i_11])) > (((((/* implicit */int) arr_21 [i_4 - 2] [i_4 - 2] [i_10] [10LL] [i_10] [i_10])) - (((/* implicit */int) arr_21 [i_4 - 1] [i_4] [i_10] [i_4] [i_11] [i_11])))));
                    }
                } 
            } 
        }
    }
}
