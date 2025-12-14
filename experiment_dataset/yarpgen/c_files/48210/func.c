/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48210
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
    var_20 = ((/* implicit */short) 8183820983053909536LL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) max(((-(max((((/* implicit */long long int) var_4)), (8183820983053909536LL))))), (((/* implicit */long long int) min(((-(arr_2 [i_1 - 3]))), (((/* implicit */unsigned int) (unsigned short)23957)))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned short)41590))))));
                var_22 = ((/* implicit */_Bool) (unsigned short)33099);
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned long long int) var_8);
    var_24 = ((/* implicit */short) var_17);
}
