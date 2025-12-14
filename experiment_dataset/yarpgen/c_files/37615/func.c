/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37615
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
    var_18 = ((/* implicit */unsigned short) (unsigned char)186);
    var_19 = ((/* implicit */int) max((max((-9223372036854775805LL), (-9223372036854775805LL))), (-9223372036854775805LL)));
    var_20 = (+((((-(((/* implicit */int) var_8)))) + ((+(((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 9223372036854775801LL))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62584)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (arr_1 [i_0 + 1] [i_0 + 1])));
        var_23 ^= ((/* implicit */unsigned char) ((arr_0 [10U]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) (unsigned short)15))));
    }
}
