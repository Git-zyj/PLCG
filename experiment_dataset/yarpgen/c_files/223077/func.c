/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223077
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 |= ((/* implicit */unsigned long long int) var_4);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)2755)) ? (((/* implicit */unsigned long long int) 245760)) : (0ULL))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    }
    var_23 = ((/* implicit */short) var_17);
}
