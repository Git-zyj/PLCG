/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52844
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 74366442)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) : (var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((var_11) - (3756284674U))))))))) ? (((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned char) var_17)), ((unsigned char)114))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_11)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18))) > (arr_2 [i_0] [i_0])));
        var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0]))));
    }
}
