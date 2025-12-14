/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214989
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) (_Bool)1))) | (((/* implicit */int) (unsigned char)31)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (_Bool)0);
    }
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_5), (var_5))), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_1))));
}
