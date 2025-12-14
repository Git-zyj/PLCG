/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51179
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
    var_20 = ((/* implicit */int) var_11);
    var_21 = (-(((((/* implicit */_Bool) (+(9223372036854775808ULL)))) ? (min((((/* implicit */unsigned long long int) (short)-1243)), (18226052200549813631ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) <= (18226052200549813644ULL))))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-8716384894812706245LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 13ULL)) || (var_17))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (((!((_Bool)1))) && ((!((_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_23 = min((((max((18226052200549813610ULL), (arr_6 [i_0]))) * (max((((/* implicit */unsigned long long int) (short)10758)), (220691873159737962ULL))))), (((/* implicit */unsigned long long int) (~(((arr_9 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) var_4))))))));
                    arr_10 [i_0] [i_1] [i_2 - 1] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (220691873159738003ULL)))))));
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) (-(var_9)))));
}
