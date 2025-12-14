/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246600
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)123)) & (((/* implicit */int) (_Bool)1))));
                    var_10 = ((/* implicit */_Bool) max((((/* implicit */long long int) 1073741824)), (3366396686382533422LL)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) max((var_3), (1108519978U)));
}
