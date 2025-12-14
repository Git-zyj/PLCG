/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47286
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
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 4268463424U)), (8ULL)));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_18))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_1 [i_0])), (67065629U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59984)) ^ (arr_2 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((+(var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (((+(arr_2 [i_1] [i_1]))) / (arr_2 [i_0] [i_1])));
                var_22 *= min((min((((/* implicit */int) var_6)), (arr_2 [i_1 + 1] [i_0]))), (max((arr_2 [i_1 - 3] [i_0]), (((/* implicit */int) var_5)))));
            }
        } 
    } 
}
