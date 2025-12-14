/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2681
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_17 = ((/* implicit */short) ((((((/* implicit */int) var_6)) >> (((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))) - (6476873543807606497ULL))))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_12)))))) / (max((((/* implicit */unsigned long long int) 2840100017U)), (8704836599677641894ULL)))))));
}
