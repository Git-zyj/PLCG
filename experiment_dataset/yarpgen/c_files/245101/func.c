/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245101
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) 491405761U);
        var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 2229637276U))));
        var_20 = ((/* implicit */unsigned int) (unsigned short)48483);
        arr_5 [2U] = ((/* implicit */unsigned int) (unsigned short)48472);
    }
    var_21 = ((/* implicit */unsigned int) (unsigned short)0);
    var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)48483)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) & (1073741823U)))) : (var_6))), (((/* implicit */long long int) var_8))));
}
