/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203329
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((1327797061U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2655))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) 1193989189U);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (3571893840U) : (478911740U)))))));
}
