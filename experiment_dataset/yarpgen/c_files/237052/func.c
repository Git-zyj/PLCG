/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237052
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
    var_15 ^= ((/* implicit */unsigned short) var_13);
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)36430)) : (((/* implicit */int) max(((unsigned char)26), ((unsigned char)229))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [(short)0] [i_1] [(short)0] = ((/* implicit */short) ((((arr_1 [(short)3] [(short)3]) <= (((((/* implicit */_Bool) 782437356)) ? (((/* implicit */int) (unsigned char)0)) : (2096996815))))) ? (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)132)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5982007139954155237ULL)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (short)6942))))) : (((((/* implicit */_Bool) 3715421790U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10097))) : (5982007139954155237ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                arr_5 [(unsigned char)6] |= ((/* implicit */unsigned int) ((var_1) % (((/* implicit */int) var_12))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((unsigned long long int) 2264193484U)) * (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_2)))))));
            }
        } 
    } 
}
