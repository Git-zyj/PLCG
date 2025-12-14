/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26088
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
    var_11 ^= var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((long long int) (-(arr_1 [i_0]))));
        arr_3 [(unsigned short)7] [i_0] = ((/* implicit */short) (-(19ULL)));
    }
    var_12 = ((/* implicit */_Bool) ((((_Bool) ((signed char) 19ULL))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) > (18446744073709551597ULL))))) % (-2516551015200893573LL))))));
    var_13 = ((/* implicit */unsigned short) var_9);
    var_14 = ((unsigned char) ((max((5348525263359204061ULL), (((/* implicit */unsigned long long int) (unsigned short)49085)))) >> (((((/* implicit */int) min((var_1), (var_1)))) - (89)))));
}
