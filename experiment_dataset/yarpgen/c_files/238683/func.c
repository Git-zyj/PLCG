/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238683
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
    var_13 = ((/* implicit */signed char) ((var_9) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) > (((/* implicit */int) var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min((var_2), (var_0)))))))));
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_7)) ? (var_11) : (var_11))) : (((var_11) & (var_12))))) : (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16243381731542302475ULL)) ? (6149678746370062976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (29))))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_4))))) : (((((/* implicit */unsigned long long int) var_7)) + (var_12))))))));
}
