/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230672
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
    var_18 -= ((/* implicit */signed char) ((var_13) ? (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_4))))) : (((((/* implicit */_Bool) (~(var_12)))) ? (((var_16) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) : ((~(var_17)))))));
    var_19 = var_3;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (var_5)))) << (((((((/* implicit */_Bool) -240996435)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)-46)))) - (114))))))));
        var_21 = ((/* implicit */int) ((((var_17) + (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) var_10));
                    var_22 = var_5;
                }
            } 
        } 
    }
}
