/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32463
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
    var_14 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_13))), (((int) (signed char)-102))))) ? (((((/* implicit */_Bool) (-(var_0)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)240))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_1 + 1] [i_0 + 1] [i_0 - 2]));
                    var_16 = ((/* implicit */_Bool) (((-(max((((/* implicit */unsigned int) arr_7 [i_0] [16LL] [i_1] [i_0])), (var_0))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))));
                    var_17 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (((/* implicit */int) (unsigned char)223))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned char) var_1)), (((unsigned char) var_10))));
}
