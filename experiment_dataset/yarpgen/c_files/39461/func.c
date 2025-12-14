/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39461
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
    var_14 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) ((int) ((signed char) (-(var_0)))));
                var_16 = (+(((int) var_0)));
                var_17 = ((/* implicit */unsigned char) min(((+(min((var_10), (arr_1 [i_0] [i_0]))))), (((int) ((((/* implicit */int) arr_2 [19])) / (var_4))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_3);
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3706901014351356350LL)))))))), (min(((~(var_0))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */int) var_8)))))))));
}
