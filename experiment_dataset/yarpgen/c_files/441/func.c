/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/441
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 |= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-74))));
        var_18 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) arr_3 [i_0])))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (arr_0 [14U] [14U])));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 = (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_2 [i_1]))));
        var_21 += max((((/* implicit */long long int) ((arr_2 [i_1]) + (arr_2 [i_1])))), ((+(var_3))));
    }
    var_22 = ((/* implicit */short) max((var_22), (var_7)));
    var_23 |= ((/* implicit */signed char) ((_Bool) min((638604165U), (((/* implicit */unsigned int) var_6)))));
    var_24 |= ((/* implicit */_Bool) (~(var_9)));
    var_25 = ((/* implicit */int) var_12);
}
