/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222802
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
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (max((var_9), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((var_4) - (var_13)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_15 = ((signed char) var_1);
    var_16 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_4)) : (0U))))) / (var_11)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)0] [i_0]))) ^ (((((/* implicit */_Bool) var_10)) ? (((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)6] [i_1]))) : (0U))) : (((arr_3 [i_0]) << (((arr_0 [i_0] [i_1]) - (8018230382842997807LL)))))))));
                arr_5 [i_0] |= ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
}
