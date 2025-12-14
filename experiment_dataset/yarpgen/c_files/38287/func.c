/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38287
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)11543))) ? (((((/* implicit */_Bool) max((2292946642989819201LL), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) : (min((var_3), (9223372036854775803LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_11 = ((/* implicit */short) ((((((((/* implicit */_Bool) min((var_2), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) -566391142210072803LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3))))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (26915)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) var_7);
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_1 [0LL] [0LL])), (var_3)))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)511)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-20637))))))));
        arr_3 [i_0] = var_3;
    }
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) var_2)), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))));
}
