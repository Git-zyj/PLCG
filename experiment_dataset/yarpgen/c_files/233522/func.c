/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233522
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_1 [i_0])))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((var_12), (((/* implicit */unsigned long long int) var_2))))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */long long int) ((_Bool) max((2575567523U), (((/* implicit */unsigned int) (signed char)97)))))), (min((min((((/* implicit */long long int) 914327239)), (var_1))), (((/* implicit */long long int) arr_1 [i_0])))))))));
    }
    var_16 = ((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */int) (unsigned short)21078)) << (((var_1) - (1124549395755337084LL))))))));
    var_17 = ((/* implicit */_Bool) var_13);
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) 2489051252U)) / (2792204518908718611ULL))))), (max((min((var_11), (-914327240))), (((/* implicit */int) var_0))))));
}
