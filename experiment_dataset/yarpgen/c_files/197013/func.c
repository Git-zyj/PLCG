/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197013
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
    var_16 ^= ((/* implicit */unsigned char) var_2);
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1852285650U)) ? (((/* implicit */unsigned int) var_5)) : (1852285650U))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2442681653U)) ? (15050449650204524902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (var_3))))));
    }
}
