/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236894
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) min((((((/* implicit */unsigned int) (-(arr_0 [i_0])))) & (max((1798891515U), (((/* implicit */unsigned int) arr_0 [i_0])))))), (((/* implicit */unsigned int) (-(arr_0 [23LL])))))))));
        var_11 = max((var_4), (((signed char) (signed char)-111)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (-478386487))))));
        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (((((/* implicit */_Bool) -691430344422965601LL)) ? (((/* implicit */long long int) arr_0 [i_1])) : (var_0))))) <= (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (short)-2)))) - (((/* implicit */int) (short)-7116)))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7116)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1])))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)84)))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
    }
    var_14 |= var_9;
}
