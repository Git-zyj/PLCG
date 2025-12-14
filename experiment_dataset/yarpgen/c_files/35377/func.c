/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35377
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
    var_20 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) var_13)))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4002)) ? (((/* implicit */int) (unsigned short)50201)) : (((/* implicit */int) (unsigned short)61533))));
        var_23 *= ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((unsigned long long int) ((var_8) + (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max(((unsigned short)61520), ((unsigned short)61520))))));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_11)) : (var_3)))))))));
}
