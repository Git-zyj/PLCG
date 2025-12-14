/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24324
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
    var_20 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((arr_0 [2ULL]) ? (((/* implicit */int) arr_0 [(unsigned short)4])) : (((/* implicit */int) arr_0 [(unsigned char)10])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) arr_1 [i_0 - 1])) - (63341)))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_5 [i_1] = ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)55)) << (((arr_3 [i_1]) - (2663090294U)))))) - (arr_4 [i_1]));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33472)))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32073))) : (4333757231132920914ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_1))))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))) + (((((/* implicit */_Bool) (unsigned short)32068)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) >> (((((/* implicit */int) var_14)) + (28072)))));
}
