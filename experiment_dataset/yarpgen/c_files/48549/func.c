/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48549
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_17 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1766219525U)) || (((/* implicit */_Bool) 146698394U)))))) ^ (146698393U)));
    }
    var_18 = ((/* implicit */_Bool) (~(146698395U)));
    var_19 = ((/* implicit */unsigned char) var_2);
}
