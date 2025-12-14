/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28916
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
    var_17 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_18 = (-(arr_0 [i_0] [i_0]));
        var_19 = -7191657355419926733LL;
        var_20 = min((((/* implicit */long long int) 247809328)), (-7191657355419926733LL));
    }
    var_21 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_4)) : (var_14)))) ? (max((-247809342), (-247809328))) : (var_11))), (var_5));
}
