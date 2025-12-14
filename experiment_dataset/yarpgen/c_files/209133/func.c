/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209133
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
    var_18 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) var_14)))) : (var_7))));
    var_19 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (max((var_10), (((/* implicit */unsigned long long int) var_3)))) : (min((((/* implicit */unsigned long long int) var_17)), (var_1))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (signed char)63))));
    var_21 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 12454234771664378638ULL)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)67)))) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned char) arr_0 [i_0])))));
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))) ? (var_10) : (((/* implicit */unsigned long long int) arr_2 [(short)15]))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (arr_2 [i_0]) : (((/* implicit */int) var_12))))));
    }
}
