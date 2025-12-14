/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196706
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
    var_15 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)58)))) : (((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [5U] [i_0] = ((/* implicit */_Bool) var_10);
                var_16 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)-8570))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_11)) : (var_14)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)38674), (((/* implicit */unsigned short) (signed char)-95))))))))));
}
