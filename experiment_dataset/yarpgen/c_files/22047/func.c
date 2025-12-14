/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22047
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [(short)9] = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0 - 1]));
        var_12 |= ((/* implicit */short) (~((~(arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) min((min((arr_5 [i_1]), (-8756010844498951062LL))), (((/* implicit */long long int) var_2))));
        arr_6 [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6089))), (((/* implicit */unsigned short) min((var_7), (var_7))))))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59431)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70)))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (signed char)46))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_16 = ((/* implicit */int) ((arr_7 [i_2]) << (((((int) arr_1 [i_2])) + (2097256170)))));
        arr_9 [12U] [(_Bool)1] = ((/* implicit */unsigned short) ((arr_5 [i_2]) != (((/* implicit */long long int) var_5))));
        var_17 = ((/* implicit */int) ((((/* implicit */int) (short)12698)) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)59442)) < (((/* implicit */int) (unsigned short)59446)))))));
    }
    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-12699)) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) 4091764243088904476LL)))))));
}
