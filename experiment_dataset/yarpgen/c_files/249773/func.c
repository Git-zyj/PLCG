/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249773
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
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((2506609725U), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_0 [i_0])))))))));
                var_13 = ((/* implicit */long long int) (unsigned short)65535);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)3))) ? (var_4) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)13042))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (short)12444)) : (((/* implicit */int) (_Bool)1))))) : (var_4)))));
}
