/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27333
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
    var_10 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)23396), ((unsigned short)65535))))) >= (min((((/* implicit */unsigned int) var_2)), (var_7))))), (var_2)));
    var_11 = ((((/* implicit */_Bool) var_3)) ? ((~(min((((/* implicit */unsigned long long int) var_3)), (562949953421311ULL))))) : (((/* implicit */unsigned long long int) (~(((unsigned int) var_9))))));
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [(unsigned short)7] [i_0] [i_1])), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)32767))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) : (max((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])), (arr_0 [i_0]))))))));
                var_14 = arr_1 [i_0] [i_1];
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42168)) || (((/* implicit */_Bool) (signed char)15))))), ((~(((/* implicit */int) var_2))))));
}
