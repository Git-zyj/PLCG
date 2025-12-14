/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29592
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
    var_12 = ((/* implicit */int) (~(var_9)));
    var_13 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 *= ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : ((-(arr_1 [i_0]))))) % (max((var_9), (((/* implicit */long long int) var_8))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((max(((_Bool)0), ((_Bool)1))) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21241)))))))))))));
    }
}
