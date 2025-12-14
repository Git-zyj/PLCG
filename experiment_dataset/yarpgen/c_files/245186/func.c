/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245186
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
    var_18 &= ((/* implicit */long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)78), ((unsigned char)65)))))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1011085855))))), (((((/* implicit */_Bool) (unsigned char)185)) ? (4294967281U) : (((/* implicit */unsigned int) var_17))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [(unsigned char)10]))));
        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0]);
    }
}
