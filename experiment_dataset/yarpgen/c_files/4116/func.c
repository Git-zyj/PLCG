/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4116
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_8)))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_17 = ((/* implicit */unsigned long long int) max((var_10), (max((var_2), (((/* implicit */unsigned short) max((var_14), (((/* implicit */signed char) var_15)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)6195))));
        arr_5 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) min((((arr_2 [i_0]) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) - (2025895132706295255LL))))), (((/* implicit */unsigned long long int) min(((~(arr_0 [i_0]))), (arr_0 [i_0]))))))) : (((/* implicit */unsigned short) min((((arr_2 [i_0]) >> (((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) - (2025895132706295255LL))) + (2573587816036191156LL))))), (((/* implicit */unsigned long long int) min(((~(arr_0 [i_0]))), (arr_0 [i_0])))))));
    }
}
