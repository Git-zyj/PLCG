/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46128
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [7ULL] = ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)30147))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_5)))) > (((/* implicit */int) var_9)));
        var_17 = ((/* implicit */_Bool) max(((unsigned short)57920), ((unsigned short)57915)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((arr_1 [i_0] [i_0]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) < (min((9808618982133176024ULL), (4270965204660289620ULL))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    var_18 = var_4;
    var_19 = var_1;
}
