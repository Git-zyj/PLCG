/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247893
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) var_9)) ? (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> ((((((_Bool)1) ? (((/* implicit */int) (signed char)-105)) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)10)))))) + (113)))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((arr_1 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (arr_3 [i_0 - 1] [i_0 + 1]) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2])) - (((/* implicit */int) var_3))))) ? (min((var_8), (((/* implicit */unsigned int) arr_2 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92)))))));
            }
        } 
    } 
}
