/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248040
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((-((+(((/* implicit */int) (signed char)-41)))))) >= (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) (-(1952533853U)));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned short)65535))));
            }
        } 
    } 
}
