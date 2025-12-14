/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48907
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
    var_12 = ((/* implicit */int) ((unsigned char) var_6));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_0) >> (((var_10) - (1357979686U)))))), (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1)))))) : (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    var_14 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [10U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((arr_0 [i_0] [i_0]) << (((((/* implicit */int) arr_1 [i_0])) - (41))))) : (((arr_0 [i_0] [i_0]) << (((((/* implicit */int) arr_1 [i_0])) - (38)))))));
    }
}
