/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215674
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) arr_4 [i_1]);
                var_11 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (var_3)))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (4294967295U)))) : (((arr_0 [i_0]) / (var_1)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (480154053)));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2331527690U)) ? (1398828777U) : (((/* implicit */unsigned int) -1720853643))))) ? (((((/* implicit */_Bool) -48925832)) ? (-1885024456) : (-373528391))) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) < (var_3)))) : (((/* implicit */int) var_7))));
    var_14 = ((/* implicit */int) var_4);
}
