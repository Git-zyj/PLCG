/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223809
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
    var_11 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (1044480) : (((/* implicit */int) (short)-7657))))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                var_12 = ((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220)))));
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned int) -1265765000)) : (4294967295U))) : (((unsigned int) (((_Bool)1) ? (4280795313U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)15))))) : (var_6)))) ? (((/* implicit */unsigned int) (~(-1044480)))) : (var_10)));
}
