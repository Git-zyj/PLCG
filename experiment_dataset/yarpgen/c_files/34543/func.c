/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34543
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
    var_10 ^= ((/* implicit */int) (((~(((long long int) var_9)))) + (((long long int) min((var_0), (((/* implicit */long long int) var_8)))))));
    var_11 |= var_3;
    var_12 ^= ((/* implicit */unsigned short) ((long long int) var_9));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((arr_1 [i_0] [i_0]) % (var_5))))));
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) arr_1 [5LL] [i_0 + 1]);
        var_14 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
}
