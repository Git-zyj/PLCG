/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215064
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)196)) + (((/* implicit */int) (unsigned char)120))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) == (((/* implicit */int) (unsigned char)250))))))))) ? ((~(var_4))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-51))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) var_6);
        arr_4 [5LL] [i_0] = var_8;
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((((/* implicit */int) arr_1 [i_0])) + (arr_3 [i_0]))), (((/* implicit */int) (unsigned short)24797)))))));
        var_16 = ((signed char) (~(((/* implicit */int) arr_1 [i_0]))));
    }
}
