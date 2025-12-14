/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232731
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)135)) ? ((+(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)1))))))))));
                arr_6 [i_1] = ((/* implicit */short) arr_0 [i_0]);
                var_19 = ((/* implicit */unsigned long long int) (-(((((var_13) + (var_13))) / ((-(((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) var_8);
    var_21 += ((/* implicit */unsigned char) ((int) (_Bool)1));
}
