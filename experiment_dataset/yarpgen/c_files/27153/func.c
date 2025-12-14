/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27153
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
    var_15 = ((/* implicit */short) max(((-(var_7))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 450518195786356870ULL)) && ((_Bool)1)));
        var_17 ^= ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_1 [2LL] [2LL])) : (450518195786356862ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [12ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1145))) : (arr_1 [(short)0] [i_0]))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (max((((/* implicit */unsigned int) ((unsigned short) ((unsigned short) arr_1 [(unsigned short)12] [(unsigned short)8])))), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)929))) <= (9223372036854775807LL))) ? (((arr_1 [0ULL] [0ULL]) + (arr_0 [4LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (7293113262489451266ULL)))))))))));
    }
    var_19 *= ((/* implicit */unsigned int) var_8);
}
