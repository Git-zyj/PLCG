/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20224
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
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_19 *= min((((unsigned int) var_14)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_16))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((signed char) var_18));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_7) : (var_17))) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [5]))) - (var_17)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_21 |= ((/* implicit */signed char) ((((/* implicit */int) ((short) var_16))) != (((/* implicit */int) arr_3 [i_1]))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)69)) / (((/* implicit */int) (signed char)56))));
        arr_7 [(signed char)0] = arr_3 [i_1];
        var_22 = ((/* implicit */_Bool) var_5);
    }
    var_23 |= ((/* implicit */unsigned long long int) var_5);
    var_24 = min((var_8), ((-(((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_8))) + (2147483647))) >> ((((~(((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (var_17))))) - (111498174U))))))));
}
