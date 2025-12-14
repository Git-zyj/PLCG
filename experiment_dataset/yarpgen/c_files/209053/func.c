/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209053
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
    var_20 = ((/* implicit */int) var_17);
    var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_13)) ? (var_6) : (3620487824U)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_22 ^= ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) arr_2 [i_1] [(unsigned char)10] [(unsigned char)10])), (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (short)-7155)) : (2147483640))))));
                var_23 = ((/* implicit */_Bool) 2147483640);
                var_24 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483640)) ? (6828403207453715248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)210))))) : (min((var_19), (((/* implicit */unsigned int) 2147483636)))))));
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_11)) ? (min((var_17), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) max((-2147483642), (((/* implicit */int) (short)30325)))))))));
}
