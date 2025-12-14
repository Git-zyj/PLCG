/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20648
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32753))));
    var_21 ^= ((/* implicit */unsigned long long int) (short)6144);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_22 |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)32740)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [(_Bool)1])))))));
        var_23 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (short)-3558)) ? ((-(((/* implicit */int) (short)6149)))) : (((/* implicit */int) (short)32753)))));
    }
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_9))));
}
