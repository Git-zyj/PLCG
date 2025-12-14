/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233683
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8215590031515866492LL)) ? (((/* implicit */long long int) 3353631150U)) : (var_5))))))) : (((/* implicit */int) min(((short)28513), (((/* implicit */short) (!(((/* implicit */_Bool) 941336145U))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 1] = (~(8532956024508917747LL));
        var_20 = ((/* implicit */unsigned long long int) (_Bool)0);
        var_21 = ((/* implicit */unsigned int) (+(var_12)));
        var_22 = ((((4059596595U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (1494305271U) : (((/* implicit */unsigned int) 1988429897)));
    }
}
