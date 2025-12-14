/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41844
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) var_14);
        arr_4 [i_0] [2ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -2147483637)), (3879802448U)))) ? (min((((/* implicit */unsigned int) var_2)), (max((415164853U), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (var_14)))) || (((/* implicit */_Bool) var_10))))))));
    var_17 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (var_12)))), (min((var_8), (((/* implicit */long long int) 3879802448U)))))), (((/* implicit */long long int) var_13))));
}
