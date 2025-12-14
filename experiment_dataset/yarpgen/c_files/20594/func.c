/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20594
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
    var_16 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned char)53)) ? (-8307511496398482555LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30855))))), (((/* implicit */long long int) (short)30855)))) >> (((((/* implicit */int) ((unsigned char) var_11))) - (219)))));
    var_17 = ((/* implicit */unsigned long long int) (short)30837);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30865))) : (arr_0 [i_0 + 1]))), (((unsigned long long int) arr_2 [(signed char)10])))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((int) ((((/* implicit */_Bool) ((arr_2 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209)))))) ? ((~(arr_0 [12U]))) : (min((arr_0 [i_0]), (arr_0 [i_0])))))))));
    }
}
