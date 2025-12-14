/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42925
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
    var_18 = ((/* implicit */int) var_3);
    var_19 = ((/* implicit */long long int) (unsigned short)43467);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((min((-96936173), (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))) / (arr_1 [i_0])));
        arr_3 [(signed char)21] = ((/* implicit */signed char) min((-2671446837614394811LL), (((/* implicit */long long int) 96936172))));
    }
}
