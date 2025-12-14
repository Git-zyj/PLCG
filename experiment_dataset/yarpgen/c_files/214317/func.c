/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214317
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_5), (((/* implicit */short) var_0)))))))) ? (((((/* implicit */_Bool) (~(var_14)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_2))) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) var_14)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 *= ((/* implicit */_Bool) ((int) ((int) arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((signed char) 2514003448242940767ULL);
    }
    var_18 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((_Bool) (_Bool)0))))), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_11)) - (61555)))))))));
    var_19 = ((/* implicit */long long int) var_0);
}
