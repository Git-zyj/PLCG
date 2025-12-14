/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193887
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)14)))), (202267007))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) var_2);
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) (unsigned short)33171))));
    }
}
