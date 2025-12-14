/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40717
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 &= (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned char) (signed char)-108)), ((unsigned char)0))), ((unsigned char)0)))));
                var_17 &= ((/* implicit */unsigned char) var_10);
                var_18 &= ((/* implicit */signed char) var_6);
            }
        } 
    } 
    var_19 *= ((unsigned char) var_9);
    var_20 -= ((/* implicit */int) ((unsigned int) ((((min((var_12), (((/* implicit */long long int) var_11)))) + (9223372036854775807LL))) >> (((((int) 1243143035U)) - (1243142979))))));
}
