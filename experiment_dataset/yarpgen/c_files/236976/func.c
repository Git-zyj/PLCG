/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236976
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
    var_20 = var_16;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_2 [(unsigned short)0] [i_0]))));
                arr_5 [i_1] = ((/* implicit */unsigned int) max((157764557), (((/* implicit */int) (unsigned short)2209))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 46488820450276913LL))));
                var_23 = ((/* implicit */int) min((var_23), (((int) arr_3 [5U] [i_0] [i_0]))));
            }
        } 
    } 
}
