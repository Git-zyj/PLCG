/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233436
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2236806498U)) ? (var_0) : (8))), (var_9)))) ? (var_4) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)36979))))) ? ((~(-5))) : (max((((/* implicit */int) var_2)), (var_4)))))));
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = var_8;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((min((arr_3 [i_0] [i_1 - 1] [i_1 + 2]), (((/* implicit */unsigned int) var_5)))) % (((((/* implicit */_Bool) max((var_10), (1915749237)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19347))) : (((((/* implicit */unsigned int) var_5)) + (2786977743U))))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
}
