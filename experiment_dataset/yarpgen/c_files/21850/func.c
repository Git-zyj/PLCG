/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21850
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
    var_11 &= var_7;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 3])) * (arr_3 [i_0] [i_1 - 4])))));
                var_13 = ((/* implicit */int) (unsigned short)47210);
                var_14 = ((/* implicit */long long int) 1749325353);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) 1749325339);
}
