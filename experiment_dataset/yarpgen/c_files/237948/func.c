/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237948
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [0U] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18223674668017074058ULL)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32746))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 4294967295U)) * (min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) == (var_5))))))));
        arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(3U))))));
    }
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_3))));
    var_15 = ((var_6) - (((((/* implicit */unsigned int) (~(0)))) & (2705480915U))));
    var_16 = max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-8530))))) ? (max((var_4), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5)) ? (((/* implicit */int) var_11)) : (2147483647)))))), (((/* implicit */unsigned long long int) var_3)));
}
