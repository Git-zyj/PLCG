/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38720
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? ((-(arr_0 [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78)))));
        arr_3 [i_0 - 1] = ((/* implicit */long long int) min((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_0 - 1]), (((((/* implicit */_Bool) 1752766076U)) && (arr_1 [i_0] [i_0])))))));
        var_14 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_15 ^= (~(((/* implicit */int) var_2)));
}
