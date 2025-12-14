/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231884
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7345468110797133874LL)) ? (((/* implicit */int) (short)-22655)) : (((/* implicit */int) (unsigned short)60210))))) * ((~(var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((/* implicit */_Bool) var_6))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(7345468110797133874LL)));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [i_1 - 1])))) & (min((((int) var_8)), (((/* implicit */int) max((arr_1 [(unsigned char)2]), (arr_0 [i_1]))))))));
        arr_5 [i_1 - 1] = ((/* implicit */int) max((min(((short)29320), (((/* implicit */short) arr_1 [(signed char)11])))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
    }
}
