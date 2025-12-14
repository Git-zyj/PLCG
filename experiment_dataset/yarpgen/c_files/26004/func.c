/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26004
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = arr_3 [i_0];
        arr_5 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_0 [i_0])))));
    }
    var_19 = ((/* implicit */unsigned long long int) 4278190080U);
}
