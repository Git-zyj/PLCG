/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239650
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((unsigned char) (+(((/* implicit */int) arr_1 [i_0 + 3]))));
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)5] [2LL])) ? (((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [7LL] [7LL])))) : (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))))), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (291320272240707013LL))) - (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) + (((/* implicit */int) arr_1 [i_0 + 2])))))))));
    }
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((long long int) var_1)) : (((long long int) ((unsigned short) var_9)))));
}
