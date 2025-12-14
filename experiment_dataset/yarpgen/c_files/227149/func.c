/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227149
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 629421442))))))) ? (max((((/* implicit */unsigned int) var_11)), (((unsigned int) arr_4 [i_0])))) : (((unsigned int) ((unsigned int) var_10)))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((long long int) arr_0 [i_0])) != (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                var_16 = ((unsigned short) ((((/* implicit */_Bool) arr_2 [(signed char)18] [i_1])) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_1])))) : (((var_12) / (arr_0 [i_0]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (signed char)-12))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 1630104010U)) : (8710976521386178124ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (var_5)));
}
