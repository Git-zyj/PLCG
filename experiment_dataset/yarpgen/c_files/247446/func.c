/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247446
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = min((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))), (var_1));
                    arr_8 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((short) (short)128));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) max((((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) var_7)))), (var_0)));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_3))));
    var_13 = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_5)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)215))))))));
}
