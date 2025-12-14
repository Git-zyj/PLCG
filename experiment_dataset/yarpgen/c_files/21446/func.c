/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21446
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) var_6);
                var_11 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_12 &= min((((/* implicit */int) (unsigned char)7)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) max((var_7), (var_5)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)29975)) : (((/* implicit */int) (short)32767)))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((long long int) var_8))))))));
}
