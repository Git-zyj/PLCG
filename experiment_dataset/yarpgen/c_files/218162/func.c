/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218162
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)31)) * (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)(-127 - 1)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)22))))), (max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_1])))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_5 [i_1] [i_0] [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) < (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_17))))), (var_19)))));
}
