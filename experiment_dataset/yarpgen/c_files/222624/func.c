/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222624
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_8))) && (((/* implicit */_Bool) ((unsigned short) var_4)))))) : (((int) ((var_0) > (var_4))))));
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = arr_0 [i_0] [i_0];
        var_15 = ((/* implicit */unsigned short) ((unsigned int) ((arr_0 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_10)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) var_3);
    }
}
