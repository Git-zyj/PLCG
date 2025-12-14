/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24221
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((((12329883557089105287ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (arr_0 [i_0])))))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((short) (+(arr_0 [i_0]))))));
        var_15 = var_0;
        var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-(((unsigned long long int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */short) var_4);
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_6))));
    var_19 *= ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (max((((/* implicit */unsigned short) var_8)), ((unsigned short)0)))));
}
