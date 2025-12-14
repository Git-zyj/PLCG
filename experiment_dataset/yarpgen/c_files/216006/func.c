/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216006
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */int) min(((unsigned short)21937), ((unsigned short)21927))))));
        var_12 = ((arr_0 [i_0]) && ((!(((/* implicit */_Bool) arr_1 [i_0])))));
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) / (((var_9) * (((var_9) + (var_9)))))));
}
