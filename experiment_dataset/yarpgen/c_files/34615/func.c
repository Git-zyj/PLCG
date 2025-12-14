/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34615
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) var_11);
        var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((min((((/* implicit */int) ((short) var_16))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (var_18))))) == (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)2376)))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_5 [20ULL] = ((/* implicit */unsigned long long int) (~(arr_3 [i_1])));
        arr_6 [i_1] = ((/* implicit */_Bool) (short)11946);
    }
    var_22 = ((/* implicit */unsigned long long int) var_16);
}
