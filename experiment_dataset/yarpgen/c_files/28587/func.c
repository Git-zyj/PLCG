/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28587
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
    var_11 = ((((/* implicit */_Bool) (short)-18021)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((short) arr_0 [i_0]))), (((unsigned long long int) (short)12890)))), (((/* implicit */unsigned long long int) ((short) min((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_13 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [21ULL]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) || (((/* implicit */_Bool) arr_0 [i_0])))))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */_Bool) (~(max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)12890)), (10134239321665064312ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_1))))) : (min((var_3), (((/* implicit */unsigned int) (unsigned short)4831))))))) / (var_5)));
}
