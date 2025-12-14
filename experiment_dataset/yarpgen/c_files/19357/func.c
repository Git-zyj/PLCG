/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19357
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (4294967295U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)16)) & (((/* implicit */int) arr_1 [i_0 - 1])))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((min((max((((/* implicit */int) (_Bool)1)), (var_10))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) 1322993682U))))))) > (((((/* implicit */int) arr_1 [i_0 - 2])) - (((/* implicit */int) arr_1 [i_0 + 1])))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_5 [(unsigned char)8] [i_1 + 1] |= arr_4 [i_1];
        var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) > (arr_0 [i_1 - 1] [i_1 - 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 2])) && (((/* implicit */_Bool) -168443631284191924LL)))))) : (((arr_0 [i_1 - 1] [i_1 - 1]) / (arr_0 [i_1 + 1] [i_1 - 1])))));
    }
    var_22 = ((/* implicit */short) min((((var_11) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned long long int) var_15)) : (var_8))))), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)245)))))))));
    var_23 = ((/* implicit */int) ((unsigned short) var_1));
    var_24 &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)245))) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (max((var_17), (((/* implicit */unsigned int) (_Bool)1)))))));
    var_25 = ((((((/* implicit */int) (signed char)17)) >= (((/* implicit */int) (unsigned char)64)))) ? (((((((/* implicit */_Bool) (short)24850)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned short)42186)))) - (((/* implicit */int) ((((/* implicit */_Bool) 4294967286U)) || (((/* implicit */_Bool) (unsigned short)6463))))))) : (((/* implicit */int) ((short) (signed char)11))));
}
