/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199822
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_5);
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((var_7) ? (((/* implicit */long long int) var_4)) : (3939451069660136776LL))) : (-7925000776371239388LL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (var_4))) : (((/* implicit */int) max(((short)12206), (((/* implicit */short) var_7)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_5);
    var_13 -= ((/* implicit */unsigned int) var_9);
}
