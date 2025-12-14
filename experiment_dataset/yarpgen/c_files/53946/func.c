/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53946
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) var_8);
        var_13 += 8U;
    }
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (min((((/* implicit */unsigned int) var_8)), (var_5)))))) / (((/* implicit */int) ((max((var_4), (var_4))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)0)))))))))))));
    var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((var_4), (var_2)))))));
}
