/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31286
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [(short)23] [i_1 + 2] [i_2] = ((/* implicit */unsigned int) arr_3 [(unsigned short)12] [i_1 - 1]);
                    arr_10 [i_0 + 1] [i_2] &= ((/* implicit */signed char) ((unsigned char) var_0));
                    arr_11 [(short)19] [9] [9] [i_2] &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)115))));
                }
            } 
        } 
        arr_12 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) && (((/* implicit */_Bool) (unsigned char)26))));
        var_16 = ((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 1]);
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3311)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
    }
    for (short i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        var_17 = ((/* implicit */signed char) (+((~((+(arr_5 [i_3] [i_3] [i_3])))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (signed char)-23)), (1282682051U))), (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (short)11645)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1996083508492147796LL)) == (var_7)))) : (((/* implicit */int) arr_3 [i_3 + 1] [23U]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (3012285245U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (min((var_5), (((/* implicit */unsigned int) arr_3 [i_3] [i_3]))))))));
    }
    for (short i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_4 - 1] [i_4]))))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_4] [i_5 - 1] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-((+(var_3)))))), ((~(1282682051U)))));
                    arr_25 [i_4] [i_4] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_6))))), (((arr_20 [i_4] [(signed char)7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [(_Bool)1]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) <= (((((/* implicit */_Bool) arr_6 [4U] [i_5] [i_5 + 1])) ? (((/* implicit */long long int) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (arr_5 [i_4 + 1] [i_4 + 1] [i_4])))))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */long long int) var_0);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_13))))) ^ (var_10)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) ((signed char) var_3)))));
    var_22 = ((/* implicit */_Bool) (short)32767);
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned int) min(((-(var_10))), (((/* implicit */long long int) var_3))))))));
}
