/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210183
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
    var_10 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_3 [i_0 + 2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))))))));
            }
        } 
    } 
    var_12 = min((((/* implicit */int) (short)-30375)), (-2147483646));
}
