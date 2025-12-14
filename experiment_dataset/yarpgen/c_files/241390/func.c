/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241390
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) ((long long int) arr_6 [i_1] [i_1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned char) (_Bool)1))))))) : (((((/* implicit */_Bool) 3478802305U)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned char)173)))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)107);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36427)) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14))), (((/* implicit */unsigned short) arr_4 [i_1]))))) : (((/* implicit */int) var_0)))))));
    }
    var_17 |= ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)-1658)), ((unsigned short)29108)))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)36427)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10)))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */long long int) 2921280129U)) : (var_9))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)15)) - (((/* implicit */int) var_3)))) > (((/* implicit */int) var_7)))))));
}
