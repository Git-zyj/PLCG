/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53428
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
    var_20 ^= ((/* implicit */short) min((min((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))))))), (var_0)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [(signed char)19] [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2672705307335216916LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
        arr_5 [i_0] [i_0] = var_7;
        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min(((short)-1), ((short)-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (arr_0 [i_0])))));
    }
    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-7))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)6)))) : (((((/* implicit */int) var_16)) << (((((/* implicit */int) var_19)) - (99)))))))));
}
