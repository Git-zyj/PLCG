/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246582
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
    var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4344073489846311654LL)) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 14734083588909351271ULL))))))))) ? (36028796750528512LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((short) min((var_4), (4344073489846311653LL))));
        var_14 = var_0;
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (-36028796750528531LL)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (var_5)))));
    }
}
