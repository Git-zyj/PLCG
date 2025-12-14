/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31910
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
    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) 70368744177663ULL)) ? (4609434218613702656LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))))), (((/* implicit */long long int) min(((short)-164), (((/* implicit */short) ((5232168838334882703ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)(-32767 - 1)))));
        arr_2 [(unsigned char)2] [i_0 + 1] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2))))), ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
        var_16 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)32765)), (932408674U)));
        var_17 = ((/* implicit */short) ((_Bool) 17U));
    }
}
