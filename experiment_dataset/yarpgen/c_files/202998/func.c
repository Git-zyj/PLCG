/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202998
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
    var_12 = ((/* implicit */unsigned int) ((var_9) & (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
    var_13 = max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)23399)), (4294967295U)))) ? (var_7) : (((/* implicit */long long int) (-(3743619731U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))));
    var_14 = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) var_3)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-27402)))))));
        var_16 = ((/* implicit */unsigned short) ((arr_0 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32114)))))))));
        arr_4 [i_0] = ((unsigned int) (!(((/* implicit */_Bool) var_7))));
    }
}
