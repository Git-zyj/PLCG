/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226552
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
    var_13 = ((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)145)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */short) (signed char)120);
                var_14 = ((/* implicit */unsigned char) (signed char)-103);
                var_15 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
            }
        } 
    } 
}
