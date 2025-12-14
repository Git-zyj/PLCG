/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215188
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((min(((~(((/* implicit */int) (signed char)42)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17)))))), (((((max((var_8), (((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_10)) + (22535))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [14U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0] [7U])), (arr_2 [i_0] [i_0] [(signed char)18]))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [(signed char)14] [i_0] [4U])))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_1] [1ULL])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_2 [16ULL] [i_0] [16ULL]))))))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 - 1])) * (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 - 1])))) | (((/* implicit */int) min((arr_3 [i_0] [i_0 - 2] [i_0 + 2]), (arr_3 [i_0] [i_0 - 2] [i_0 - 3]))))));
            }
        } 
    } 
}
