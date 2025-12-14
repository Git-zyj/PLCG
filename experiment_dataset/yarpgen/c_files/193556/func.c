/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193556
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_1] &= ((max((((/* implicit */unsigned int) max((((/* implicit */int) (short)25880)), (1150448648)))), (929846865U))) >> (((((/* implicit */int) (signed char)63)) - (63))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_1 - 1] [i_1 - 1] [i_2]), (arr_4 [i_1 - 1] [i_1 - 1] [(short)6])))) ? (min((arr_4 [i_1 - 1] [i_1 - 1] [i_2]), (arr_4 [i_1 - 1] [i_1] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1 - 1] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((var_18) ? (((/* implicit */unsigned long long int) var_12)) : (622790854468104798ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_18))))))), (((var_6) == (((/* implicit */unsigned long long int) var_1))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_9))));
}
