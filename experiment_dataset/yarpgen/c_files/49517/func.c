/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49517
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_8))))), (((unsigned int) var_13))))), (((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((+(var_3)))))));
    var_16 = ((/* implicit */signed char) (+(((((var_3) << (((var_2) - (1603114007))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))))));
    var_17 = ((/* implicit */int) var_12);
    var_18 -= ((/* implicit */short) ((max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((short) var_8))))) * (((((/* implicit */_Bool) ((var_2) * (((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) (~(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) / (max((6970704388216151503LL), (((/* implicit */long long int) var_10))))))));
    }
}
