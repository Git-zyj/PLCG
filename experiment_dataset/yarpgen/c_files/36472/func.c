/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36472
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) (signed char)-31)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2 - 2])) : (var_11)))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2070153128U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)2])))))) ? (arr_1 [i_1] [i_2 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])))))))) ? (max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_3)) : (var_11))), (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))))) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_11))) - (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
}
