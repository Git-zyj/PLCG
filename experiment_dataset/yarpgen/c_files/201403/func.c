/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201403
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)216))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [(unsigned short)4] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)216))));
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [(unsigned char)6]);
    }
}
