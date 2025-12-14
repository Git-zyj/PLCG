/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50549
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 362353538586004698ULL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (signed char)67)))), (((/* implicit */int) (signed char)21))))) >= (var_3))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) (unsigned char)109)) ? (var_11) : (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), ((+(6976143799607813790LL))))))));
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) (signed char)7);
        arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (4036710153904087842ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) & (((/* implicit */unsigned long long int) arr_3 [i_1]))));
    }
    var_20 *= ((/* implicit */unsigned char) ((var_5) >> (((var_14) - (3213864521883103023LL)))));
}
