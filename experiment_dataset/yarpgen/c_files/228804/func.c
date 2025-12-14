/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228804
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
    var_16 += ((/* implicit */short) min((max((((((/* implicit */_Bool) (short)30720)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)71)), ((short)15522)))))), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15524))) : (arr_1 [i_0] [i_0])));
        var_17 = ((/* implicit */long long int) ((arr_1 [i_0] [i_0]) >> (((4294967295U) - (4294967286U)))));
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)15522))));
    }
    var_19 *= ((/* implicit */short) 3997916296U);
    var_20 = ((/* implicit */_Bool) var_0);
    var_21 = ((/* implicit */unsigned short) var_7);
}
