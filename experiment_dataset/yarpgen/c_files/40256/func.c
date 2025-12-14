/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40256
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((min(((+(16383U))), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_0 [i_0])))))))));
        var_19 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0]));
    }
    var_20 += ((/* implicit */unsigned int) (!((_Bool)1)));
}
