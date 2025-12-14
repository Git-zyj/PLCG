/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224067
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)2)))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (signed char)125))))) ? (((((/* implicit */_Bool) min((arr_3 [i_0] [i_0 + 2] [i_0]), (arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_4 [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_12))))))) : (((arr_4 [i_0 + 3] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_1]))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((unsigned int) (unsigned char)241))))), (((long long int) arr_4 [i_0] [i_2]))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((arr_1 [i_1] [i_1]) + (((/* implicit */int) arr_7 [i_2] [i_1 - 2]))))) : (max((arr_0 [i_2]), (((/* implicit */unsigned int) arr_7 [i_0] [i_0])))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 3659026867U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */unsigned long long int) var_8)) : (var_5))))));
}
