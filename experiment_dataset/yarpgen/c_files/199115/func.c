/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199115
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_8)) : (var_7)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (var_6))) : (((/* implicit */int) min(((unsigned short)11127), (((/* implicit */unsigned short) var_12)))))))) ? (min(((((_Bool)1) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) ((var_16) > (var_16)))))) : (var_7)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)16384))))) ? (((/* implicit */long long int) var_7)) : (min((((/* implicit */long long int) var_13)), (arr_2 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)5] [i_0])))))) : ((~(((arr_2 [(_Bool)1]) * (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
        var_21 = ((/* implicit */unsigned char) 261722815);
    }
}
