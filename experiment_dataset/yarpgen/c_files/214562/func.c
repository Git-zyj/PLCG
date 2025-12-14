/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214562
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */short) max((min((((/* implicit */unsigned short) var_5)), (arr_1 [i_0]))), (((/* implicit */unsigned short) var_13))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_2 [(signed char)8])), (arr_3 [(unsigned short)8]))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((max((var_8), (((/* implicit */int) var_13)))), (((/* implicit */int) var_2)))))));
}
