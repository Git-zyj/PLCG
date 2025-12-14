/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31243
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((unsigned int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)-53))))), (3069629632U))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((signed char) var_4)), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_16)))))))) ? (var_1) : (var_2)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)-52))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_5)) ? (2676156963U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)51), ((signed char)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [2U])) ? (var_3) : (var_16))))))));
                    var_21 = (~(3466766776U));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 421523356U)) ? (3778407225U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((signed char) var_14)))))) || (((/* implicit */_Bool) ((((2954734903U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)88))))) ? ((~(3873443940U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1])))))))))));
                }
            } 
        } 
    } 
}
