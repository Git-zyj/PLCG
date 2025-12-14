/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236677
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                var_14 = ((/* implicit */int) var_3);
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_8);
    var_16 = ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_8)), (var_6)))) < (((/* implicit */int) ((_Bool) -1)))))));
}
