/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218318
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
    var_16 ^= ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (161812641U)))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned short) (((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */_Bool) ((unsigned short) (unsigned short)42967));
                    arr_9 [(_Bool)1] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (unsigned short)52041)) ? (arr_8 [(short)10] [i_1] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (var_7)));
                    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0]))));
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned int) (_Bool)1);
    }
    var_22 = min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))), (var_7));
}
