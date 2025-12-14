/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243421
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
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */int) min((var_3), (var_14)))))) : ((~(((/* implicit */int) var_2))))));
    var_18 ^= ((/* implicit */unsigned long long int) ((var_13) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((short) ((((/* implicit */unsigned long long int) var_12)) - (max((22ULL), (((/* implicit */unsigned long long int) var_3))))));
        var_20 *= ((18446744073709551593ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((/* implicit */_Bool) arr_0 [i_0 + 2]))))), (max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2]))))))));
    }
}
