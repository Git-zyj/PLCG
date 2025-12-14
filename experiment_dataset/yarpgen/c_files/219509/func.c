/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219509
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)8978)))) + (((/* implicit */int) ((unsigned char) (unsigned char)122)))))) ? (((/* implicit */int) ((((/* implicit */int) min((var_9), (var_3)))) != (((((/* implicit */int) (unsigned char)213)) >> (((((/* implicit */int) (unsigned char)225)) - (224)))))))) : (((/* implicit */int) (short)29120))));
    var_16 = ((/* implicit */short) ((((/* implicit */int) (short)959)) + (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */short) (unsigned char)24);
                    var_18 = ((short) min((((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (short)6734)) : (((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)12044)))))));
                }
            } 
        } 
    } 
}
