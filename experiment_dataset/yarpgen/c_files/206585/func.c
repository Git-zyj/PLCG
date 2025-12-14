/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206585
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
    var_14 = (+(((((/* implicit */_Bool) var_0)) ? ((+(var_0))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 798731077U)) : (var_0))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((-1410513445) / (arr_1 [i_0])))) ? (7167999470113778554LL) : (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (arr_1 [(_Bool)1]))))))));
        arr_4 [14U] [8ULL] &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((arr_1 [i_0]) / (arr_1 [i_0 - 1])))) <= (((15728640U) & (((/* implicit */unsigned int) -434312533))))))) < (((/* implicit */int) (_Bool)1))));
    }
}
