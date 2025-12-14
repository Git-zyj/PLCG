/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193076
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_3))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) 4805266141323503990LL))));
                    var_18 = ((/* implicit */unsigned short) arr_6 [i_2] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_8);
}
