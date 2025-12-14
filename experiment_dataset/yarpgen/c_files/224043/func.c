/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224043
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = min((((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_1 [i_0])) * (arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)207)) ? (-278958229909546891LL) : (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) (((((+(((/* implicit */int) (signed char)-1)))) + (2147483647))) << (((arr_1 [i_0]) - (54150879)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)27077);
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned short)43740)) - (43729))))) <= (((((/* implicit */int) var_9)) % (arr_1 [i_0]))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (6579387569448864132ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
        var_13 |= (~((~(arr_1 [i_1]))));
    }
    var_14 = ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) ((unsigned char) var_2))) : (var_4)));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((var_5) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), ((+(((/* implicit */int) var_8))))))), ((-(max((((/* implicit */unsigned long long int) var_7)), (820190278347731005ULL)))))));
}
