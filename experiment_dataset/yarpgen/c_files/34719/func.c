/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34719
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [6ULL] = ((/* implicit */unsigned long long int) (-((-(563720171U)))));
        arr_5 [5ULL] [i_0] = ((/* implicit */unsigned long long int) 371625812U);
    }
    var_20 += ((/* implicit */long long int) var_0);
}
