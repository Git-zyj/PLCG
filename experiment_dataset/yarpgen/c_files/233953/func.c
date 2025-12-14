/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233953
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned short)3] [i_2] [i_0] = ((/* implicit */int) 0U);
                    var_18 += ((/* implicit */int) (unsigned short)2337);
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_12))))), (var_0)));
}
