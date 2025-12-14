/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30131
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
    var_10 = ((/* implicit */unsigned char) (!(var_9)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)21] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned char)33))))) <= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))))))));
        var_11 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_12 ^= (~(((((arr_3 [i_0]) <= (arr_1 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
    }
}
