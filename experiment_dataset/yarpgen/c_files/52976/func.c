/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52976
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
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((!(var_9))), ((_Bool)1))))) : (var_1)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_6)))), (((arr_0 [i_0]) / (arr_0 [i_0])))));
        var_17 *= ((/* implicit */long long int) min(((_Bool)1), (var_6)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) var_6);
        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1 + 1])) - (((/* implicit */int) (signed char)-106))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (616049294) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1])))))));
        arr_7 [6U] [6U] = ((unsigned long long int) arr_3 [i_1 - 2]);
    }
}
