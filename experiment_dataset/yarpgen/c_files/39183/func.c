/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39183
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) 12728969990510799539ULL)) ? (((((/* implicit */_Bool) (+(-6911877101612685885LL)))) ? (-6911877101612685858LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_6)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -6911877101612685902LL)) ? (((2147352576) << (((((-1491151677) + (1491151680))) - (3))))) : (((((/* implicit */int) (_Bool)1)) ^ (var_5)))))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2139095040)) ? (((((/* implicit */_Bool) ((int) -2139095038))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 70351564308480ULL)) ? (var_5) : (var_9)))) : (min((((/* implicit */unsigned long long int) var_6)), (10050056964925481212ULL))))) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((unsigned long long int) ((((317185079U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33)))));
        var_13 &= ((/* implicit */unsigned long long int) ((unsigned char) 3377096419U));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_8))))))), (max((min((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */unsigned int) ((((arr_5 [i_1] [i_1]) + (2147483647))) >> (((1942570548) - (1942570526))))))))));
        arr_6 [i_1] = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
    }
}
