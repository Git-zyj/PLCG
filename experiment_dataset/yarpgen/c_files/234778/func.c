/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234778
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [i_2]);
                    var_13 |= ((/* implicit */signed char) arr_3 [i_0]);
                    var_14 = ((/* implicit */signed char) max((var_14), ((signed char)-51)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((min((17592186044415LL), (2911085007975947054LL))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (signed char)23)))))));
}
