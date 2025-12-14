/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30695
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)229);
                    var_16 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) 4876417332730141035LL);
}
