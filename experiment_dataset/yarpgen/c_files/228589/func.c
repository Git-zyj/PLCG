/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228589
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [8U] [8U] [i_1] = 2147483647;
                var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [8] [i_1 + 2]))))) : (var_3))) < (((/* implicit */unsigned long long int) (+(arr_3 [i_1 - 2] [i_1 + 3]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (-(1623685425)));
}
