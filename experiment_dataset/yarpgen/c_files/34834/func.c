/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34834
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) (+(2283081476U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11487)) ? (var_10) : (((/* implicit */int) var_7))))) : (max((343344017531005009ULL), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 + 3] [i_0 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) min((6943716216767734390LL), (arr_1 [i_0] [(_Bool)1])))) ? (max((((((/* implicit */_Bool) 1071644672)) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0 - 2] [i_0]))), (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */int) (short)11487))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 30858010008017857LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)220)))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_1 [i_0 + 2] [i_0 - 1]))) <= (min((((/* implicit */long long int) (short)27555)), (30858010008017857LL)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
    }
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) / (max((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_6))))))));
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)127)), (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (67108863ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (8853128495303446508LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))))))))));
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
}
