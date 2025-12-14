/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247975
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
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 8U))) ? (max((8U), (((/* implicit */unsigned int) (unsigned short)25966)))) : (((((/* implicit */_Bool) var_13)) ? (517746160U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))), (((/* implicit */unsigned long long int) 3777221126U))))));
    var_19 = ((unsigned int) max((((((/* implicit */_Bool) var_15)) ? (3777221136U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((2799091158U) << (((var_13) - (1450307921U)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 2] [3U] [i_0] = ((/* implicit */_Bool) (short)-31007);
                    arr_9 [9U] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)55640))))) || (((/* implicit */_Bool) ((signed char) -397189404))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_15);
                    var_20 = ((/* implicit */short) var_16);
                }
            } 
        } 
    } 
}
