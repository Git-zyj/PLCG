/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201938
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)160)), ((short)-21929)))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_15 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) (+(((/* implicit */int) max(((short)11281), (((/* implicit */short) arr_1 [i_0] [i_0])))))));
    }
    var_16 = ((/* implicit */unsigned int) var_7);
}
