/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47743
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 1357443205U)) ? (((/* implicit */int) (signed char)-108)) : (arr_1 [i_0]))))), ((~(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) 4294967286U))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 4294967292U);
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 176061239)) ? (((/* implicit */int) var_4)) : (-176061239)));
    }
    var_19 = ((/* implicit */short) ((unsigned int) (_Bool)1));
    var_20 += ((/* implicit */unsigned long long int) var_12);
}
