/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54410
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */short) var_6))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_2))) : (((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))) ? (var_1) : (((/* implicit */long long int) var_2)))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_6)) ? (11) : (((/* implicit */int) (short)6121))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_7)))))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned int) -78499292)) : (3573323217U)));
}
