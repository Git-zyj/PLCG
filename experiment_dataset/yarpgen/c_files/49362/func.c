/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49362
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
    var_17 |= min((((/* implicit */long long int) (unsigned short)65535)), (4611686018427387904LL));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) min(((unsigned short)1), (((/* implicit */unsigned short) (signed char)-79))))) ? (((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((((((/* implicit */_Bool) var_9)) ? (17559029372163306844ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) var_1);
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)14)) ? (4611404543450677248ULL) : (((/* implicit */unsigned long long int) 107260155)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_11)))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [(unsigned short)13] [(unsigned short)13])) : (((/* implicit */int) (unsigned short)59807))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (-9223372036854775797LL)))))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_16))));
    }
}
