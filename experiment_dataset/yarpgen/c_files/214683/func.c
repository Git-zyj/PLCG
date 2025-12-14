/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214683
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((int) ((unsigned short) var_9)))) : (0ULL)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) var_13);
        var_17 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1])))), (min((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (2724675091U)))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0 + 1]))))) : (min((((/* implicit */unsigned int) var_4)), (arr_2 [i_0 + 1])))));
    }
    var_19 += ((/* implicit */unsigned char) var_9);
}
