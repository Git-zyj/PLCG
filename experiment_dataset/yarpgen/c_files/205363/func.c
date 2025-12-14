/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205363
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
    var_13 = ((((((/* implicit */int) ((short) (unsigned char)116))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)169)) && ((_Bool)1)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)188)))))));
    var_14 = ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned char) var_11))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) (unsigned char)157))))))) ? ((((~(((/* implicit */int) arr_0 [i_0])))) & (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)78))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((((/* implicit */int) (unsigned char)172)) | (arr_1 [i_0])))));
        var_17 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))) != (arr_1 [i_0]))), ((((+(((/* implicit */int) var_9)))) <= (((/* implicit */int) (unsigned char)178))))));
    }
}
