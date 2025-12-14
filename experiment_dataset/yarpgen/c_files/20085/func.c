/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20085
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */int) ((unsigned short) -1757820078514399909LL));
                        arr_11 [i_3] = ((/* implicit */long long int) (+(arr_6 [7LL] [i_2] [(signed char)12])));
                    }
                    var_16 -= min((3724138698U), (3724138698U));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 570828594U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) 570828594U)))))));
        arr_16 [i_4] = ((/* implicit */unsigned short) 3724138701U);
        arr_17 [i_4] = ((long long int) var_9);
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_12 [i_6]))));
                        arr_25 [i_6] [5] [i_6] [(_Bool)1] = ((((/* implicit */_Bool) 3724138701U)) ? (3724138701U) : (3724138715U));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 570828594U)) ? (((/* implicit */unsigned int) arr_3 [i_4] [i_4] [i_4])) : (3724138682U))))));
                        arr_26 [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_7 [7LL]);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_19 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) 3724138715U)) ? (570828577U) : (3724138701U))), (min((((((/* implicit */_Bool) 570828595U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3724138700U))), (min((3724138735U), (((/* implicit */unsigned int) arr_0 [3]))))))));
                    var_20 = (+(((3724138691U) + (((/* implicit */unsigned int) arr_23 [(unsigned char)5] [i_9] [i_10] [i_10] [(unsigned short)5] [i_10])))));
                }
            } 
        } 
        var_21 = ((((((/* implicit */int) arr_35 [i_8] [i_8])) / (((/* implicit */int) arr_35 [4ULL] [i_8])))) < (((/* implicit */int) ((_Bool) arr_35 [3LL] [(short)5]))));
    }
}
