/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239325
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
    var_15 = ((/* implicit */signed char) (unsigned short)65535);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) (_Bool)0))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min(((_Bool)1), (((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (-9121381596114825455LL)))) || (((/* implicit */_Bool) 100663296U)))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_1)) : (4194304007U)))) && (((((/* implicit */_Bool) -288230376151711744LL)) && (((/* implicit */_Bool) var_8))))))));
}
