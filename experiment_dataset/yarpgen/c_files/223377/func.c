/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223377
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned char) var_10)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_19 += ((/* implicit */int) ((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [8U] [i_0]))), (arr_1 [(unsigned short)6] [i_0]))) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [20] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */int) (-(((arr_4 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        var_21 = ((/* implicit */int) min((var_21), (min(((+(min((2147483647), (((/* implicit */int) arr_3 [i_1])))))), (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_1]))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((2288441642U), (((/* implicit */unsigned int) (short)0))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (-1683876556)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27)))));
}
