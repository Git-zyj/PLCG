/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233252
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
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 4]))));
        var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1001273856)) ? (((/* implicit */unsigned long long int) -3839891975093185887LL)) : (7600675713597850542ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)255))))));
        var_12 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) : (10846068360111701058ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0 - 1]))))))) | ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (10846068360111701073ULL)))))));
    }
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) var_6))))));
}
