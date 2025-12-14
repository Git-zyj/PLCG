/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45703
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-110)), (var_8)))) || (((/* implicit */_Bool) min(((short)16380), (((/* implicit */short) var_7)))))))));
    var_19 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) var_3)) || (var_15))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28968)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_6)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (1312973750U))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((525226577U), (2981993566U)))))) ? (min((2981993543U), (((/* implicit */unsigned int) -65137131)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1])))));
        arr_3 [(short)2] [(short)2] |= ((/* implicit */long long int) var_13);
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((2981993550U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_8))))))))))));
}
