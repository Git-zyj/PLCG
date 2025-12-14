/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20290
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
    var_16 = ((/* implicit */unsigned char) (~(var_2)));
    var_17 = ((/* implicit */signed char) var_0);
    var_18 = ((_Bool) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((var_7) < (((/* implicit */long long int) ((unsigned int) 2840393947U))))) ? (52966949) : (min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) min(((unsigned short)2), (((/* implicit */unsigned short) (unsigned char)76)))))))));
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) 2840393947U)) ? (var_5) : (((/* implicit */unsigned long long int) 1896068003U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) var_4))));
}
