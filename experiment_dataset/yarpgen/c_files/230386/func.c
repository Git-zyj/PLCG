/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230386
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)6225)))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)335)))))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) var_0);
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (var_1)))) ? ((~(((/* implicit */int) (short)-24088)))) : (((/* implicit */int) var_10)))))));
        arr_3 [(unsigned char)13] [(unsigned char)20] = 4U;
    }
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) 4294967295U))));
}
