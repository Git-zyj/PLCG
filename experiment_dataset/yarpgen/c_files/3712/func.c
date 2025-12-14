/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3712
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
    var_12 = ((/* implicit */long long int) (unsigned short)65535);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(min((((((/* implicit */_Bool) (short)-3460)) || (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])))), ((!(((/* implicit */_Bool) (unsigned short)30492)))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)9333)) || (((((/* implicit */_Bool) 1071644672U)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) - (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1])) : (min((var_1), (((/* implicit */long long int) var_2))))))));
        arr_3 [1ULL] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0 + 2] [i_0 - 2]), (arr_1 [i_0 + 2] [i_0 - 2])))) ? ((((-(8829945361204429309ULL))) - (var_4))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (arr_1 [7ULL] [(unsigned char)1])))), (var_5))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_14 = ((/* implicit */int) var_3);
        var_15 = (+(((4260607557632LL) / (((/* implicit */long long int) var_10)))));
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) (unsigned char)232)))) + (((/* implicit */int) (unsigned short)47904))));
    }
}
