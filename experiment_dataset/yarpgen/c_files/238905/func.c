/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238905
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
    var_13 -= max((((/* implicit */unsigned int) var_9)), (((((unsigned int) var_11)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_3 [8LL] = ((/* implicit */long long int) min((((/* implicit */int) min((var_0), (var_10)))), (var_1)));
        var_14 = ((/* implicit */long long int) var_12);
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) var_3);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */int) var_2))));
        var_16 = ((/* implicit */unsigned short) var_5);
    }
    var_17 = ((/* implicit */_Bool) var_12);
}
