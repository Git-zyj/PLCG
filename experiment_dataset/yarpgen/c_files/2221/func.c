/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2221
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
    var_15 = 2042603563;
    var_16 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((int) (((-(arr_0 [i_0]))) % (arr_0 [i_0])))))));
        var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 2042603540)) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_1 [i_0] [5])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) -2042603553)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0]))))) : (arr_0 [i_0]));
    }
}
