/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203020
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18171509561570828100ULL)));
    var_18 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (-795273571)));
        var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */int) (signed char)126)) % (((/* implicit */int) (signed char)126)))) : ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)23931))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 + 2])) * (((/* implicit */int) arr_0 [i_0 + 2]))));
    }
}
