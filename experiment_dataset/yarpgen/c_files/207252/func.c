/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207252
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
    var_12 = ((/* implicit */unsigned short) 2043019422254572758LL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)115)), (max((min((2147483647), (998228057))), (-2147483625)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned char) min((2954795073220771425ULL), (max((((/* implicit */unsigned long long int) 4294967295U)), (1529577187725652759ULL))))));
    }
}
