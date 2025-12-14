/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229929
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
    var_11 = (unsigned char)233;
    var_12 = ((/* implicit */_Bool) (+(((((_Bool) (_Bool)1)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_5 [7LL] [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) (short)20357));
            }
        } 
    } 
}
