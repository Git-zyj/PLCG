/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240502
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    var_11 = ((/* implicit */_Bool) ((var_6) | (((((/* implicit */_Bool) var_4)) ? ((~(var_9))) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41477)))))))));
    var_12 = ((/* implicit */unsigned long long int) var_2);
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)41462)) || (((/* implicit */_Bool) (unsigned short)41506)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((var_2) >> (((var_2) - (1529162639U)))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_5))))), (arr_2 [i_0] [i_1]))));
                arr_5 [(unsigned char)1] = ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned int) arr_1 [i_1] [i_0])), (var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_3 [i_0] [i_0] [i_0])))) ? (((((/* implicit */long long int) var_3)) - (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))) : (((/* implicit */long long int) arr_2 [i_0] [i_1])));
            }
        } 
    } 
}
