/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51168
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
    var_20 = ((/* implicit */unsigned long long int) var_19);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_19) : (((/* implicit */long long int) arr_1 [(unsigned char)2])))) != ((-9223372036854775807LL - 1LL))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_4 [i_1])))) ? (((/* implicit */long long int) var_13)) : (var_3)));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) max((34292629504LL), (arr_5 [i_1] [i_1]))))) ? (((((long long int) arr_7 [i_1])) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)18)) ? (arr_7 [i_1]) : (682249806U)))))) : (((/* implicit */long long int) arr_4 [i_1]))));
        arr_9 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
        var_24 = ((/* implicit */signed char) max((3030056140U), (3612717497U)));
    }
    var_25 = (~(((var_9) - (((var_18) | (var_16))))));
}
