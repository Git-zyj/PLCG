/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238796
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
    var_17 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) & ((~(((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((-23) - (((/* implicit */int) var_14))))) ? ((+(min((((/* implicit */long long int) 7864320U)), (782884466519258204LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))))));
    }
}
