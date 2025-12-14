/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198045
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_12)))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_14)) : (var_9))) - (max((((/* implicit */unsigned int) var_8)), (var_12)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_14)))) ? (((/* implicit */int) min((arr_0 [i_0 + 1] [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) < (var_12)))))), (((/* implicit */int) (((~(((/* implicit */int) var_13)))) > (((/* implicit */int) var_11)))))));
        var_18 &= ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))) == (var_1)))), (min(((short)0), (((/* implicit */short) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0 - 2] [i_0] = ((_Bool) ((short) arr_0 [i_0 + 1] [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)0)))) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (var_14)))))) : ((-(var_15)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_9))));
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (4073284657U) : (var_9)))), (((/* implicit */unsigned long long int) var_9)))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_1))));
}
