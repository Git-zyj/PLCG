/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21017
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
    var_17 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_13))))) : (max((((/* implicit */long long int) var_2)), (arr_1 [i_0])))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (((-(arr_1 [i_0]))) + (((((/* implicit */long long int) -1833898206)) / (arr_1 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)126), (((/* implicit */signed char) arr_4 [i_1])))))) ^ (((((/* implicit */_Bool) 1360248291)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))));
        var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) 1990029148)) : (arr_2 [i_1]))), (((/* implicit */unsigned long long int) (unsigned char)127))));
        arr_6 [(_Bool)1] [i_1] |= ((/* implicit */int) ((((arr_4 [i_1]) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1926960788U)) || (((/* implicit */_Bool) (unsigned char)97))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)31216)))))))) ? (((/* implicit */long long int) (-(2992210323U)))) : (((((/* implicit */_Bool) max((var_15), (var_15)))) ? (((((/* implicit */_Bool) -1661834013)) ? (-11422365648838295LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_2)) : (1302756972U)))))))))));
}
