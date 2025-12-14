/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195560
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
    var_15 = ((/* implicit */unsigned short) var_12);
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (max((((/* implicit */int) ((9196709605436403354ULL) > (((/* implicit */unsigned long long int) var_0))))), ((~(((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) var_5);
        var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
}
