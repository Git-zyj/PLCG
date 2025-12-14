/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28917
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 = (+(min((15354908687338727785ULL), (arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 15354908687338727780ULL)) || (((/* implicit */_Bool) 15354908687338727780ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [16U])) ? (((/* implicit */int) arr_0 [2ULL])) : (((/* implicit */int) arr_0 [0ULL]))))) : (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(short)16]))))) ? ((-(var_3))) : (((/* implicit */int) arr_0 [(short)8]))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */long long int) ((unsigned int) arr_1 [i_1]))) : (arr_4 [i_1])));
        var_18 -= ((/* implicit */unsigned long long int) var_12);
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) 3091835386370823837ULL);
                    var_20 = (-(((((/* implicit */_Bool) arr_0 [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 15; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_4] [8U] [i_4] [i_5 + 1] = ((/* implicit */unsigned int) arr_4 [i_5]);
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_11 [i_1] [i_4] [i_4] [i_1])))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_5] [i_5] [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_2]))));
                            }
                        } 
                    } 
                    var_24 = (!(((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [i_1] [i_3] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_6] [i_7])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_7 + 1] [i_2 - 1] [i_2 - 1] [i_6] [i_7 + 1]))))) : (14366972659965251751ULL)));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3091835386370823857ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7 + 4] [i_1 + 2] [i_1 - 1]))) : (2473513461046751220LL)));
                                var_27 = ((/* implicit */unsigned long long int) (unsigned char)244);
                                arr_23 [i_1 + 3] [i_2] [i_1 + 3] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -2473513461046751220LL)) <= (arr_16 [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 2473513461046751219LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_3] [i_6 - 2] [i_3]))) : (var_6)))));
                                var_28 = ((/* implicit */unsigned int) ((arr_22 [(unsigned short)15] [i_2] [i_6 + 1] [i_7 + 1]) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (-4937856622236124176LL) : (-2473513461046751220LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 22; i_8 += 4) 
    {
        for (long long int i_9 = 2; i_9 < 23; i_9 += 3) 
        {
            {
                arr_29 [i_9] [i_9 - 2] [i_9 + 1] = ((/* implicit */short) var_10);
                var_29 = ((/* implicit */int) max((var_29), (((int) (_Bool)0))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15354908687338727778ULL))));
}
