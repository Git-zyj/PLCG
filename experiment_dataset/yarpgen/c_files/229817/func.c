/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229817
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
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3))) & (var_9)))) ? (var_8) : (((/* implicit */int) ((_Bool) var_3))))) - (((/* implicit */int) ((var_10) != (var_10))))));
    var_12 = ((/* implicit */signed char) var_7);
    var_13 *= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+((-((-(((/* implicit */int) (unsigned short)63693)))))))))));
                var_15 = ((/* implicit */unsigned char) var_1);
            }
        } 
    } 
}
