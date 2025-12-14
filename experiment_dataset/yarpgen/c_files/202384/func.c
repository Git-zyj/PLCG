/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202384
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */int) (_Bool)1);
                    arr_8 [i_0] [i_1] [i_2] = ((((/* implicit */int) var_15)) & ((~(((/* implicit */int) max(((signed char)20), (((/* implicit */signed char) var_1))))))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */signed char) ((((((((/* implicit */int) (unsigned short)6033)) / (((/* implicit */int) (unsigned short)40716)))) / (((/* implicit */int) min(((unsigned short)22789), (var_8)))))) - (((/* implicit */int) ((unsigned short) (signed char)-104)))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (min((var_13), (((/* implicit */unsigned int) var_12))))))))));
    var_18 = var_0;
}
