/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239813
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_8)), (((var_7) ? (((/* implicit */unsigned long long int) ((unsigned int) var_14))) : (max((var_13), (((/* implicit */unsigned long long int) var_9))))))));
    var_17 = ((/* implicit */unsigned int) ((((long long int) (~(((/* implicit */int) var_4))))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) var_8)) ^ (4294967295U))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3084131070598293691LL)))))) > (((unsigned int) var_0))));
        var_18 = ((/* implicit */short) (((((_Bool)0) ? (((((/* implicit */_Bool) 3084131070598293690LL)) ? (((/* implicit */long long int) 27U)) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) 4294967253U)))) < (((/* implicit */long long int) 791976875U))));
    }
    var_19 += ((/* implicit */unsigned long long int) var_0);
}
