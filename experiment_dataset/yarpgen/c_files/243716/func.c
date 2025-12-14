/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243716
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned short) min((var_12), (((/* implicit */short) (signed char)7))))), (((unsigned short) ((long long int) (signed char)18)))));
    var_17 &= ((/* implicit */unsigned long long int) var_9);
    var_18 = ((/* implicit */unsigned long long int) (+(((long long int) ((0LL) << (((((/* implicit */int) (short)5313)) - (5252))))))));
}
