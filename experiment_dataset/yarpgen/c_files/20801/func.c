/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20801
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_9))) ? (((((((/* implicit */_Bool) (unsigned short)13824)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) + (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)62)))))) : (var_3)));
    var_19 = ((/* implicit */_Bool) var_11);
    var_20 = ((/* implicit */signed char) 490361080);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (unsigned short)19072))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (((((/* implicit */_Bool) -1LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) : (((/* implicit */int) var_12))));
}
