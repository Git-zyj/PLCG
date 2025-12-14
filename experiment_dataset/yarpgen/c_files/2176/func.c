/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2176
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
    var_18 = ((/* implicit */short) 9223372036854775807LL);
    var_19 = ((/* implicit */long long int) ((unsigned long long int) (~(((var_8) - (((/* implicit */long long int) ((/* implicit */int) (short)3720))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((signed char) arr_0 [i_0] [i_0])), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (min((((/* implicit */unsigned long long int) var_13)), (arr_1 [6LL] [17LL]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [5U] [i_0]) : (arr_1 [(short)19] [9U])))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)3720)) : (((/* implicit */int) (unsigned short)37098))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_0]) : (19ULL)))))))));
    }
}
