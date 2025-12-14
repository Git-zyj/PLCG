/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48070
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
    var_14 = ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (short)-1606))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((max((arr_0 [i_0 + 3]), (((/* implicit */int) var_5)))), ((+(arr_0 [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (1482076168U)))) != (var_6)));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) (short)4800))))))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (short)-4776))))));
        var_17 = ((/* implicit */signed char) min(((short)-4800), ((short)4800)));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((var_11), (((/* implicit */int) var_0))))))) ? (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) (unsigned char)35)), (var_7))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)221)))))));
}
