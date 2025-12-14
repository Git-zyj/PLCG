/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36388
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (13234312689486288914ULL)))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((-5690719275508829690LL) + (5690719275508829703LL))))))))) ? (((((/* implicit */_Bool) min((13234312689486288914ULL), (((/* implicit */unsigned long long int) 1835624236))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -708204032)) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37911))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] [12U] = min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)1)), ((short)-16990)))), (((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)28570), (((/* implicit */unsigned short) (short)-16990)))))) : (1125882726973440ULL))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (signed char)-29))));
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_6 [i_0])) <= (((((/* implicit */_Bool) (unsigned short)10857)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (2228180690652088749LL)))));
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_0] [(short)10] [(short)10] [i_0 + 1] [i_3])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])), (var_9)))) : ((~(((/* implicit */int) arr_13 [i_3] [8] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))))))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_5);
}
