/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246731
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
    var_19 |= ((/* implicit */int) ((unsigned char) min((min((64172315391624848ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((unsigned short) 1347213125))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) ((-1347213125) % (((/* implicit */int) (_Bool)1))))) ^ (var_5))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_1);
        arr_5 [i_0] = var_0;
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12901)) / (((/* implicit */int) var_13))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((short) var_18)))));
        var_22 = ((/* implicit */signed char) max((var_22), (((signed char) var_12))));
        arr_10 [i_1] = ((/* implicit */_Bool) ((unsigned int) (~(((((/* implicit */_Bool) (unsigned short)12907)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : (var_12))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        arr_15 [i_2] = ((/* implicit */unsigned int) ((unsigned char) 1398594486U));
        arr_16 [i_2 + 2] [6ULL] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-123))))) : (arr_13 [i_2]))), (((/* implicit */unsigned long long int) var_0))));
        arr_17 [i_2] = ((/* implicit */int) 5U);
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_10))));
    }
    var_24 = ((/* implicit */short) ((unsigned int) (_Bool)1));
    var_25 = ((/* implicit */unsigned short) (-(var_7)));
}
