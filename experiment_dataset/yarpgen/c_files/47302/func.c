/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47302
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3513032354U)))) : (((max((var_0), (((/* implicit */long long int) 781934942U)))) & (min((((/* implicit */long long int) var_8)), (-1633992277393701968LL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */int) arr_0 [10U])), ((~(((((/* implicit */int) (unsigned short)21597)) >> (((541165879296ULL) - (541165879294ULL))))))))))));
        var_19 |= ((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) max((((signed char) arr_1 [i_0])), (((signed char) (_Bool)1))))))));
    }
    var_20 = ((/* implicit */signed char) (short)4560);
}
