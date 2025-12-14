/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192265
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
    var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_15)) ? (min((var_14), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_15))))));
    var_18 = ((/* implicit */unsigned long long int) ((var_2) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -462078715)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)88))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-89)) + (((/* implicit */int) (signed char)-89)))), (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
        var_21 = ((/* implicit */short) arr_3 [(signed char)5] [i_1]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (short)-1))));
        var_23 = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_2 [i_1 + 3])), (arr_0 [i_1 + 3]))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_2 [i_1 - 1])), ((signed char)88))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_24 = ((((/* implicit */_Bool) var_6)) || (arr_6 [i_2]));
        var_25 = ((/* implicit */_Bool) ((arr_7 [i_2]) ? (30696802278509747LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))));
    }
}
