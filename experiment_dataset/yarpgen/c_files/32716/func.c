/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32716
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? ((-((~(var_2))))) : (max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) var_14))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_21 = min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) < (((18446744073709551615ULL) << (((/* implicit */int) (_Bool)1))))))), (max((var_9), (((/* implicit */unsigned char) arr_0 [i_0 - 2])))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22690)) ? (((/* implicit */long long int) 0)) : (-8929950573288404366LL)))) > (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])) : (var_3)))));
    }
    var_23 += ((/* implicit */short) min((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31))))))), (((/* implicit */unsigned long long int) var_18))));
}
