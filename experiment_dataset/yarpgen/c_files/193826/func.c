/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193826
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) (-2147483647 - 1)))) > (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44595))))) ? ((+(1238707239311385433ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) arr_1 [i_0])) & (4328063441856435626LL))), (((/* implicit */long long int) (+(627533982U))))))) ? (max((((/* implicit */int) ((33538048) <= (((/* implicit */int) arr_0 [i_0] [i_0]))))), ((-(((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) > ((+(4328063441856435635LL))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_6 [i_0] = (((((~(var_13))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) | (min((((arr_0 [i_0] [i_0]) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4328063441856435635LL)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    var_16 |= ((/* implicit */unsigned long long int) (_Bool)1);
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_8)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (short)9557)) ? (((/* implicit */int) (short)32567)) : (((/* implicit */int) var_7))))))), ((+(((((/* implicit */long long int) ((/* implicit */int) var_7))) - (3144325916050038360LL)))))));
}
