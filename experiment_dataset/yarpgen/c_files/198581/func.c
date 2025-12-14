/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198581
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_2);
        var_15 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (12424720024773124395ULL)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 3076001524U);
        arr_4 [i_0] = var_11;
        var_16 = ((/* implicit */unsigned short) -4911148369092737493LL);
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_0))));
}
