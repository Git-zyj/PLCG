/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195697
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) -2147483646)))));
        arr_3 [i_0] [(unsigned char)9] |= ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)1))))));
    }
    var_18 = ((/* implicit */_Bool) var_6);
}
