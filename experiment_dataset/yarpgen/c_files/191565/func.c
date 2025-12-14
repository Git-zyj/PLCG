/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191565
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
    var_18 = ((/* implicit */long long int) var_9);
    var_19 = ((/* implicit */long long int) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)12105))))))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] &= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (unsigned short)45008)) : (((/* implicit */int) (signed char)-90)))) : (((/* implicit */int) arr_1 [i_0]))));
    }
}
