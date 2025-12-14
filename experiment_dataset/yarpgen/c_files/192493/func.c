/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192493
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
    var_10 = ((/* implicit */_Bool) var_4);
    var_11 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned char)61))))) >= (((/* implicit */int) var_1))));
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned char) max(((signed char)-21), (((/* implicit */signed char) (_Bool)0)))))));
                arr_6 [i_0] [i_1 - 1] [i_1] = ((/* implicit */short) var_9);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)43343)) / (max((((/* implicit */int) (_Bool)1)), (321942872))))))));
}
