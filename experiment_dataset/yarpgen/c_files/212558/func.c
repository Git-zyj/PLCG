/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212558
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
    var_20 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_21 *= ((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_0 + 2]);
        var_22 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])))) | (((((/* implicit */_Bool) 339483851)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)73))))))) + (max((2535582599U), (((/* implicit */unsigned int) ((_Bool) var_18)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) - ((+(((/* implicit */int) (unsigned char)73))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))) ? (((/* implicit */int) (short)1688)) : (((/* implicit */int) arr_1 [i_0 - 1] [14U])))) : (((/* implicit */int) (short)1677)));
    }
    var_24 = ((/* implicit */int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((1648358858U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned int) var_6)) : ((+(var_12)))))));
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((max((var_0), ((_Bool)1))) ? (min((var_3), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_19) & (((/* implicit */int) (unsigned char)142)))))))))))));
}
