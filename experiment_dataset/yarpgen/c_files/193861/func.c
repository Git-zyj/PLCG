/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193861
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((int) (unsigned short)65535));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1795731763)), (((unsigned long long int) (+(var_16))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(((long long int) ((short) 6098375425394734424LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) -8117648572865990448LL))));
}
