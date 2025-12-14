/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226379
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
    var_20 = ((/* implicit */unsigned short) min((((2027749819U) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -434720774)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) + ((~(381413915U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_1 - 2] [i_1] [(signed char)21] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 4])) : (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-62)), ((unsigned char)255))))) | (min((var_7), (((/* implicit */long long int) arr_0 [i_1]))))))));
                arr_5 [21] [i_1 - 1] [i_1 - 4] = ((/* implicit */unsigned int) var_19);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((/* implicit */int) var_9)) * ((~(((/* implicit */int) var_9))))))));
    var_22 = ((/* implicit */unsigned char) ((-612585282) % (((/* implicit */int) var_10))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_19)) : (max(((~(((/* implicit */int) (short)-1)))), (((/* implicit */int) var_8))))));
}
