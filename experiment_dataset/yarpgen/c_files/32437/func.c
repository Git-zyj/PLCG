/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32437
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
    var_15 = ((/* implicit */_Bool) var_6);
    var_16 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) -1113529246);
                    var_18 *= ((/* implicit */_Bool) -1113529246);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */_Bool) var_14);
}
