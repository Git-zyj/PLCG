/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50093
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 -= ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_19 = ((/* implicit */int) min((var_19), (((((int) (unsigned short)10049)) + (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (18446744073709551615ULL)))) ? (682353134) : (min((arr_1 [(signed char)8]), (((/* implicit */int) (signed char)-60))))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned int) (-((~(((/* implicit */int) (unsigned short)4024))))))))));
    }
    var_21 ^= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) var_16)), (min((var_14), (273119431343128423LL))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 13117838381542030155ULL)) ? (67108863) : (((/* implicit */int) (unsigned short)10047))))))));
}
