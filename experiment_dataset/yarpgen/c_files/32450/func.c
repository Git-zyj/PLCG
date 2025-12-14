/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32450
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1 + 2]))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)3)) + ((+(((/* implicit */int) (unsigned char)3))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) 3753758880U)) / (var_11)));
    var_17 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) 3149756191U))))) ? (var_12) : (((/* implicit */unsigned long long int) var_14)))));
}
