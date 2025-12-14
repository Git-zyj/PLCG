/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36802
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_12)) ? (2853866560U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (2223592733U) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % (((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) 2853866560U))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (1441100757U))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) 18446744073709551615ULL);
    }
}
