/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53560
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
    var_17 = ((/* implicit */unsigned short) var_10);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_1))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11)))));
    var_20 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((long long int) var_2))) ? ((~(((/* implicit */int) (unsigned short)16215)))) : (((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))));
                var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) 8227399968722401245LL)) ? (((/* implicit */int) (short)-30179)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_10))))))));
            }
        } 
    } 
}
