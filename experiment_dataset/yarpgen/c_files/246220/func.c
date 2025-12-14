/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246220
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
    var_20 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1757059243)), (((((/* implicit */_Bool) var_17)) ? (var_11) : (((((/* implicit */_Bool) 1757059243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) : (var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((+(934103811))) >= (((/* implicit */int) var_19)))))));
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1757059231)))))));
    }
}
