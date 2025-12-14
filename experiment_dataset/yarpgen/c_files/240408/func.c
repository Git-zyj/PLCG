/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240408
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
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 827578295U))));
        var_15 = ((((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [(_Bool)1])), ((unsigned short)20973))))))) != (((/* implicit */int) (short)3498)));
    }
    var_16 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (4177530473086251052LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3499)))))) * (min((var_3), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) var_7))));
}
