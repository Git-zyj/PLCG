/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234738
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
    var_13 |= ((unsigned short) 1152921504606846976ULL);
    var_14 = ((/* implicit */unsigned short) var_6);
    var_15 &= ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) var_6);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
}
