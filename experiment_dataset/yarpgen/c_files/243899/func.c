/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243899
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) ((arr_0 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)12758))))));
        var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)12735)))))))), ((+(var_2)))));
    }
    var_13 = ((/* implicit */int) var_0);
    var_14 = ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), (var_4))))) < (max((((/* implicit */unsigned long long int) var_2)), (var_11))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)12746)) : (((/* implicit */int) var_8))))), (var_10))));
    var_15 = ((/* implicit */short) ((var_9) * (((var_2) >> (((((((/* implicit */_Bool) (short)12736)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) - (31754)))))));
}
