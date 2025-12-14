/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249053
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
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(827866105)))) ? (((var_11) + (var_3))) : (((/* implicit */unsigned long long int) var_9))))) ? (var_11) : ((-(var_3)))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_2) : (var_3)));
    var_14 -= ((/* implicit */unsigned int) -399570005);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2037076345U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) : (((8364162199704605177ULL) & (((/* implicit */unsigned long long int) arr_6 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)32)) * (((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)6))))))))))));
            }
        } 
    } 
}
