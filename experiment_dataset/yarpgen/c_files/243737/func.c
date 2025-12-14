/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243737
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
    var_20 = ((/* implicit */int) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [(signed char)10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1])) << (((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) (signed char)-1)))))));
                    arr_10 [i_2] [i_1] [i_2] &= ((/* implicit */unsigned short) var_18);
                    var_21 = ((/* implicit */int) max((var_21), (2147483647)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), ((+(((unsigned long long int) var_10))))));
    var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_5))) : (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_9))));
}
