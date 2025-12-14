/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/403
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
    var_11 = ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_3))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_12 -= var_3;
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_0 [i_0 + 1])))))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) << (((((/* implicit */int) (short)(-32767 - 1))) + (32771)))));
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_8)))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_4 [i_1 + 2] [14LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_2 [i_1] [i_1]) << (((((/* implicit */int) (_Bool)1)) - (1)))))), (((((/* implicit */_Bool) -2959176381982229520LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59813))) : (var_3)))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)57)), (var_0)))), (-8287237831719564947LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) (-(((14039334129480728715ULL) * (((/* implicit */unsigned long long int) 545590383812487938LL))))));
    }
}
