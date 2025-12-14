/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220370
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((int) (unsigned char)7)) - ((+(((/* implicit */int) (short)16783))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-14690)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) * (var_4)))))) ? (min((((/* implicit */int) ((signed char) arr_1 [i_0]))), (((arr_0 [i_0]) << (((((/* implicit */int) var_9)) - (135))))))) : (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-10733))))));
        var_22 -= ((/* implicit */short) (+(((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [1U])), (var_12)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10))))))));
    }
    var_23 += ((/* implicit */short) ((((/* implicit */_Bool) 268715898)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10733))) == (9347422342069420226ULL))))) : (((((/* implicit */_Bool) (short)16771)) ? (17247873096114963804ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))))));
}
