/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240964
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((signed char) var_2))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-21856)) : (((/* implicit */int) (unsigned short)43545)))) : (((/* implicit */int) var_2)))) : (min(((~(var_7))), (((((/* implicit */int) (short)-21856)) * (((/* implicit */int) (signed char)-1))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21856)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (63208959U))))));
        var_16 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_17 = ((/* implicit */long long int) ((unsigned long long int) var_0));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((+(((/* implicit */int) var_3))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-15)), (var_9)))) : (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
}
