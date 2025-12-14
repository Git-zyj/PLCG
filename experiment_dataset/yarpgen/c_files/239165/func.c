/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239165
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
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) var_10);
        var_16 = ((/* implicit */long long int) (~((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-10))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        arr_5 [1ULL] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) (~(0)))), ((~(2295247479069643554LL))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) - (((unsigned long long int) arr_4 [i_1 - 2]))));
    }
}
