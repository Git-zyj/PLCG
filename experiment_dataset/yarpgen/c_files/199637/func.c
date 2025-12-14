/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199637
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_1] = ((max((max((var_6), (1920432319U))), (1574792322U))) + (var_0));
                    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_5 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
                    arr_7 [i_0] [i_1] = var_2;
                    arr_8 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((648268241U), (4248492568U))))));
                }
            } 
        } 
    } 
    var_11 = min((var_8), (((unsigned int) var_1)));
    var_12 -= min((var_3), ((+(643588222U))));
}
