/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233577
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
    var_11 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((var_1) - (4196776891U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] = max((arr_3 [i_1 + 2]), (((/* implicit */unsigned long long int) (-(var_6)))));
                var_12 = ((long long int) max((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_5 [i_0 + 3] [i_1])))), ((~(((/* implicit */int) (unsigned char)28))))));
            }
        } 
    } 
}
