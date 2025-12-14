/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210816
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned short) var_10);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_15);
        var_20 ^= ((/* implicit */int) ((((arr_1 [(short)10] [i_0 - 1]) + (9223372036854775807LL))) >> (((8438644647136508564LL) - (8438644647136508521LL)))));
    }
    var_21 += ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), ((+(17953275430352240184ULL))))), (((/* implicit */unsigned long long int) var_5))));
}
