/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244651
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)37773), ((unsigned short)37773)))) > (((((((/* implicit */_Bool) var_7)) || (var_4))) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_2)) - (23548))))) : (((/* implicit */int) ((_Bool) (short)28244))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */int) (signed char)-9)) > (((/* implicit */int) (unsigned short)27763)));
        var_12 ^= arr_2 [i_0];
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)31638);
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (short)29937)) / (((/* implicit */int) (unsigned short)37763))));
    var_14 = ((/* implicit */short) var_4);
    var_15 &= var_6;
}
