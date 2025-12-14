/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202681
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
    var_14 = ((/* implicit */int) (+((~(((unsigned long long int) var_5))))));
    var_15 -= min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */short) var_11)), ((short)-28312)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) var_1)))))) : (max((var_7), (((/* implicit */unsigned long long int) var_0)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(arr_0 [i_0])))), (max((8118427504429715100LL), (((/* implicit */long long int) 1023))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((max((-1563841443), (((/* implicit */int) (signed char)-35)))) % (((/* implicit */int) var_11))))), ((-(arr_2 [i_0])))));
    }
}
