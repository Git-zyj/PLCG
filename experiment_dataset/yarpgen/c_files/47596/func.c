/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47596
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
    var_14 = (+(((max((-6488254565557430805LL), (-6488254565557430805LL))) % (var_7))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(-6488254565557430805LL)))) | (arr_2 [i_0]))))));
        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) 6488254565557430817LL)) ? (max((var_3), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)26599)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((int) arr_2 [0U])) ^ (((((/* implicit */_Bool) ((int) 1357480923))) ? (((/* implicit */int) (unsigned short)38587)) : (((/* implicit */int) ((_Bool) (unsigned short)26958)))))));
    }
}
