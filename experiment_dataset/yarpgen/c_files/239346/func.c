/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239346
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
    var_11 = ((/* implicit */signed char) ((var_9) ? (((((1535445916U) >> (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_4)) - (179))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    var_12 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned char) (_Bool)1))));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-72))))), (min((max((var_3), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min(((short)27723), (((/* implicit */short) (_Bool)1)))))))));
                    var_15 *= ((/* implicit */_Bool) (((((-(var_7))) / (arr_5 [i_2] [i_1 - 3] [i_0]))) - (((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
            } 
        } 
    } 
}
