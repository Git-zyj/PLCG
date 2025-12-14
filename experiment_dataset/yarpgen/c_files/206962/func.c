/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206962
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))))));
    var_16 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1))));
    var_17 += ((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-(1585429177811212525LL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 += ((/* implicit */short) ((((((/* implicit */_Bool) min(((short)-18285), (((/* implicit */short) (unsigned char)218))))) ? (((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned short)50637)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_0 [i_0])))) >> (((((/* implicit */int) (unsigned char)208)) - (180)))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(min((arr_1 [i_0]), (((/* implicit */long long int) ((unsigned char) (_Bool)1))))))))));
    }
}
