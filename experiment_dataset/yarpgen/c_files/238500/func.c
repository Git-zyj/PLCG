/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238500
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((11403609768912461250ULL) - (((/* implicit */unsigned long long int) 524287U)))))));
    var_11 = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) 11403609768912461250ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (5743269208637026296ULL))), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((long long int) min((((arr_1 [i_0 + 2]) + (((/* implicit */int) var_1)))), (var_7))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0 - 1])), (arr_0 [i_0 + 2])))) ? (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) min((var_7), (var_7))))));
        arr_4 [11] = ((/* implicit */int) ((7043134304797090365ULL) & (((/* implicit */unsigned long long int) 2521594247U))));
    }
}
