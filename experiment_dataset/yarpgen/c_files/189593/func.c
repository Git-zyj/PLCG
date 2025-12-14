/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189593
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
    var_18 |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59431))) : (4374691007915525478ULL)));
    var_19 = ((_Bool) ((unsigned long long int) var_14));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 *= max(((~(min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_8)))))), (((unsigned long long int) arr_1 [i_1])));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_4 [i_0]))));
                arr_5 [i_1] [2LL] [(_Bool)1] &= ((/* implicit */short) (!((((!(arr_3 [i_0] [(unsigned char)16] [i_1]))) && (((((/* implicit */_Bool) 923017488)) || (((/* implicit */_Bool) 923017487))))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned int) (-(var_2)))) & (((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_1] [(unsigned char)4])))) : (var_4))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((unsigned int) var_10))))), (((long long int) max((((/* implicit */unsigned short) (signed char)-23)), (var_5))))));
    var_24 = ((/* implicit */long long int) ((unsigned char) (unsigned short)63109));
}
