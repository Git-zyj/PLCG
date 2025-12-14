/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20278
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
    var_11 = ((/* implicit */long long int) var_9);
    var_12 = ((/* implicit */_Bool) (~(max((0U), (((/* implicit */unsigned int) (short)31372))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 3852533344U);
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) 3716209853U))));
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_0 [i_0]))));
    }
}
