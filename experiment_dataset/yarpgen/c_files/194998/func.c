/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194998
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
    var_19 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)68)))));
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_16);
                var_21 = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2])))));
            }
        } 
    } 
}
