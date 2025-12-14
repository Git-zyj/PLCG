/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245758
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
        var_16 &= ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_0 [i_0])))));
        var_17 = ((/* implicit */short) (((_Bool)0) ? (11417273429259967125ULL) : (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 11417273429259967122ULL)) ? (7029470644449584488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)9])))))))));
    }
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_6))));
}
