/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233234
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
    var_20 = ((/* implicit */signed char) max((min((((/* implicit */long long int) max((((/* implicit */signed char) var_19)), ((signed char)-55)))), (min((var_15), (140737488338944LL))))), (((/* implicit */long long int) min((1590316388), (max((((/* implicit */int) (_Bool)1)), (14))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 1416331943))))));
                    arr_7 [i_1] = ((/* implicit */short) var_17);
                }
            } 
        } 
    } 
}
