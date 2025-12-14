/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210944
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
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 4])) / (((/* implicit */int) arr_1 [i_0 - 4]))));
        var_15 |= ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_13))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5805657871868171464ULL)) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] [i_0 - 1] = (_Bool)1;
    }
    var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)-22310)) & (((/* implicit */int) (unsigned short)10333))))));
}
