/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227084
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-71)) : (var_9))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [6])))) ? (((arr_0 [7U] [7U]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (unsigned char)120)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        var_12 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) (short)2048)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)152))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_2))));
    }
    var_14 = ((/* implicit */unsigned char) 4);
}
