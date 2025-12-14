/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238069
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
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)76)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1902768216)) ? (((/* implicit */unsigned int) var_15)) : (753635799U)))))))));
    var_18 = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) < (((int) var_12)))) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483584)) ? (var_10) : (((/* implicit */int) (short)-4444))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)42)) <= (((/* implicit */int) (signed char)127))))) : (var_14)))));
    var_19 = var_12;
    var_20 = ((/* implicit */signed char) max((872450063U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)120)))) | (((/* implicit */int) (signed char)127)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) arr_6 [i_1] [i_1]);
                    var_22 *= ((/* implicit */signed char) var_6);
                    var_23 *= ((/* implicit */unsigned int) arr_3 [(signed char)0] [0U] [i_0]);
                }
            } 
        } 
    } 
}
