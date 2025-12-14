/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210587
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)4))))) : (8522825728LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) var_15)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) (unsigned char)8)))))));
        var_19 &= ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)3)) < (((/* implicit */int) var_11))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) var_12)) : (min((var_16), (((/* implicit */unsigned long long int) (unsigned char)9))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_8)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7235))) : (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)252)), (var_7))))) : (8125535625522191723LL)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) <= (((/* implicit */int) ((unsigned char) min((var_0), (((/* implicit */short) var_5))))))));
}
