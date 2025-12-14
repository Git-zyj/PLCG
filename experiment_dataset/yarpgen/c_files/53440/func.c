/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53440
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_11 [1U] [i_3] [i_2] [2ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) >= (18446744073709551615ULL))))) / (17089544677414591534ULL)));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((signed char) (signed char)127));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) ((int) ((long long int) var_9)));
    }
    for (int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((unsigned short) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) (short)-19094))))));
        var_15 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned short)20790)), (1357199396294960081ULL)))));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) / (((/* implicit */int) (_Bool)1))))) ? (16874546721527490813ULL) : (((16874546721527490813ULL) + (1572197352182060802ULL))))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(1834876900)))) * (min((1357199396294960081ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
}
