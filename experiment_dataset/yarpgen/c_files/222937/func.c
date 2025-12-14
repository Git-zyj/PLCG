/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222937
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
    var_18 = ((/* implicit */unsigned short) (_Bool)0);
    var_19 = (-(((unsigned int) ((unsigned int) var_17))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [(short)0] [i_1 + 2] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */unsigned int) 1828809267)) : (1069547520U))))) <= (((((/* implicit */_Bool) (short)-14697)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (937646993916480794LL)))) ? (3671807798762869759LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2U))))))) && (((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) var_0))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) || (((/* implicit */_Bool) (short)-29365)))))) / (var_5)));
}
