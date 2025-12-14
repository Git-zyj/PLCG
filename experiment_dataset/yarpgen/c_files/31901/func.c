/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31901
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
    var_12 = ((/* implicit */short) var_6);
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 += ((/* implicit */long long int) ((unsigned int) 2923326689563723882ULL));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_1 [i_0])));
        var_16 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15523417384145827744ULL))));
    }
}
