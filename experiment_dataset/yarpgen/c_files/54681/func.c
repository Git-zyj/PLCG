/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54681
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
    var_16 = min((((/* implicit */unsigned int) ((unsigned short) min(((unsigned char)0), ((unsigned char)6))))), (((min((var_11), (((/* implicit */unsigned int) var_1)))) >> (((min((var_12), (((/* implicit */unsigned long long int) var_10)))) - (4134348881ULL))))));
    var_17 = ((/* implicit */_Bool) ((max(((~(((/* implicit */int) (unsigned char)6)))), (((((/* implicit */int) var_3)) >> (((/* implicit */int) var_14)))))) & ((+((~(1798750114)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)255), ((unsigned char)255)))))))), (((((/* implicit */unsigned long long int) ((arr_0 [i_0]) + (var_10)))) - (max((4620658344809734192ULL), (((/* implicit */unsigned long long int) var_13))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (arr_0 [9])))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) arr_1 [i_0]))))), (min((((arr_1 [i_0]) - (((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) (signed char)-104)))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(min(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [0U] [0U] [0U])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
            }
        } 
    } 
}
