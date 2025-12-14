/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199515
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_0]))), (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) var_8))));
        var_17 = ((/* implicit */unsigned int) 224);
        var_18 *= (short)-1;
    }
    var_19 = ((/* implicit */long long int) (_Bool)0);
    var_20 *= ((/* implicit */signed char) min((((/* implicit */long long int) max((((((/* implicit */int) (short)-13)) - (((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) var_11)))))), (6726973870845440295LL)));
}
