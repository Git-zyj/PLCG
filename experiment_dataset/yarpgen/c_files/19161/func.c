/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19161
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
    var_19 = ((/* implicit */signed char) var_3);
    var_20 = ((/* implicit */unsigned short) var_16);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_15);
        var_21 &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_0 [6ULL] [i_0]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (var_18)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? ((~(((/* implicit */int) var_16)))) : ((~(var_7)))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_6 [(short)14])) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1] [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((+(((/* implicit */int) (unsigned char)61)))))))));
    }
}
