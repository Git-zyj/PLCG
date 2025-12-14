/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223157
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
    var_11 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_4))), (((((/* implicit */int) var_10)) > (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((((long long int) (signed char)2)) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1])))));
        var_13 |= ((/* implicit */short) (-(((/* implicit */int) (signed char)-73))));
    }
    var_14 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)8176)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_8))))) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)7906)))))) : (var_4))));
}
