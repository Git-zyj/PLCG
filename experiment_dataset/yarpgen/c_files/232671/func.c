/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232671
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) 245737216U);
                arr_6 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((2709133277U), (((/* implicit */unsigned int) arr_1 [i_1]))))), (8382504238870030490ULL))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
