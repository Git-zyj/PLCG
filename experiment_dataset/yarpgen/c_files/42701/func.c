/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42701
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
    var_18 = ((/* implicit */_Bool) max(((+(max((((/* implicit */int) (short)-17422)), (2139095040))))), (((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) min((var_3), (var_12)))) : (((/* implicit */int) var_3))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((max((2139095018), (((/* implicit */int) (unsigned short)53847)))), (((/* implicit */int) var_14))));
        var_21 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 9403950746309545034ULL)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_12)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (signed char)-1)), ((short)2130)))) / (((/* implicit */int) (unsigned char)57))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)36))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49016)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (0ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) var_9)))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_5))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)123))));
        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5028)) || ((_Bool)0))))));
    }
}
