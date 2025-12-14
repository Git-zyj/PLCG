/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24281
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
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((var_9) - (2049472418U)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)245))))), (((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))))))), (((/* implicit */unsigned int) (_Bool)1))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (_Bool)1))));
        arr_2 [(unsigned short)8] = ((/* implicit */int) (!(((/* implicit */_Bool) -704533985))));
    }
    var_22 = ((/* implicit */unsigned short) (+(max((((4294967286U) ^ (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (var_17))))))));
    var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_14)) + (((/* implicit */int) var_7)))) << (((27321055U) - (27321042U))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_10)))) ? (0) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10)))))))));
}
