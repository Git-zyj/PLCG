/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246045
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned int) var_14))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_3)) == (((unsigned int) var_1))))) : (max((((/* implicit */int) (short)-1)), (-1881281726)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_14)) ? (1881281708) : (var_3))) ^ (((/* implicit */int) var_9)))) <= (((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) ((unsigned char) var_5)))))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-29357)) : (((/* implicit */int) var_12))))))) ? (var_14) : (var_14)));
            }
        } 
    } 
    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))) : (var_14)));
}
