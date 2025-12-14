/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227047
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_11 ^= ((/* implicit */_Bool) ((int) ((var_9) != (((/* implicit */unsigned long long int) -1059295938)))));
    }
    var_12 = ((/* implicit */long long int) var_7);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1059295941)) ? (1059295937) : (((/* implicit */int) (short)14892))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -1059295942)) ? (var_1) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (3ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) : (max((((/* implicit */unsigned long long int) var_4)), (var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) var_6))))) ? (var_3) : (max((((/* implicit */unsigned long long int) var_6)), (15836242854038522523ULL)))))));
}
