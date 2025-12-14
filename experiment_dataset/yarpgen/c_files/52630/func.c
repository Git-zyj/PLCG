/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52630
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
    var_13 |= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)49)) == (-540757178))) ? ((+((+(((/* implicit */int) var_12)))))) : ((-(((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (var_3)))));
                var_15 = ((/* implicit */unsigned char) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) & (140737488355327LL))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (signed char)106))));
    var_17 = ((/* implicit */unsigned char) var_9);
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_12)))));
}
