/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245768
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_3)))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)32)))))));
    var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((signed char) (short)19172))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 += ((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-76)));
                var_23 = ((/* implicit */long long int) arr_1 [(unsigned char)7] [i_1]);
            }
        } 
    } 
}
