/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243345
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
    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -6989146814827354276LL)))) + (var_0));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (1ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_0] [i_0 - 2])) | (1099511625728LL))))));
        var_20 = ((/* implicit */int) (+(18446744073709551615ULL)));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3633365436U)) ? (((((/* implicit */_Bool) 1ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) -1021952427))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967295U)))) : (((((((/* implicit */_Bool) (short)3930)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (5975910449309250693LL))) + (((/* implicit */long long int) min((534773760U), (4294967278U))))))));
    }
}
