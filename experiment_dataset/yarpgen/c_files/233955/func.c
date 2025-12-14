/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233955
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((var_3), (((/* implicit */unsigned int) (short)15307)))) << (((((/* implicit */int) var_15)) + (72))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_8))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)234))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_1 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_1 + 1])))) : (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 3] [11LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (arr_2 [i_1 - 2] [i_1 - 1] [i_1 - 1])))));
                var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (signed char)111)))), (((/* implicit */int) (signed char)108))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_6);
}
