/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201965
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6758914849718041434LL))), (((/* implicit */long long int) ((int) var_5)))))) ? ((+(13LL))) : (((/* implicit */long long int) ((unsigned int) -13LL)))));
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = var_8;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) max((24ULL), (var_5))))), (max((((((/* implicit */_Bool) 13238817805902265202ULL)) ? (-6758914849718041428LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -6758914849718041419LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [5LL] [(signed char)4])) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
}
