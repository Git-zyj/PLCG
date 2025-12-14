/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221327
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_18 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-19)))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) 1680346534U)) : (0ULL)))))))));
    }
    for (int i_1 = 4; i_1 < 14; i_1 += 3) 
    {
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_1])) : (((/* implicit */int) (short)11519)))))) : (max((-1013921003), (((/* implicit */int) (!(((/* implicit */_Bool) 4434383314623277329ULL)))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1 - 4]);
    }
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6104)) ? (var_9) : (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (_Bool)1)))))));
}
