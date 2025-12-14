/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214695
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))) / (((((/* implicit */_Bool) (unsigned char)255)) ? (262143ULL) : (0ULL)))));
        arr_2 [i_0] [14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (18446744073709551590ULL))))) : (max((((var_5) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_13)))), ((+(23ULL)))))));
    }
    var_20 = ((((/* implicit */_Bool) (((+(8ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))) ? (((/* implicit */unsigned long long int) ((var_2) % (((int) 18446744073709551606ULL))))) : (((((((/* implicit */_Bool) var_6)) ? (var_14) : (18446744073709551597ULL))) * ((((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
}
