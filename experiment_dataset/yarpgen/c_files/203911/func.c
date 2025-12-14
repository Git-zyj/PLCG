/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203911
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) -606944065)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_22 ^= ((/* implicit */unsigned short) (-(max((((/* implicit */int) arr_1 [i_0 - 3] [i_0])), (-606944042)))));
    }
    var_23 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (((var_16) ^ (417282523U)))))));
    var_24 = (unsigned short)47680;
}
