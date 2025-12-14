/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34602
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
    var_15 = ((/* implicit */signed char) ((max((3712783559U), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) >> ((((~(var_12))) - (4250712246U)))));
    var_16 = ((/* implicit */int) max((((3712783554U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */unsigned int) 1029643301))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) max((1828739649), (((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) (+(min((arr_1 [i_1]), (var_6)))))))))));
            }
        } 
    } 
}
