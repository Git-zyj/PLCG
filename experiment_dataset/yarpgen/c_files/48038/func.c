/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48038
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
    var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((var_5) >> (((2152416729U) - (2152416698U)))))) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) ((short) ((long long int) (_Bool)1)));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_1 - 4] [i_1 - 3]), (((/* implicit */unsigned long long int) ((short) 2076209068778317957ULL)))))) ? (min((((((/* implicit */_Bool) 2641214224U)) ? (arr_2 [i_0] [1LL]) : (10322559045027715581ULL))), (((/* implicit */unsigned long long int) (signed char)-95)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((long long int) var_16)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 716797856U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))))));
            }
        } 
    } 
    var_20 = max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_4)))), (var_17));
    var_21 = ((/* implicit */short) max((max((((-1LL) - (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_11)))), (((long long int) var_12))));
}
