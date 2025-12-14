/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30086
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 |= ((/* implicit */_Bool) min((((unsigned char) ((((/* implicit */int) var_16)) < (((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned char) arr_4 [i_2 + 1] [i_2 + 1] [i_0 + 1]))));
                    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_12))))) | (max((min((var_8), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) max(((unsigned char)252), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))))));
                    var_20 = ((/* implicit */signed char) var_14);
                    var_21 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) max((arr_5 [i_1] [i_2]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_3))))), (var_9))))));
}
