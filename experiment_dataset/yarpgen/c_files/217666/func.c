/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217666
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) arr_1 [(unsigned char)2] [i_0 + 2]))));
        var_11 = ((/* implicit */int) arr_0 [2U] [i_0]);
    }
    var_12 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)32)) | (((/* implicit */int) var_4))))) : (var_7)))));
}
